// Bob the teenager
// A small example of chatbot using Regex.
// This is an exercise of Exercism.io

use regex::Regex;

pub fn reply(message: &str) -> &str {
    // regex testes

    // True if a question (...?)
    let question = Regex::new(r"\?\s+$").unwrap().is_match(message) || message.ends_with('?');

    // True if a YELL string
    let yell = Regex::new(r"^[^a-z]+$").unwrap().is_match(message);

    // True if a string whith no valid chars
    let nothing = Regex::new(r"^[ \t\t\n\r]+$").unwrap().is_match(message) || message.is_empty();

    // True if have letters on string
    let letters = Regex::new(r"[a-zA-Z]").unwrap().is_match(message);

    // return a string
    match(yell, question, letters, nothing) {
        (true, true, true, false) => "Calm down, I know what I'm doing!", // QUESTIONS??
        (_, true, _, _) => "Sure.", // questions?
        (_, _, _, true) => "Fine. Be that way!", // nothing
        (true, _, true, false) => "Whoa, chill out!", // YELL!!
        _ => "Whatever.", // others
    }
}
