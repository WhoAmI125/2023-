value = int(input())

if value%4 == 0:
    if (value%100 != 0) or (value%400 == 0):
        print("1")
    else:
        print("0")
else:
    print("0")