#TCS Mock Codevita9 swayamwar question. 
def find_largest(num):
  largest=0
  while num>0:
    rem=num%10
    largest=max(largest,rem)
    num//=10
  return largest
    
def find_smallest(num):
  smallest=num
  while num>0:
    rem=num%10
    smallest=min(smallest,rem)
    num//=10
  return smallest

def pairs(num):
  if num==2:
    return 1
  elif num>=3:
    return 2
  return 0
    
n=int(input())
nums=list(map(int,input().split()))
bitscore=[0]*n
for i in range(len(bitscore)):
  curr_score=str((find_largest(nums[i])*11)+(find_smallest(nums[i])*7))
  if len(curr_score)>2:
    curr_score=curr_score[-2:]
  bitscore[i]=curr_score
print(bitscore)

odd_freq=[0]*10
even_freq=[0]*10

for i in range(len(bitscore)):
  index=int(bitscore[i][0])
  if (i+1)%2!=0:
    odd_freq[index]+=1
  else:
    even_freq[index]+=1
count_pair=[0]*10
for i in range(10):
  if odd_freq[i]<=1 and even_freq[i]<=1:
    continue
  count_pair[i]+=pairs(even_freq[i])+pairs(odd_freq[i])
  count_pair[i]=min(2,count_pair[i])
print(sum(count_pair))"""
#for i in bride:
"""f_r=bride.count('r')
f_m=bride.count('m')
g_r=groom.count('r')
g_m=groom.count('m')
print(int(abs(f_r-g_r)+abs(f_m-g_m)))
i=0
while i<n:
  index=groom.find(brode[i])
  if index<0:
    break
  groom=groom[index+1:]+groom[:index]
  bride=bride[i:]
  i+=1
print(int(len(bride)),end="")"""
n=int(input())
bride=list(input())
groom=list(input())
b_p=0
g_p=0
while b_p<n:
    if bride[b_p] in groom and bride[b_p]==groom[g_p]:
        bride.pop(b_p)
        groom.pop(g_p)
        n-=1
    elif bride[b_p] not in groom:
        break
    elif len(groom)>0:
        temp=groom.pop(g_p)
        groom.append(temp)
print(len(bride),end="")