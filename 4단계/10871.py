size, wanted = input().split()

array = []
save = []
array = input().split()

for i in range(int(size)):
    if(int(array[i]) < int(wanted)):
        save.append(int(array[i]))

print(' '.join(map(str, save))) 
