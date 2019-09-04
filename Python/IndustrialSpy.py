nrTests = input()
nrTests = int(nrTests)
nrPrimes = 0
totalNumber = ""
for i in range(nrTests):
    snippet = input()
    for char in snippet:
        if int(char) % 2 != 0 and int(char) != 9:
            nrPrimes += 1
        totalNumber = totalNumber + char