use rot13;

#[test]
fn test_rot13_numbers() {
    assert_eq!("Ebg13", rot13::rot13("Rot13"));
}


#[test]
fn test_rot13_space() {
    assert_eq!("Zvpury Znegvarm", rot13::rot13("Michel Martinez"));
}


#[test]
fn test_rot13_special_characters() {
    assert_eq!("Ehfg! @Ebg !# 31", rot13::rot13("Rust! @Rot !# 31"));
}