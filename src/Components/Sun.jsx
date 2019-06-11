import React from "react";
import { makeStyles } from "@material-ui/core/styles";

const useStyles = makeStyles(theme => ({
	Parent: {
		display: "flex",
		position: "relative",
		alignItems: "center",
		justifyContent: "center",
		margin: theme.spacing(2, 0),
		transition: "background 0.2s"
	}
}));

function Sun(props) {
	const classes = useStyles();
	console.log(props);
	return (
		<div
			className={classes.Parent}
			style={{ backgroundColor: `rgba(0,0,0,${props.light * 0.01}` }}>
			<svg
				width="50%"
				x="0px"
				y="0px"
				viewBox="0 0 32 32"
				enableBackground="new 0 0 32 32">
				<path
					fill="#FFD878"
					d="M6.5,26.5c6-1.188,10,4,10,4s4-5.188,10-4c-1.186-6.001,4-10,4-10s-5.187-4-4-10c0,0-6,1-10-4c-4,5-10,4-10,4s0.999,6-4,10C7.5,20.5,6.5,26.5,6.5,26.5z"
				/>
				<circle fill="#FFE4A9" cx="16.5" cy="16.5" r="8" />
				<circle
					fill="none"
					stroke="#4D5152"
					strokeMiterlimit="10"
					cx="16.5"
					cy="16.5"
					r="8"
				/>
				<path
					fill="none"
					stroke="#4D5152"
					strokeMiterlimit="10"
					d="M6.5,26.5c6-1.188,10,4,10,4s4-5.188,10-4c-1.186-6.001,4-10,4-10s-5.187-4-4-10c0,0-6,1-10-4c-4,5-10,4-10,4s0.999,6-4,10C7.5,20.5,6.5,26.5,6.5,26.5z"
				/>
				<animateTransform
					attributeName="transform"
					begin="0s"
					dur="10s"
					type="rotate"
					from="0"
					to="360"
					repeatCount="indefinite"
				/>
			</svg>
		</div>
	);
}

export default Sun;
