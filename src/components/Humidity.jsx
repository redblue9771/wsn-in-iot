import React from 'react'
import './Humidity.css'

function Humidity({ humidity }) {
  return (
    <div className="container">
      <input type="range" min="0" max="100" step="1" value={humidity} defaultValue="0" />
    </div>
  )
}

export default Humidity
