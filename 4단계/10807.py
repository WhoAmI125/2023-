size = int(input())
array = []
count = 0
array = input().split()

wanted = int(input())

for i in range(size):
    if(int(array[i]) == wanted):
        count += 1

print(count)
