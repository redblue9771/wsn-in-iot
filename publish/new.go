package main

import (
	"github.com/tarm/serial"
	"golang.org/x/net/websocket"
	"log"
)

func main() {
	origin := "http://localhost/"
	url := "ws://localhost:8080/"
	ws, err := websocket.Dial(url, "", origin)
	checkErr(err)

	// defer ws.Close()

	c := &serial.Config{Name: "/dev/pts/4", Baud: 9600}
	s, err := serial.OpenPort(c)
	checkErr(err)

	// defer s.Close()

	// n, err := s.Write([]byte("test"))
	// if err != nil {
	// 	log.Fatal(err)
	// }

	buf := make([]byte, 6)
	for {
		n, err := s.Read(buf)
		checkErr(err)
		str := buf[:n]
		ws.Write(str)
	}

}

func checkErr(e error) {
	if e != nil {
		log.Fatal(e)
	}
}
