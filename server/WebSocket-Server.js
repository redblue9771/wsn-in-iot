


const http = require('http');
const WebSocket = require('ws');

const server = http.createServer();
const wss1 = new WebSocket.Server({ noServer: true });
const wss2 = new WebSocket.Server({ noServer: true });

wss1.on('connection', function connection(conn) {
    console.log('1')
    const a = {
        count: 1,
        data: {
            aaa: 123
        }
    }
    setInterval(function () { conn.send(JSON.stringify(a)) }, 2000);

    conn.onmessage = m => {
        wss1.clients.forEach(c => {
            if (c !== conn && c.readyState === WebSocket.OPEN)
                c.send(m.data);
            console.log(m.data)
        })
    }

    conn.onclose = () => {
        console.log('close')
    }
});

wss2.on('connection', function connection(conn) {
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