import React, { useEffect } from "react";
import { makeStyles } from "@material-ui/core/styles";
import AppBar from "@material-ui/core/AppBar";
import Toolbar from "@material-ui/core/Toolbar";
import Typography from "@material-ui/core/Typography";
import Button from "@material-ui/core/Button";
import IconButton from "@material-ui/core/IconButton";
import MenuIcon from "@material-ui/icons/Menu";
import Dialog from "@material-ui/core/Dialog";
import DialogActions from "@material-ui/core/DialogActions";
import DialogContent from "@material-ui/core/DialogContent";
import DialogContentText from "@material-ui/core/DialogContentText";
import DialogTitle from "@material-ui/core/DialogTitle";
import ReactMarkdown from "react-markdown";

const useStyles = makeStyles(theme => ({
	root: {
		flexGrow: 1
	},
	menuButton: {
		marginRight: theme.spacing(2)
	},
	title: {
		flexGrow: 1
	}
}));

function TopBar() {
	const classes = useStyles();
	const [open, setOpen] = React.useState(false);
	const [scroll, setScroll] = React.useState("paper");
	const [content, setContent] = React.useState("");

	const handleClickOpen = scrollType => () => {
		setOpen(true);
		setScroll(scrollType);
	};

	function handleClose() {
		setOpen(false);
	}

	useEffect(() => {
		fetch(
			"https://raw.githubusercontent.com/redblue9771/WSN-Web/master/README.md"
		)
			.then(response => response.text())
			.then(result => setContent(result));
	}, []);
	return (
		<div className={classes.root}>
			<AppBar position="fixed">
				<Toolbar>
					<IconButton
						edge="start"
						className={classes.menuButton}
						color="inherit"
						aria-label="Menu">
						<MenuIcon />
					</IconButton>
					<Typography variant="h6" className={classes.title}>
						物联网实时监控
					</Typography>
					<Button color="inherit" onClick={handleClickOpen("paper")}>
						ABOUT
					</Button>
					<Dialog
						open={open}
						onClose={handleClose}
						scroll={scroll}
						aria-labelledby="scroll-dialog-title">
						<DialogTitle id="scroll-dialog-title">
							About - 关于
						</DialogTitle>
						<DialogContent dividers={scroll === "paper"}>
							<DialogContentText>
								<ReactMarkdown source={content} />
							</DialogContentText>
						</DialogContent>
						<DialogActions>
							<Button onClick={handleClose} color="primary">
								关闭
							</Button>
						</DialogActions>
					</Dialog>
				</Toolbar>
			</AppBar>
		</div>
	);
}

export default TopBar;
