import React from 'react';

import { makeStyles } from '@material-ui/core/styles';
import Typography from '@material-ui/core/Typography';
import Divider from '@material-ui/core/Divider';
import MetricsGraphics from 'react-metrics-graphics';
import TopBar from '../Components/TopBar';
import ButtonBar from '../Components/ButtonBar';
import Paper from '@material-ui/core/Paper'
import HumidityIcon from '../Assets/humidity.png'
import LightIcon from '../Assets/light.png'
import TemperatureIcon from '../Assets/temperature.png'
import Temperature from '../Components/Temperature'
import SunIcon from '../Components/Sun';
import Humidity from '../Components/Humidity'


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
    }
}));


function Index() {
    const classes = useStyles();
    return (
        <React.Fragment >
            <TopBar />
            <Paper className={classes.Paper}>
                <Typography variant="subtitle1" className={classes.Container}>
                    <img src={TemperatureIcon} className={classes.Icon} alt="icon" />实时温度 by Temperature Sensor
                    <Temperature />
                    <MetricsGraphics
                        data={[
                            {
                                'date': new Date('2014-11-01'),
                                'value': 12
                            },
                            {
                                'date': new Date('2014-11-02'),
                                'value': 18

                            },
                            {
                                'date': new Date('2014-11-03'),
                                'value': 16

                            },
                            {
                                'date': new Date('2014-11-04'),
                                'value': 15
                            },
                            {
                                'date': new Date('2014-11-05'),
                                'value': 1
                            }
                        ]}
                        x_accessor="date"
                        y_accessor="value"
                        flip_area_under_y_value={28}
                        full_width
                    />
                </Typography>
                <Divider />
                <Typography variant="subtitle1" className={classes.Container}>
                    <img src={HumidityIcon} className={classes.Icon} alt="icon" />实时湿度 by Humidity Sensor</Typography>
                <Humidity />
                <MetricsGraphics
                    data={[
                        {
                            'date': new Date('2014-11-01'),
                            'value': 12
                        },
                        {
                            'date': new Date('2014-11-02'),
                            'value': 18

                        },
                        {
                            'date': new Date('2014-11-03'),
                            'value': 16

                        },
                        {
                            'date': new Date('2014-11-04'),
                            'value': 15
                        },
                        {
                            'date': new Date('2014-11-05'),
                            'value': 1
                        }
                    ]}
                    x_accessor="date"
                    y_accessor="value"
                    flip_area_under_y_value={28}
                    full_width
                />
                <Divider />
                <Typography variant="subtitle1" className={classes.Container}>
                    <img src={LightIcon} className={classes.Icon} alt="icon" />实时光亮 by Light Sensor</Typography>
                <SunIcon />
                <MetricsGraphics
                    data={[
                        {
                            'date': new Date('2014-11-01'),
                            'value': 12
                        },
                        {
                            'date': new Date('2014-11-02'),
                            'value': 18

                        },
                        {
                            'date': new Date('2014-11-03'),
                            'value': 16

                        },
                        {
                            'date': new Date('2014-11-04'),
                            'value': 15
                        },
                        {
                            'date': new Date('2014-11-05'),
                            'value': 1
                        }
                    ]}
                    x_accessor="date"
                    y_accessor="value"
                    flip_area_under_y_value={28}
                    full_width
                />
            </Paper>
            <ButtonBar />
        </React.Fragment >
    )
}

export default Index;