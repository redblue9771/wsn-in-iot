import React from 'react';
import "./Humidity.css"

function Humidity() {
    return (
        <div className="container">
            <input type='range' min='0' max='50' step='1' value='10' defaultValue='0' />
        </div>
    )
}

export default Humidity;