import math
mile = input()
paces = (5280 / 4854) * 1000
mile = float(mile)
print(int(round(mile * paces)))