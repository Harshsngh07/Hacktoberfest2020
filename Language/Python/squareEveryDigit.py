def square_digits(num):
    z = ''.join(str(int(i)**2) for i in str(num))
    return int(z)

    