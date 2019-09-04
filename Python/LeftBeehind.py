

while True:
    numbers = input()
    numbers = numbers.split(" ")
    sweet = int(numbers[0])
    sour = int(numbers[1])
    if sweet == 0 and sour == 0:
        break
    elif sweet + sour == 13:
        print("Never speak again.")
    elif sweet > sour:
        print("To the convention.")
    elif sweet < sour:
        print("Left beehind.")
    else:
        print("Undecided.")