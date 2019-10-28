string = input("Enter a string to check for palindromicity ")
revstring=""
for i in range(len(string)-1, -1, -1):
     revstring=revstring+string[i]
print("Str = " + string)
print("REVStr = " + revstring)
if revstring == string:
    print("It is a palindrome")
else:
    print("It is not a palindrome")
