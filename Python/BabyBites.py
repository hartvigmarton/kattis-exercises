numbers = input()
numbers = int(numbers)
counter = 1
arildCount = input()
arildCount = arildCount.split()
fishy = False
for i in arildCount:
    if i != "mumble":
        if int(i) != counter:
            fishy = True
    counter = counter + 1

if fishy:
    print("something is fishy")
else:
    print("makes sense")