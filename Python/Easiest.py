def sum_digits3(n):
   r = 0
   while n:
       r, n = r + n % 10, n // 10
   return r

while True:
    number = input()
    if number == "0":
        break
    else:
        number = int(number)
        sum = sum_digits3(number)
        offset = 11
        while True:
            product = offset * number
            if sum_digits3(product) == sum:
                break
            else:
                offset += 1
        print(offset)