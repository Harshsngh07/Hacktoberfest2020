import codecs

# ROT13 algorithm implemented in Python language.

def rot13(text):
    return codecs.encode(text, "rot-13")


def main():
    print(rot13('Hello World'))


if __name__ == "__main__":
    main()
