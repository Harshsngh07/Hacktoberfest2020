//Hi there
//This will be a basic switch case as you'd see in c/c++ but written in a way so as to teach it to someone familiar with c but new to rust
//This will be heavily commented because it is designed as a teaching tool for anyone who comes later
//In Rust you use a "match" statement instead of a "switch" statement and you match to patterns, meaninng that logical OR "||" is not used in these
//To match an alternate pattern you use a single pipe "|" such as line 19 below, we are matching to characters, which we enclose in single quotes
use std::io; //This is similar to the #include section in a c program, but we do not need to declare a namespace here

fn main(){  //
let mut userinput = String::new();
//

	io::stdin().read_line(&mut userinput) //This is how you safely read from the console, note the &mut means we are getting a pointer!
		.expect("Failed to read line"); //You should include an expected failure mode to be safe here
		for i in userinput.trim().chars(){ //The .trim() removes whitespace and such, the .chars() reads each character separately so we can use character cases
		let chosen=i; //every let statement needs a semicolon, like most lines of rust.
		match chosen {
'A' => println!("You entered A."), //Please note that this should match only the uppercase unicode A, and excludes accents

'B'|'b' => println!("You entered either B or b"), //Remember, we are actually supplying "alternative patterns" for the match
//This is important because we still have || for a logical or in rust, but you don't use a logical or in this statement, as we are matching patterns so we need to use a single pipe for "alternative pattern"

'C'|'3' => println!("You entered C or the number 3"), //Remember that here we are matching to a character with single quotes, you use double quotes for strings

'x'|'y'|'z' => println!("You entered x, y or z"), //You can string together the pattern cases

'X'|'v' => println!("You entered X or v."), //Note that we are ending the match cases with commas, not semicolons

_ => println!(""), //This is the catch all case in a match statement (which will run if we don't use .trim() above!)
} //close the curly brace, you don't need to finish match with a semicolon.

https://doc.rust-lang.org/book/appendix-02-operators.html
