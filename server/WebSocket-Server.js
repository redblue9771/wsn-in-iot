


const http = require('http');
const WebSocket = require('ws');

const server = http.createServer();
const wss1 = new WebSocket.Server({ noServer: true });
const wss2 = new WebSocket.Server({ noServer: true });
let count = 0;

wss1.on('connection', function connection(conn) {
    count++;


    wss1.clients.forEach(c => {
        const data = {
            type: 1,
            count: count,
            temperature: 50,
            humidity: 50,
            light: 10
        }
        c.send(JSON.stringify(data));
    })

    conn.onmessage = m => {
        wss1.clients.forEach(c => {
            if (c !== conn && c.readyState === WebSocket.OPEN)
                c.send(m.data);
        })
    }

    conn.onclose = () => {
        count--;
        console.log('close')
        wss1.clients.forEach(c => {
            const data = {
                type: 1,
                temperature: 50
            }
            if (c !== conn && c.readyState === WebSocket.OPEN)
                c.send(JSON.stringify(data));
        })
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