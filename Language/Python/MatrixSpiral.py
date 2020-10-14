"""This program takes a matrix of size mxn as input, and prints the matrix in a spiral format.
for example: 
input ->> 
matrix = [
    [6, 9, 8],
    [1, 8, 0],
    [5, 1, 2],
    [8, 0, 3],
    [1, 6, 4],
    [8, 8, 10]
]
output ->> [6, 9, 8, 0, 2, 3, 4, 10, 8, 8, 1, 8, 5, 1, 8, 1, 0, 6]"""


class Solution:
    def solve(self, matrix):
        ls=list()
        while matrix:
            ls.extend(matrix[0])
            #print(ls)
            matrix=list(zip(*matrix[1:]))[::-1]
            #print(matrix)
        return ls