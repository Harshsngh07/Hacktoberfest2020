package main

import "github.com/claudemuller/algos/publish-subscribe/go/src"

func main() {
	b := &src.Broker{}
	p := &src.Publisher{
		Broker: b,
	}
	s := &src.Subscriber{
		Broker: b,
	}

	// Subscribe to broker with subscriber's Speak func
	b.Subscribe("speak", s.Speak)

	// Start publisher's time wasting
	p.Start()

	// Unsubscribe subscriber from publisher
	s.Shutdown()
}
