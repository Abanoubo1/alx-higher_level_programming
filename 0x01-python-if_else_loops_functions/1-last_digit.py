#!usr/bin/python3
import number
number = random.randint(-10000, 10000)
digit = abs (numer) % 10
if number < 0 :
    digit = -digit
print(f"last digit of {number:d} and is ", end="")
if digit > 5:
    print("greater rhan 5")
elif digit == 0:
    print("0")
else:
    print("less than 6 and not 0")
