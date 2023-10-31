num = int(input("enter your num"))
num_str = str(num)
digit_sum = 0

for digit in num_str:
    digit_sum += int(digit)

print("Sum of digits:", digit_sum)
 