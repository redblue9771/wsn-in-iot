import React from 'react';
import "./Humidity.css"

function Humidity(props) {
    return (
        <div className="container">
            <input type='range' min='0' max='100' step='1' value={props.humidity} defaultValue='0' />
        </div>
    )
}

export default Humidity;