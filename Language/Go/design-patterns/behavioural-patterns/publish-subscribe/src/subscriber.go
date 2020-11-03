package src

import "fmt"

type Subscriber struct {
	Broker       *Broker
	Subscription int
}

func (s *Subscriber) Shutdown() {
	fmt.Println("Subscriber: Unsubscribing...")
	s.Broker.Unsubscribe("speak", s.Subscription)
}

func (s *Subscriber) Speak(d string) {
	fmt.Printf("Subscriber: Publisher (by way of Broker) says \"%s\"\n", d)
}
