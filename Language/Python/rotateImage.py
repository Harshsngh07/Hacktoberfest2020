#This is code for rotating an image

r=int(input("Enter the size of matrix:"))
m=[[int(input()) for i in range(r)]for j in range(r)]
for ele in m:
    print(ele)
print()
#STEP 1:Transpose
for i in range(r):
    for j in range(i,r):
        temp=m[i][j]
        m[i][j]=m[j][i]
        m[j][i]=temp
#STEP 2:Flip Horizontal
for i in range(r):
    for j in range((r)//2):
        temp=m[i][j]
        m[i][j]=m[i][r-1-j]
        m[i][r-1-j]=temp

print()
for ele in m:
    print(ele)