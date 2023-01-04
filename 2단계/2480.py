a,b,c = input().split()
a = int(a)
b = int(b)
c = int(c)
money = 0

if(a==b==c):
    money = 10000 + a * 1000
elif(a==b):
    money = 1000 + a * 100
elif(a==c):
    money = 1000 + a * 100
elif(c==b):
    money = 1000 + b * 100
else:
    max = 0
    if(a>max):
        max = a
    if(b>max):
        max = b
    if(c>max):
        max = c
    money = 100 * max

print(money)