
def sum_digits3(n):
   r = 0
   while n:
       r, n = r + n % 10, n // 10
   return r

nrTests = input()
nrTests = int(nrTests)

for i in range(nrTests):
    number = input()
    numberAsInt = int(number)
    sumDigits = sum_digits3(numberAsInt)


    goal = sumDigits - 1
    while sumDigits != goal:
        numberAsInt -= 1
        sumDigits = sum_digits3(numberAsInt)
    print(numberAsInt)