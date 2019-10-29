//Hi there
//This will be a basic switch case as you'd see in c/c++ but written in a way so as to teach it to someone familiar with c but new to rust
//This will be heavily commented because it is designed as a teaching tool for anyone who comes later.
//If you see something that looks really weird in rust, odds are decent that it's because it's safer to do that way, even if it requires some learning
//Rust is designed with concurrency and threading in mind, and memory safety as a top design goal. The compiler *tries* to make sure you don't bake in race conditions.
//This tiny program aims to walk you through getting up and running with a match case, which is the rough equivalent of a switch stamement in C/C++
//In Rust the match statement will match to patterns, meaning that logical OR "||" is not used in this example
//To match an alternate pattern you use a single pipe "|" such as line 19 below, we are matching to characters (as that's how the console input is parsed).
//Enclosing in single quotes usually gives you a character, which is a four byte particle in rust. This prevents over/underflow and treats everything as unicode characters
//You can even use an emoji as a character, and it will fit the character data type, which we will not usually need to specify explicitly.

use std::io; //This is similar to the #include section in a c program, but we do not need to declare a namespace here. This gives us console io.

fn main(){  //fn is the most common function declaration form in rust, main is similar to c, and will usually be used within an "fn" context.
let mut userinput = String::new(); //let is how you make a variable, the "mut" keyword here means mutable, otherwise this would be treated as an immutable variable when passing to other code
//We specify String::new() to get an empty string, without this specification you can end up with a mismatched data type later in the program.

	io::stdin().read_line(&mut userinput) //This is how you safely read from the console, note the &mut means we are borrowing userinput! (Rust cares about ownership of variables.)
		.expect("Failed to read line"); //You should include an expected failure mode to be safe here
		for i in userinput.trim().chars(){ //The .trim() removes whitespace and such, the .chars() reads each character separately so we can use character cases note that rust's for loop is weird coming from a c background.
		let chosen=i; //every let statement needs a semicolon, like most lines of rust.
		match chosen { //Now we are matching a pattern, in this case a pattern one character long
'A' => println!("You entered A."), //Please note that this should match only the uppercase unicode A, and excludes accents

'B'|'b' => println!("You entered either B or b"), //Remember, we are actually supplying "alternative patterns" for the match
//This is important because we still have || for a logical or in rust, but you don't use a logical or in this statement, as we are matching patterns so we need to use a single pipe for "alternative pattern"

'C'|'3' => println!("You entered C or the number 3"), //Remember that here we are matching to a character with single quotes, you use double quotes for strings

'x'|'y'|'z' => println!("You entered x, y or z"), //You can string together the pattern cases

'X'|'v' => println!("You entered X or v."), //Note that we are ending each line of the match statement with a comma, not a semicolon

_ => println!("Invalid input!"), //This is the catch all case in a match statement (which will run if we don't use .trim() above!)
			// You will see this execute for *every single character* not matched in this statement. 
} //close the curly brace, you don't need to finish match with a semicolon.

//For further reading on some of the weird little symbols that might trip you up in rust, I would start here:
//  https://doc.rust-lang.org/book/appendix-02-operators.html
