'''
Get the nth Fibonacci number
'''


def Fibonacci(n):
    if n < 0:
        return "Incorrect input"
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        return Fibonacci(n-1) + Fibonacci(n-2)


pos = int(input("Position of the wanted Fibonacci number ? "))
print(f"Fibonacci number at position {pos} is: {Fibonacci(pos)}")
