'use strict';


const http = require('http');
const WebSocket = require('ws');

const server = http.createServer();
const wss1 = new WebSocket.Server({ noServer: true });
const wss2 = new WebSocket.Server({ noServer: true });

wss1.on('connection', function connection(conn) {

    conn.onmessage = m => {
        wss1.clients.forEach(c => {
            if (c !== conn && c.readyState === WebSocket.OPEN)
                c.send(m.data);
            console.log(m.data)
        })
    }
});

wss2.on('connection', function connection(conn) {
    console.log(object)
    conn.onmessage = m => {
        wss2.clients.forEach(c => {
            if (c !== conn && c.readyState === WebSocket.OPEN)
                c.send(m.data);
            console.log(m.data)
        })
    }
});

server.on('upgrade', function upgrade(request, socket, head) {
    const pathname = request.url;
    if (pathname === '/') {
        wss1.handleUpgrade(request, socket, head, function done(ws) {
            wss1.emit('connection', ws, request);
        });
    } else if (pathname === '/bar') {
        wss2.handleUpgrade(request, socket, head, function done(ws) {
            wss2.emit('connection', ws, request);
        });
    } else {
        socket.destroy();
    }
});

server.listen(8080);