import React, { useState } from 'react';
import Websocket from 'react-websocket';


import { makeStyles } from '@material-ui/core/styles';
import Typography from '@material-ui/core/Typography';
import Divider from '@material-ui/core/Divider';
import TopBar from '../Components/TopBar';
import Paper from '@material-ui/core/Paper'
import HumidityIcon from '../Assets/humidity.png'
import LightIcon from '../Assets/light.png'
import TemperatureIcon from '../Assets/temperature.png'
import Temperature from '../Components/Temperature'
import SunIcon from '../Components/Sun';
import Humidity from '../Components/Humidity'

import LinearProgress from '@material-ui/core/LinearProgress';
import AppBar from '@material-ui/core/AppBar';
import Toolbar from '@material-ui/core/Toolbar';
import IconButton from '@material-ui/core/IconButton';
import Fab from '@material-ui/core/Fab';
import AccountDetailsIcon from '@material-ui/icons/Phonelink';
import CopyrightIcon from '@material-ui/icons/Copyright';
import CheckIcon from '@material-ui/icons/Check';
import green from '@material-ui/core/colors/green';
import CircularProgress from '@material-ui/core/CircularProgress';
import Badge from '@material-ui/core/Badge';
import clsx from 'clsx';
import Link from '@material-ui/core/Link';


export const socketStatus = React.createContext();

const useStyles = makeStyles(theme => ({
    Paper: {
        padding: theme.spacing(2),
        margin: theme.spacing(7, 0)
    },
    Container: {
        padding: theme.spacing(2, 0)
    },
    Icon: {
        width: '1.5em',
        verticalAlign: 'top',
        marginRight: theme.spacing(0.2)
    },
    link: {
        margin: 0,
        padding: 0
    },
    text: {
        padding: theme.spacing(2, 2, 0),
    },
    paper: {
        paddingBottom: 50,
    },
    list: {
        marginBottom: theme.spacing(2),
    },
    subheader: {
        backgroundColor: theme.palette.background.paper,
    },
    appBar: {
        top: 'auto',
        bottom: 0,
    },
    grow: {
        flexGrow: 1,
    },
    fabButton: {
        position: 'absolute',
        zIndex: 1,
        top: -30,
        left: 0,
        right: 0,
        margin: '0 auto',
    },
    buttonSuccess: {
        backgroundColor: green[500],
        '&:hover': {
            backgroundColor: green[700],
        },
    },
    fabProgress: {
        color: green[500],
        position: 'absolute',
        top: -6,
        left: -6
    },
    buttonProgress: {
        color: green[500],
        position: 'absolute',
        top: '50%',
        left: '50%',
        marginTop: -12,
        marginLeft: -12,
    }
}));




function Index() {
    const classes = useStyles();

    const [state, setState] = useState({ temperature: 0, humidity: 0, light: 0 });
    const [count, setCount] = useState(0);
    const [loading, setLoading] = useState(false);
    const [url, setUrl] = useState('ws://localhost:8080/');

    const buttonClassname = clsx({
        [classes.buttonSuccess]: loading,
    });

    fetch("https://qqluqm.coding.io").then(res => res.json()).then(res => setUrl(res.url))


    return (
        <React.Fragment >
            <TopBar />
            <Paper className={classes.Paper}>
                <Typography variant="subtitle1" className={classes.Container}>
                    <img src={TemperatureIcon} className={classes.Icon} alt="icon" />实时温度 by Temperature Sensor : {`${state.temperature}℃`}
                    <Temperature total={`${state.temperature}%`} />
                </Typography>
                <Divider />
                <Typography variant="subtitle1" className={classes.Container}>
                    <img src={HumidityIcon} className={classes.Icon} alt="icon" />实时湿度 by Humidity Sensor : {`${state.humidity}%`}
                    <Humidity humidity={state.humidity} />
                </Typography>
                <Divider />
                <Typography variant="subtitle1" className={classes.Container}>
                    <img src={LightIcon} className={classes.Icon} alt="icon" />实时光亮 by Light Sensor : {`${state.light}%`}
                    <SunIcon light={state.light} />
                </Typography>
            </Paper>

            <AppBar position="fixed" color="primary" className={classes.appBar}>
                {loading && <LinearProgress color="secondary" />}
                <Toolbar>
                    <IconButton edge="start" color="inherit" aria-label="Open drawer">
                        <Badge badgeContent={count} color="secondary">
                            <AccountDetailsIcon />
                        </Badge>
                    </IconButton>
                    <Fab className={classes.fabButton}>
                        {!loading && <CircularProgress size={68} className={classes.fabProgress} />}
                        <Fab color="secondary" className={buttonClassname} onClick={() => {
                            setLoading(!loading);
                            setCount(0);
                        }}>
                            {loading ? <CheckIcon /> : "Start"}
                        </Fab>
                        {loading && <Websocket url={url} onMessage={data => {
                            const tmp = JSON.parse(data);
                            console.log(tmp)
                            tmp.type === 0 ? setCount(tmp.count) : setState(tmp);
                        }} debug={true} />}
                    </Fab>
                    <div className={classes.grow} />
                    <Link href="https://redblue.fun" color="inherit" target="_blank">
                        <IconButton edge="end" color="inherit">
                            <CopyrightIcon />
                        </IconButton>
                    </Link>
                </Toolbar>
            </AppBar >
        </React.Fragment >
    )
}

export default Index;