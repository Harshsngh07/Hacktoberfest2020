package src

import "fmt"

type event struct {
	name    string
	actions []func(string)
}

type Broker struct {
	subscriptions []*event
}

func (b *Broker) Notify(ev string, d string) {
	sub, _ := b.getSubscription(ev)
	for _, a := range sub.actions {
		a(d)
	}
}

func (b *Broker) Subscribe(ev string, f func(string)) int {
	fmt.Println("Broker: Subscribing a subscriber...")

	sub, i := b.getSubscription(ev)
	sub.actions = append(sub.actions, f)

	return i
}

func (b *Broker) getSubscription(n string) (*event, int) {
	for i, s := range b.subscriptions {
		if s.name == n {
			return s, i
		}
	}

	sub := &event{
		name: n,
	}
	b.subscriptions = append(b.subscriptions, sub)

	return sub, len(b.subscriptions) - 1
}

func (b *Broker) Unsubscribe(ev string, i int) {
	fmt.Println("Broker: Unsubscribing subscriber...")

	sub, _ := b.getSubscription(ev)
	sub.actions = append(sub.actions[:i], sub.actions[i+1:len(sub.actions)]...)
}
