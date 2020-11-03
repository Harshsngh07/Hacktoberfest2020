package observer

object main extends App {
  val p = new Publisher()
  val s = new Subscriber(p)

  // Subscribe to publisher with subscriber's Speak func
  s.subscription = p.subscribe(s.speak)
  println(s"Main: subscriber's ID is ${s.subscription}")

  // Start publisher's time wasting
  p.start()

  // Unsubscribe subscriber from publisher
  s.shutdown()
}
