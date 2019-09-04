data = input()
data = data.split()
b = int(data[0])
br = int(data[1])
bs = int(data[2])
a = int(data[3])
aS = int(data[4])

bobPension = 0
alicePension = 0
alicePensionAge =  a
for i in range(b,br):
    bobPension = bobPension + bs

while alicePension <= bobPension:
    alicePension = alicePension + aS
    alicePensionAge += 1
print(alicePensionAge)