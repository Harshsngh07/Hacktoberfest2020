# Program to multiply two matrices
A=[]
n=int(input("Enter N for N x N matrix: "))         
print("Enter the element ::>")
for i in range(n): 
   row=[]                                      #temporary list to store the row
   for j in range(n): 
      row.append(int(input()))           #add the input to row list
      A.append(row)                      #add the row to the list
print(A)
# [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
#Display the 2D array
print("Display Array In Matrix Form")
for i in range(n):
   for j in range(n):
      print(A[i][j], end=" ")
   print()                                        #new line
B=[]
n=int(input("Enter N for N x N matrix : "))           #3 here
#use list for storing 2D array
#get the user input and store it in list (here IN : 1 to 9)
print("Enter the element ::>")
for i in range (n): 
   row=[]                                      #temporary list to store the row
   for j in range(n): 
      row.append(int(input()))           #add the input to row list
      B.append(row)                       #add the row to the list
print(B)
# [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
#Display the 2D array
print("Display Array In Matrix Form")
for i in range(n):
   for j in range(n):
      print(B[i][j], end=" ")
   print()                                           
result = [[0,0,0], [0,0,0], [0,0,0]] 
for i in range(len(A)): 
   for j in range(len(B[0])): 
      for k in range(len(B)): 
         result[i][j] += A[i][k] * B[k][j] 
print("The Resultant Matrix Is ::>")
for r in result: 
   print(r) 