array = [["sample", -1]]
max = -1

alphabet = input()

for i in range(len(alphabet)):

    aaaa = alphabet[i].lower()
    
    if aaaa in array[0][0]:
        continue
    
    if max == alphabet.count(aaaa):
        array.pop()
        array.append(["sample", -1])
        max = alphabet.count(aaaa)

    elif max < alphabet.count(aaaa):
        array.pop()
        array.append([aaaa, alphabet.count(aaaa)])
        max = alphabet.count(aaaa)


if array[0][1] == -1:
    print("?")
else:
    print(array[0][0].upper())