import Divider from "@material-ui/core/Divider";
import Paper from "@material-ui/core/Paper";
import { makeStyles } from "@material-ui/core/styles";
import Typography from "@material-ui/core/Typography";
import { SnackbarProvider } from "notistack";
import React, { useState } from "react";
import HumidityIcon from "../Assets/humidity.png";
import LightIcon from "../Assets/light.png";
import TemperatureIcon from "../Assets/temperature.png";
import BottomBar from "../Components/BottomBar";
import Humidity from "../Components/Humidity";
import SunIcon from "../Components/Sun";
import Temperature from "../Components/Temperature";
import TopBar from "../Components/TopBar";

export const socketStatus = React.createContext(null);

const useStyles = makeStyles(theme => ({
	Paper: {
		padding: theme.spacing(2),
		margin: theme.spacing(7, 0)
	},
	Container: {
		padding: theme.spacing(2, 0)
	},
	Icon: {
		width: "1.5em",
		verticalAlign: "top",
		marginRight: theme.spacing(0.2)
	},
	link: {
		margin: 0,
		padding: 0
	}
}));

function Index() {
	const classes = useStyles();

	const [data, setData] = useState({
		count: 0,
		temperature: 0,
		humidity: 0,
		light: 0
	});

	return (
		<React.Fragment>
			<TopBar />
			<Paper className={classes.Paper}>
				<Typography variant="subtitle1" className={classes.Container}>
					<img
						src={TemperatureIcon}
						className={classes.Icon}
						alt="icon"
					/>
					实时温度 by Temperature Sensor :{" "}
					{data.temperature ? `${data.temperature}℃` : " - ℃"}
					<Temperature total={`${data.temperature}%`} />
				</Typography>
				<Divider />
				<Typography variant="subtitle1" className={classes.Container}>
					<img
						src={HumidityIcon}
						className={classes.Icon}
						alt="icon"
					/>
					实时湿度 by Humidity Sensor :{" "}
					{data.humidity ? `${data.humidity}%` : " - "}
					<Humidity humidity={data.humidity} />
				</Typography>
				<Divider />
				<Typography variant="subtitle1" className={classes.Container}>
					<img src={LightIcon} className={classes.Icon} alt="icon" />
					实时光亮 by Light Sensor :{" "}
					{data.light ? `${data.light}` : " - "}
					<SunIcon light={data.light} />
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
					vertical: "top",
					horizontal: "right"
				}}
				autoHideDuration={1700}>
				<socketStatus.Provider value={{ data, setData }}>
					<BottomBar />
				</socketStatus.Provider>
			</SnackbarProvider>
		</React.Fragment>
	);
}

export default Index;
