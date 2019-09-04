import operator

candidates = {}
while True:
    candidate = input()
    if candidate == "***":
        break
    if candidate not in candidates:
        candidates[candidate] = 1
    else:
        candidates[candidate] = candidates[candidate] + 1

maxCount: int = 0
for key in candidates:
    if maxCount > 1:
        break
    elif candidates[key] == max(candidates.items(), key=operator.itemgetter(1))[1]:
        maxCount = maxCount + 1

if maxCount > 1:
    print("Runoff!")
else:
    print(max(candidates.items(), key=operator.itemgetter(1))[0])
    

