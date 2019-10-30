// this lib revert strings

pub fn reverse(input: &str) -> String {
    // get the input split in chars, revert and return string
    input.chars().rev().collect::<String>()
}
