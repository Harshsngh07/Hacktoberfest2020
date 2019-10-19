from array import *

arr = array("i", [])

n = int(input("Enter the number of elements: "))

for i in range(n):
    x = int(input("Enter the number : "))
    arr.append(x)

print(arr)