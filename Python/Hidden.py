cipher = input()

cipher = cipher.split()
key = cipher[0]
message = cipher[1]
failed = False
present = False
positions = []
cursor = 0
keyPositions = {}


for letter in key:
    print("letter" + letter)
    for character in message:
        print("character" + character)
        if character == letter:
            positions.append(cursor)
            keyPositions[character] = cursor
            present = True
            print(len(positions))
            for position in positions:
                if cursor < position:
                    print(cursor,position)
                    failed = True
                    print("FAIL")
                    break
            cursor = 0
            break
        else:
            cursor += 1
    if not present:
        failed = True
        print("FAIL")
        break
    else:
        present = False
if not failed:
    print("PASS")