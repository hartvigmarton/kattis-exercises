MORSE_CODE_DICT = { 'A':'.-', 'B':'-...',
                    'C':'-.-.', 'D':'-..', 'E':'.',
                    'F':'..-.', 'G':'--.', 'H':'....',
                    'I':'..', 'J':'.---', 'K':'-.-',
                    'L':'.-..', 'M':'--', 'N':'-.',
                    'O':'---', 'P':'.--.', 'Q':'--.-',
                    'R':'.-.', 'S':'...', 'T':'-',
                    'U':'..-', 'V':'...-', 'W':'.--',
                    'X':'-..-', 'Y':'-.--', 'Z':'--..',
                    ',':'.-.-', '_':'..--',
                    '?':'----', '.':'---.'}


while True:
    cypher = input()
    #if there is no input stop reading
    if len(cypher.strip()) == 0:
        break
    else:
        length = ""
        morseCode = ""
        message = ""


        for character in cypher:
            morseCode = morseCode + MORSE_CODE_DICT[character]
            length = length + str(len(MORSE_CODE_DICT[character]))
        length = length[::-1]

        cursor = 0

        for digit in length:
            message = message + list(MORSE_CODE_DICT.keys())[list(MORSE_CODE_DICT.values()).index(morseCode[cursor:cursor + int(digit)])]
            cursor = cursor + int(digit)

        print(message)



