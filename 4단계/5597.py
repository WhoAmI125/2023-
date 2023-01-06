array = []

for i in range(30):
    array.append(0)

for i in range(28):
    a = int(input())
    array[a-1] = 1

for i in range(30):
    if(array[i] != 1):
        print(i+1)