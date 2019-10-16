import  random
import string
def create_password(n):
    allChars = list(string.ascii_letters)+list(string.digits)+list(string.punctuation)
    passphrase = []
    for i in range(n):
        tmp = random.choice(allChars)
        passphrase.append(tmp)
    res = "".join(passphrase)
    return res
#Test 1
test1 = create_password(16)
print(test1)

#Test 2
test2 = create_password(32)
print(test2)
