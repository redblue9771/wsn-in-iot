const http = require('http');
const WebSocket = require('ws');

const server = http.createServer();
const wss1 = new WebSocket.Server({ noServer: true });
const wss2 = new WebSocket.Server({ noServer: true });
let count = 0;

const getRandomArbitrary = (min, max) => {
    return Math.random() * (max - min) + min;
}

const broadcast = (ws) => {
    ws.clients.forEach(c => {
        c.send(getRandomArbitrary(0, 100));
    })
}

wss1.on('connection', function connection(conn) {
    count++;
    // setInterval(() => {
    //     broadcast(wss1);
    // }, 1000);

    console.log(`Count:${count}`)

    conn.onmessage = m => {
        wss1.clients.forEach(c => {
            if (c !== conn && c.readyState === WebSocket.OPEN)
                c.send(m.data);
            console.log(m.data);
        })
    }

    conn.onclose = () => {
        count--;
        console.log(`Count:${count}`)
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