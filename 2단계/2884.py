hour, minute = input().split()
hour = int(hour)
minute = int(minute)

if(minute < 45):
    hour = hour - 1

minute = 60 -45 + minute
if(minute >= 60):
    minute = minute - 60

if(hour == -1):
    hour = 23

print(hour, minute)