// ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13)
// is a simple letter substitution cipher that replaces a letter
// with the 13th letter after it, in the alphabet.
//
// lib to use:

// sum 13 to char and return it
fn cp13(c: char) -> char {
    ((c as u8) + 13) as char
}

// sub 13 from the char and return it
fn cm13(c: char) -> char {
    ((c as u8) - 13) as char
}

pub fn rot13(value: &str) -> String {
    // change chars and return the string
    value.chars().map(|c| {
        match c {
            'a' ..= 'm' => cp13(c),
            'A' ..= 'M' => cp13(c),
            'n' ..= 'z' => cm13(c),
            'N' ..= 'Z' => cm13(c),
            _ => c
        }
    }).collect()
}
