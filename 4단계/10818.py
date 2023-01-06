size = int(input())
array = []
array = input().split()

max = -1000000
min = 1000000

for i in range(size):
    if int(array[i]) > max:
        max = int(array[i])
    
    if int(array[i]) < min:
        min = int(array[i])

print(min, max)