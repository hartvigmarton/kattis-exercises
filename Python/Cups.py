nrCups = input()
nrCups = int(nrCups)
cups = {}
sizes = []
for i in range(nrCups):
    cup = input()
    cup = cup.split()
    cupSize = 0
    if cup[0].isdigit():
        cups[int(int(cup[0])/2)] = cup[1]
        sizes.append(int(int(cup[0]) / 2))
    else:
        cups[int(cup[1])] = cup[0]
        sizes.append(int(cup[1]))

sizes.sort()
#print(sizes)
for i in sizes:
    print(cups.get(i))