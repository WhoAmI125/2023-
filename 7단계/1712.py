a,b,c = input().split()

a, b, c = int(a), int(b), int(c)

breakpoint = 0

if(b >= c):
    print(-1)
else:
   breakpoint = a/(c-b) +1

   print(int(breakpoint))