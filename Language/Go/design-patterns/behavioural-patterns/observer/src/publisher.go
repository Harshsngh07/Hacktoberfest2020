package src

import (
	"fmt"
	"time"
)

type Publisher struct {
	subscriptions []func(string)
}

func (p *Publisher) Start() {
	fmt.Println("Publisher: Wasting time...")
	time.Sleep(time.Second * 5)
	p.end()
}

func (p *Publisher) end() {
	fmt.Println("Publisher: Notifying subscribers that I am done wasting time...")
	p.notify("Done")
}

func (p *Publisher) notify(d string) {
	for _, s := range p.subscriptions {
		s(d)
	}
}

func (p *Publisher) Subscribe(f func(string)) int {
	fmt.Println("Publisher: Subscribing a subscriber...")

	p.subscriptions = append(p.subscriptions, f)

	return len(p.subscriptions) - 1
}

func (p *Publisher) Unsubscribe(i int) {
	fmt.Println("Publisher: Unsubscribing subscriber...")

	p.subscriptions = append(p.subscriptions[:i], p.subscriptions[i+1:len(p.subscriptions)]...)
}
