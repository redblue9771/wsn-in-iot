import React from 'react';
import "./Humidity.css"

function Humidity() {
    return (
        <div className="container">
            <input type='range' min='0' max='32' step='1' value='8' />
        </div>
    )
}

export default Humidity;