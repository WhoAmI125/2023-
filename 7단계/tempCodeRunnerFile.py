num = int(input())

addup = 1
i = 1
if num == 1:
    i = 0
elif num <= 7:
    i = 1
else:
    while(num >= addup):
        addup += 6*i
        i += 1

print(i)