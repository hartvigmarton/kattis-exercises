time = input()

time = time.split(" ")
hour = int(time[0])
minutes = int(time[1])

if minutes < 45:
    minutes = 60 - abs(minutes - 45)
    hour -= 1
else:
    minutes = minutes - 45

if hour < 0:
    hour = 24 + hour

print(hour,minutes)