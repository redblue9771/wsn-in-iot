const http = require('http');
const WebSocket = require('ws');

const server = http.createServer();
const wss1 = new WebSocket.Server({ noServer: true });
const wss2 = new WebSocket.Server({ noServer: true });
let count = 0;

// const getRandomArbitrary = (min, max) => {
//     return Math.random() * (max - min) + min;
// }

const broadcast = (ws, m) => {
    ws.clients.forEach(c => {
        c.send(m);
    })
}

wss1.on('connection', function connection(conn) {
    count++;

    console.log(`c${count}`)

    conn.onopen = () => {
        broadcast(wss1, `c${count}`);
    }

    conn.onmessage = m => {
        broadcast(wss1, m.data);
    }

    conn.onclose = () => {
        count--;
        broadcast(wss1, `c${count}`);
    }
});

wss2.on('connection', function connection(conn) {
    conn.onmessage = m => {
        broadcast(wss1, m.data);
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