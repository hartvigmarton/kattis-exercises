import math
nrDigits = input()
totalSum = 0
for x in range(int(nrDigits)):
    digit = input()
    power = digit[-1:]
    digit = digit[:-1]
    totalSum +=  math.pow(int(digit),int(power))

print(int(totalSum))
