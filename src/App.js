import React, { Component } from "react";
import Index from "./Pages/Index";
import CssBaseline from "@material-ui/core/CssBaseline";

class App extends Component {
	render() {
		return (
			<React.Fragment>
				<CssBaseline />
				<Index />
			</React.Fragment>
		);
	}
}

export default App;
