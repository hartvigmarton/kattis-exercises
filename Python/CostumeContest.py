nrContestants = input()
nrContestants =int(nrContestants)
costumes = {}
winnerCostumes = []
for i in range(nrContestants):
    costume = input()
    if costumes.__contains__(costume):
        costumes[costume] += 1
    else:
        costumes[costume] = 1


leastFrequentCostume = min(costumes,key = lambda x:costumes.get(x))

for costume in costumes:
    if costumes[costume] == costumes[leastFrequentCostume]:
        winnerCostumes.append(costume)

winnerCostumes.sort()
for costume in winnerCostumes:
    print(costume)
