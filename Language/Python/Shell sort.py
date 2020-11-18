#imported math and defined the list
import math
list_val = [1,87,10000,1245]
n = len(list_val)
gap = math.floor(n / 2)
while gap > 0:
    for i in range(gap, n):
        temp = list_val[i]
        j = i
# used to compare elements at equal gap.
        while j >= gap and temp < list_val[j - gap]:
            list_val[j] = list_val[j - gap]
            j -= gap
        list_val[j] = temp
    gap = math.floor(gap / 2)
print(list_val)
