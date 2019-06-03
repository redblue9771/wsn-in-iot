import React from 'react';
import './Temperature.css'

function Temperature() {
    return (
        <div className="thermometer">
            <span>Now：<strong>38℃</strong></span>
            <div className="glass">
                <div className="liquid"></div>
                <svg className="ruler">
                    <rect x="0px" y="0" width="20%" height="100%" fill="url(#ticks--very-low)" rx="1" />
                    <rect x="20%" y="0" width="20%" height="100%" fill="url(#ticks--low)" rx="1" />
                    <rect x="40%" y="0" width="20%" height="100%" fill="url(#ticks--moderate)" rx="1" />
                    <rect x="60%" y="0" width="20%" height="100%" fill="url(#ticks--high)" rx="1" />
                    <rect x="80%" y="0" width="20%" height="100%" fill="url(#ticks--very-high)" rx="1" />
                    <defs>
                        <pattern id="ticks--very-low" className="ticks--very-low" width="60px" height="100%" patternUnits="userSpaceOnUse" x="0">
                            <line x1="1px" x2="1px" y2="6px" />
                            <line x1="12px" x2="12px" y2="6px" />
                            <line x1="24px" x2="24px" y2="6px" />
                            <line x1="36px" x2="36px" y2="6px" />
                            <line x1="48px" x2="48px" y2="10px" />
                        </pattern>
                        <pattern id="ticks--low" className="ticks--low" width="60px" height="100%" patternUnits="userSpaceOnUse" x="0">
                            <line x1="1px" x2="1px" y2="6px" />
                            <line x1="12px" x2="12px" y2="6px" />
                            <line x1="24px" x2="24px" y2="6px" />
                            <line x1="36px" x2="36px" y2="6px" />
                            <line x1="48px" x2="48px" y2="10px" />
                        </pattern>
                        <pattern id="ticks--moderate" className="ticks--moderate" width="60px" height="100%" patternUnits="userSpaceOnUse" x="0">
                            <line x1="1px" x2="1px" y2="6px" />
                            <line x1="12px" x2="12px" y2="6px" />
                            <line x1="24px" x2="24px" y2="6px" />
                            <line x1="36px" x2="36px" y2="6px" />
                            <line x1="48px" x2="48px" y2="10px" />
                        </pattern>
                        <pattern id="ticks--high" className="ticks--high" width="60px" height="100%" patternUnits="userSpaceOnUse" x="0">
                            <line x1="1px" x2="1px" y2="6px" />
                            <line x1="12px" x2="12px" y2="6px" />
                            <line x1="24px" x2="24px" y2="6px" />
                            <line x1="36px" x2="36px" y2="6px" />
                            <line x1="48px" x2="48px" y2="10px" />
                        </pattern>
                        <pattern id="ticks--very-high" className="ticks--very-high" width="60px" height="100%" patternUnits="userSpaceOnUse" x="0">
                            <line x1="1px" x2="1px" y2="6px" />
                            <line x1="12px" x2="12px" y2="6px" />
                            <line x1="24px" x2="24px" y2="6px" />
                            <line x1="36px" x2="36px" y2="6px" />
                            <line x1="48px" x2="48px" y2="10px" />
                        </pattern>
                    </defs>
                </svg>
            </div>
        </div>
    )
}

export default Temperature;