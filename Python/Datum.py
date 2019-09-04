from _datetime import date
import calendar
testInput = input()
testInput = testInput.split()
day = int(testInput[0])
month = int(testInput[1])
myDate = date(2009,month,day)
print(calendar.day_name[myDate.weekday()])
