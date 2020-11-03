package observer

class Publisher {
  var subscriptions: List[String => Unit] = List()

  def start(): Unit = {
    println("Publisher: Wasting time...")
    Thread.sleep(5000)
    end()
  }

  def end(): Unit = {
    println("Publisher: Notifying subscribers that I am done wasting time...")
    notify("Done")
  }

  def notify(d: String): Unit = {
    subscriptions.foreach(_(d))
  }

  def subscribe(f: String => Unit): Option[Int] = {
    println("Publisher: Subscribing a subscriber...")
    subscriptions = subscriptions ++ List(f)
    Some(subscriptions.length - 1)
  }

  def unsubscribe(i: Option[Int]): Unit = {
    println("Publisher: Unsubscribing a subscriber...")
    i match {
      case Some(x) =>
        subscriptions = subscriptions.patch(x, Nil, 1)
        println(s"Publisher: removing subscriber $x")
      case None =>
    }
  }
}
