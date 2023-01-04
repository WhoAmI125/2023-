total = int(input())
num = int(input())
track = 0

for i in range(num):
    price,amount = input().split()
    track = track +(int(price)*int(amount))

if total != track:
    print("No")
else:
    print("Yes")
