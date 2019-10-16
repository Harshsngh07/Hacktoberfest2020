#Python Program to validate Password using Regex

import re
def main():
    passwd = input("Enter Password:")
    reg = "^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[@$!%*#?&])[A-Za-z\d@$!#%*?&]{6,20}$"
    #compiling regex
    pat = re.compile(reg)
    #searching regex
    mat = re.search(pat,passwd)
    #validating conditions
    if mat:
        print("password is valid")
    else:
        print("password is invalid")
#Driver Code
if __name__ == '__main__':
    main()
