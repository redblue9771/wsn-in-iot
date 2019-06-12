package main

import (
	"fmt"
	"github.com/tarm/serial"
	"golang.org/x/net/websocket"
	"log"
	"strings"
)

func main() {
	origin := "https://localhost:3030/"
	// res, err := http.Get("https://qqluqm.coding.io/")
	// checkErr(err)

	// var dat map[string]interface{}
	// 	err:=json.Unmarshal([]byte(res),&dat)
	// checkErr(err)
	// 	fmt.Println(dat["url"])
	url := "ws://111.230.150.41:2019/"
	ws, err := websocket.Dial(url, "", origin)

	checkErr(err)

	defer ws.Close()

	c := &serial.Config{Name: "/dev/ttyS3", Baud: 9600}
	s, err := serial.OpenPort(c)
	checkErr(err)

	defer s.Close()

	buf := make([]byte, 6)
	str := ""
	for {
		str = ""
		for {
			n, err := s.Read(buf)
			checkErr(err)
			str += string(buf[:n])
			if strings.Contains(str, "\r\n") {
				break
			}
		}
		str = strings.TrimRight(str, "\r\n")
		fmt.Println(str)
		_, err := ws.Write([]byte(str))
		checkErr(err)
	}

}

func checkErr(e error) {
	if e != nil {
		log.Fatal(e)
	}
}
