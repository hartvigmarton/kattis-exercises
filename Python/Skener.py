parameters = input()
parameters = parameters.split()
nrRows = int(parameters[0])
nrColumns = int(parameters[1])
increaseRows = int(parameters[2])
increaseColumns = int(parameters[3])
newLines = []
originalLines = []

for i in range(nrRows):
    row = input()
    newLine = ""
    for char in row:
        newLine = newLine + char * increaseColumns
    for j in range(increaseRows):
        newLines.append(newLine)

for i in range(nrRows * increaseRows):
    print(newLines[i])

