package src

import (
	"fmt"
	"time"
)

type Publisher struct {
	Broker *Broker
}

func (p *Publisher) Start() {
	fmt.Println("Publisher: Wasting time...")
	time.Sleep(time.Second * 5)
	p.end()
}

func (p *Publisher) end() {
	fmt.Println("Publisher: Notifying subscribers (through Broker) that I am done wasting time...")
	p.Broker.Notify("speak", "Done")
}
