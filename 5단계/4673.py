array = []

for i in range(1,10001):
    splited = list(map(int, str(i)))
    value = 0

    for j in range(len(splited)):
        value += splited[j]
    value += i
    #print(i, splited, value)
    #print(value)
    array.append(value)

for k in range(1,10001):
    if k not in array:
        print(k)