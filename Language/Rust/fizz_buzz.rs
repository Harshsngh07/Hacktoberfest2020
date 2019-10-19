// basic method fizzbuzz

fn fizz_buzz(number: u32) -> () {

    for i in 1..number + 1 {
		if i % 3 == 0 && i % 5 == 0 {
			println!("FizzBuzz");
		} else if i % 3 == 0 {
			println!("Fizz");
		} else if i % 5 == 0 {
			println!("Buzz");
		}
	}
    
}
