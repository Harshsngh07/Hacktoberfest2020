package src

import "fmt"

type Subscriber struct {
	Publisher    *Publisher
	Subscription int
}

func (s *Subscriber) Shutdown() {
	fmt.Println("Subscriber: Unsubscribing...")
	s.Publisher.Unsubscribe(s.Subscription)
}

func (s *Subscriber) Speak(d string) {
	fmt.Printf("Subscriber: Publisher says \"%s\"\n", d)
}
