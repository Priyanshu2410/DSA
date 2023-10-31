print("Calculator Menu:")
print("1. Addition")
print("2. Subtraction")
print("3. Multiplication")
print("4. Division")

choice = int(input("Enter your choice (1-4): "))

num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

if choice == 1:
    result = num1 + num2
    operation = "+"
elif choice == 2:
    result = num1 - num2
    operation = "-"
elif choice == 3:
    result = num1 * num2
    operation = "*"
elif choice == 4:
    if num2 != 0:
        result = num1 / num2
        operation = "/"
    else:
        print("Error: Division by zero!")
        exit()
else:
    print("Invalid choice!")
    exit()

print("Result: {} {} {} = {}".format(num1, operation, num2, result))
