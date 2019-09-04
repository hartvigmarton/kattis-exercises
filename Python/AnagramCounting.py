from itertools import product,permutations


letters = ()
test = list(letters)
while True:
    text = input()
    if not text:
        break
    for i in text:
        test.append(i)
    print(set(test))
    #print(list(permutations(set(test))))
    print(permutations(test))
    test.clear()