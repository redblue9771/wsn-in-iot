import Divider from '@material-ui/core/Divider'
import Paper from '@material-ui/core/Paper'
import { makeStyles } from '@material-ui/core/styles'
import Typography from '@material-ui/core/Typography'
import { SnackbarProvider } from 'notistack'
import React, { useState } from 'react'
import HumidityIcon from '../assets/humidity.png'
import LightIcon from '../assets/light.png'
import TemperatureIcon from '../assets/temperature.png'

import Humidity from '../components/Humidity'
import SunIcon from '../components/Sun'
import Temperature from '../components/Temperature'
import TopBar from '../components/TopBar'
import BottomBar from '../components/BottomBar'

const socketStatus = React.createContext(null)

const useStyles = makeStyles((theme) => ({
  Paper: {
    padding: theme.spacing(2),
    margin: theme.spacing(7, 0),
  },
  Container: {
    padding: theme.spacing(2, 0),
  },
  Icon: {
    width: '1.5em',
    verticalAlign: 'top',
    marginRight: theme.spacing(0.2),
  },
  link: {
    margin: 0,
    padding: 0,
  },
}))

function Index() {
  const classes = useStyles()

  const [temperature, setTemperature] = useState(0)
  const [humidity, setHumidity] = useState(0)
  const [light, setLight] = useState(0)

  return (
    <React.Fragment>
      <TopBar />
      <Paper className={classes.Paper}>
        <Typography variant="subtitle1" className={classes.Container}>
          <img src={TemperatureIcon} className={classes.Icon} alt="icon" />
          实时温度 by Temperature Sensor : {temperature ? `${temperature}℃` : ' - ℃'}
          <Temperature total={`${temperature}%`} />
        </Typography>
        <Divider />
        <Typography variant="subtitle1" className={classes.Container}>
          <img src={HumidityIcon} className={classes.Icon} alt="icon" />
          实时湿度 by Humidity Sensor : {humidity ? `${humidity}%` : ' - '}
          <Humidity humidity={humidity} />
        </Typography>
        <Divider />
        <Typography variant="subtitle1" className={classes.Container}>
          <img src={LightIcon} className={classes.Icon} alt="icon" />
          实时光亮 by Light Sensor : {light ? `${light}` : ' - '}
          <SunIcon light={light} />
        </Typography>
        <Divider />
        {/* <Typography
					variant="h6"
					align="center"
					className={classes.Container}>
					-· 统计监控 ·-
				</Typography> */}
      </Paper>
      <SnackbarProvider
        maxSnack={3}
        dense
        anchorOrigin={{
          vertical: 'top',
          horizontal: 'right',
        }}
        autoHideDuration={1000}
      >
        <socketStatus.Provider value={{ setHumidity, setLight, setTemperature }}>
          <BottomBar socketStatus={socketStatus} />
        </socketStatus.Provider>
      </SnackbarProvider>
    </React.Fragment>
  )
}

export default Index
