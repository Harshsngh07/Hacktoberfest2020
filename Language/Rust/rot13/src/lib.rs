// ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13)
// is a simple letter substitution cipher that replaces a letter
// with the 13th letter after it, in the alphabet.
//
// lib to use:

fn cp13(c: char) -> char {
    ((c as u8) + 13) as char
}

fn cm13(c: char) -> char {
    ((c as u8) - 13) as char
}

pub fn rot13(value: &str) -> String {
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
