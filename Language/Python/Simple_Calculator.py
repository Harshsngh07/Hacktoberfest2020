# Simple Calculator
# By yash872
# I wrote a simple calculator to compute addition, subtraction, multiplication, division, and modulo. It's not the best grammar-wise since I was lazy and tried to use as few "if"s as possible, but it works.

num1=int(input("Enter first number"))

print("1.Add")
print("2.Subtract")
print("3.Multiply")
print("4.Divide")
print("5. Modulo")

choice = input("Enter choice(1/2/3/4):")

num2 = int(input("Enter second number: "))

if choice == "1":
   print (num1 + num2)
elif choice == '2':
   print (num1 - num2)
elif choice == '3':
   print (num1 * num2)
elif choice == '4':
   print (num1 / num2)
elif choice == '5':
   print (num1 % num2)
else:
   print("Invalid input")
