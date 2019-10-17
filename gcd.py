'''
A python program to find gcd of two number.

GCD=greatest common divisor 
a=30
b=2
30=1*2*3*5
2=1*2

GCD=multiplication of common factors
   =1*2
   =2

gcd1 is based on euclidean algorithm.

'''








def gcd1(a,b):
  if not a:return b
  return gcd1(b%a,a)


def gcd2(a,b):
    while b:a,b=b,a%b
    return a

print(gcd2(30,2))
print(gcd1(30,2))
