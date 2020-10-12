# Print the nth prime number. 

import math
def nthprime(number):
    primes=[2]
    numbercheck=3
    while len(primes)<number:
        if isPrime(numbercheck):
            primes.append(numbercheck)
        numbercheck+=2
    return primes.pop()

def isPrime(numbercheck):
    for i in range(2,math.ceil(math.sqrt(numbercheck))+1):
        if numbercheck % i==0:
            return False
    return True




if __name__=="__main__":
    n=int(input())
    print(nthprime(n))