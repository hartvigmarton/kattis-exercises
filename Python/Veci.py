import itertools

number = input()
digits = []
thereIsLarger = False
for i in number:
        digits.append(i)

permutations = []
#print(list(itertools.permutations(digits)))
for i in list(itertools.permutations(digits)):
    value = ""
    for digit in i:
        value += digit
    permutations.append(int(value))

permutations.sort()
for i in permutations:
    if i > int(number):
        thereIsLarger = True
        print(i)
        break
if not thereIsLarger:
    print(0)
#print(permutations)
##for i in digits:
  ##  largest = largest + str(i)

