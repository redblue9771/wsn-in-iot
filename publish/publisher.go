
package main
 
import (
    "golang.org/x/net/websocket"
    "fmt"
    "log"
)
 
var origin = "https://qqluqm-8080-cgapjb.dev.ide.live"
var url = "wss://qqluqm-8080-cgapjb.dev.ide.live"
 
func main() {
    ws, err := websocket.Dial(url, "", origin)
    if err != nil {
        log.Fatal(err)
    }
    message := []byte("hello, world!你好")
    _, err = ws.Write(message)
    if err != nil {
        log.Fatal(err)
    }
    fmt.Printf("Send: %s\n", message)
 
    var msg = make([]byte, 512)
    m, err := ws.Read(msg)
    if err != nil {
        log.Fatal(err)
    }
    fmt.Printf("Receive: %s\n", msg[:m])
 
	ws.Close()//关闭连接
}
// package main

// import (
//     "log"

// 	"github.com/goburrow/serial"
// )

// func main() {
// 	port, err := serial.Open(&serial.Config{Address: "/dev/pts/2"})
// 	if err != nil {
// 		log.Fatal(err)
// 	}
//     defer port.Close()
//     buf:=make([]byte,512)
// port.Read(buf)
// log.Fatal(string(buf))


// 	_, err = port.Write([]byte("serial"))
// 	if err != nil {
// 		log.Fatal(err)
// 	}
// }