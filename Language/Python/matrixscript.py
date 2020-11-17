

import re
matrix = []
N,M = map(int, input().split())
for i in range(N):
    matrix.append(list(input()))
print (re.sub(r'(?<=[A-Za-z0-9])([^A-Za-z0-9]+)(?=[A-Za-z0-9])',' ',"".join("".join(decode) for decode in zip(*matrix))))
