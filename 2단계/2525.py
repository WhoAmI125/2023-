hour, minute = input().split()
time = int(input())
hour = int(hour)
minute = int(minute)

if(minute+time >= 60):
    hour = hour + 1
    minute = minute+time-60

    while minute >= 60:
        hour = hour + 1
        minute = minute-60
else:
    minute = minute+time

if hour > 23:
    hour = hour - 24

print(hour, minute)