import React from 'react';

import { makeStyles, createMuiTheme, responsiveFontSizes } from '@material-ui/core/styles';
import Typography from '@material-ui/core/Typography';
import Divider from '@material-ui/core/Divider';
import TopBar from '../Components/TopBar';
import ButtonBar from '../Components/ButtonBar';
import Paper from '@material-ui/core/Paper';
import HumidityIcon from '../Assets/humidity.png'
import LightIcon from '../Assets/light.png'
import TemperatureIcon from '../Assets/temperature.png'
import Temperature from '../Components/Temperature'
import Humidity from '../Components/Humidity'



const useStyles = makeStyles(theme => ({
    Paper: {
        padding: theme.spacing(2),
    },
    Icon: {
        width: '1.5em',
        verticalAlign: 'top',
        marginRight: theme.spacing(0.2)
    }
}));

let theme = createMuiTheme();
theme = responsiveFontSizes(theme);

function Index() {
    const classes = useStyles();
    return (
        <React.Fragment >
            <TopBar />
            <Paper theme={theme}>
                <Typography variant="subtitle1" className={classes.Paper}>
                    <img src={TemperatureIcon} className={classes.Icon} alt="icon" />实时温度 by Temperature Sensor
                    <p>38℃</p>
                    <Temperature />
                </Typography>
                <Divider />
                <Typography variant="subtitle1" className={classes.Paper}>
                    <img src={HumidityIcon} className={classes.Icon} alt="icon" />实时湿度 by Humidity Sensor</Typography>
                <Humidity />
                <Divider />
                <Typography variant="subtitle1" className={classes.Paper}>
                    <img src={LightIcon} className={classes.Icon} alt="icon" />实时光亮 by Light Sensor</Typography>

            </Paper>
            <ButtonBar />
        </React.Fragment >
    )
}

export default Index;