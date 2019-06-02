import React from 'react';
import { makeStyles } from '@material-ui/core/styles';
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

const useStyles = makeStyles(theme => ({
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
        left: -6,
        zIndex: 1,
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


function ButtonBar() {
    const classes = useStyles();
    const [loading, setLoading] = React.useState(false);
    const [success, setSuccess] = React.useState(false);
    const timer = React.useRef();
    const buttonClassname = clsx({
        [classes.buttonSuccess]: success,
    });

    React.useEffect(() => {
        return () => {
            clearTimeout(timer.current);
        };
    }, []);

    function handleButtonClick() {
        if (!loading) {
            setSuccess(false);
            setLoading(true);
            timer.current = setTimeout(() => {
                setSuccess(true);
                setLoading(false);
            }, 2000);
        }
    }
    return (
        <AppBar position="fixed" color="primary" className={classes.appBar}>
            {success ? <LinearProgress color="secondary" /> : <LinearProgress color="secondary" hidden />}
            <Toolbar>
                <IconButton edge="start" color="inherit" aria-label="Open drawer">
                    <Badge badgeContent={0} color="secondary">
                        <AccountDetailsIcon />
                    </Badge>
                </IconButton>
                <Fab className={classes.fabButton}>
                    <Fab color="secondary" className={buttonClassname} onClick={handleButtonClick}>
                        {success ? <CheckIcon /> : "Start"}
                    </Fab>
                    {loading && <CircularProgress size={68} className={classes.fabProgress} />}
                </Fab>
                <div className={classes.grow} />
                <Link href="https://redblue.fun" color="inherit" target="_blank">
                    <IconButton edge="end" color="inherit">
                        <CopyrightIcon />
                    </IconButton>
                </Link>
            </Toolbar>
        </AppBar>

    );
}

export default ButtonBar;