#Program to remove duplicates from a string

def rem_Duplicates(mystring):
    d = dict()
    newstring = ''
    for i in mystring:
        if i not in d:
            d[i] = 1
            newstring = newstring + i
    return newstring

def main():
    mystring = "THis is A sample for this program"
    newstr = rem_Duplicates(mystring)
    print(newstr)

if __name__ == "__main__":
    main()