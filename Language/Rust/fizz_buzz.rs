// basic method fizzbuzz.

fn fizz_buzz(number: u32) -> () {

    for i in 1..number + 1 {
        // if number is divisible by both 5 and 3, print "FizzBuzz"
		if i % 3 == 0 && i % 5 == 0 {
			println!("FizzBuzz");
            
        // if number is divisible by 3, print "Fizz"
		} else if i % 3 == 0 {
			println!("Fizz");

        // if number is divisible by 5, print "Buzz"
		} else if i % 5 == 0 {
			println!("Buzz");
		}
	}
    
}
