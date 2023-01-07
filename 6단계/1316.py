size = int(input())
count = 0

for i in range(size):
    letters = input()
    array = []
    wrong = 0

    for j in range(len(letters)):
        if j == 0:
            array.append(letters[j])
        elif (letters[j] in array) and letters[j-1] != letters[j]:
            wrong = 1
        else:
            array.append(letters[j])

    if wrong != 1:
        count += 1

    #print(count)
print(count)