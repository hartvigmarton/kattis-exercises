import sys

for i in sys.stdin:
    date = i
    if len(date.strip()) == 0:
        break
    else:
        dateParts = date.split(" ")
        startTimeParts = dateParts[3].split(":")
        endTimeParts = dateParts[4].split(":")
        hourDifference: int = int(endTimeParts[0]) - int(startTimeParts[0])
        boringPart: str = dateParts[0] + " " + dateParts[1] + " " + dateParts[2] + " "

        minuteDifference: int = 0
        if int(endTimeParts[1]) >= int(startTimeParts[1]):
            minuteDifference = int(endTimeParts[1]) - int(startTimeParts[1])

        else:
            minuteDifference = 60 - abs(int(endTimeParts[1]) - int(startTimeParts[1]))
            hourDifference = hourDifference - 1
        print(boringPart + str(hourDifference) + " hours " + str(minuteDifference) + " minutes")
