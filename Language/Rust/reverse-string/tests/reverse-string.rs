// Tests for reverse-string from exercism

use reverse_string::*;

/// Process a single test case for the property `reverse`
fn process_reverse_case(input: &str, expected: &str) {
    assert_eq!(&reverse(input), expected)
}

#[test]
/// empty string
fn test_an_empty_string() {
    process_reverse_case("", "");
}

#[test]
/// a word
fn test_a_word() {
    process_reverse_case("robot", "tobor");
}

#[test]
/// a capitalized word
fn test_a_capitalized_word() {
    process_reverse_case("Ramen", "nemaR");
}

#[test]
/// a sentence with punctuation
fn test_a_sentence_with_punctuation() {
    process_reverse_case("I'm hungry!", "!yrgnuh m'I");
}

#[test]
/// a palindrome
fn test_a_palindrome() {
    process_reverse_case("racecar", "racecar");
}

#[test]
/// wide characters
fn test_wide_characters() {
    process_reverse_case("子猫", "猫子");
}
