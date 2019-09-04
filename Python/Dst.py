tests = input()


def forward(change, hour, minutes):
    change = int(change)
    hour = int(hour)
    minutes = int(minutes)
    if change < 60:
        minutes = minutes + change
        if minutes > 60:
            minutes = minutes - 60
            hour = hour + 1
    elif change == 60:
        hour = hour + 1
    elif 60 < change < 120:
        change = change - 60
        hour = hour + 1
        if change + minutes > 60:
            hour = hour + 1
            minutes = (change + minutes) - 60
        else:
            minutes = change + minutes

    elif change == 120:
        hour = hour + 2
    if hour == 24:
        hour = 0
    if minutes == 60:
        minutes = 0
        hour = hour + 1
    print(hour, minutes)


def backward(change, hour, minutes):
    change = int(change)
    hour = int(hour)
    minutes = int(minutes)
    if change < 60:
        minutes = minutes - change
        if minutes < 0:
            minutes = 60 - abs(minutes)
            hour = hour - 1
    elif change == 60:
        hour = hour - 1
    elif 60 < change < 120:
        change = change - 60
        hour = hour - 1
        if change + minutes > 60:
            hour = hour + 1
            minutes = (change + minutes) - 60
        else:
            minutes = change + minutes

    elif change == 120:
        hour = hour + 2

    if hour == 24:
        hour = 0
    elif hour < 0:
        hour = 24 + hour
    if minutes == 60:
        minutes = 0
        hour = hour + 1
    print(hour, minutes)


for i in range(int(tests)):

    instructions = input()
    instructions = instructions.split(" ")
    if instructions[0] == "F":
        forward(instructions[1],instructions[2],instructions[3])
    else:
        backward(instructions[1],instructions[2],instructions[3])



