package main

import "github.com/claudemuller/algos/observer/go/src"

func main() {
	p := &src.Publisher{}
	s := &src.Subscriber{
		Publisher: p,
	}

	// Subscribe to publisher with subscriber's Speak func
	p.Subscribe(s.Speak)

	// Start publisher's time wasting
	p.Start()

	// Unsubscribe subscriber from publisher
	s.Shutdown()
}
