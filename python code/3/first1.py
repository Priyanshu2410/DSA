def factorial_recursive(n):
    if n == 0:
        return 1
    else:
        return n * factorial_recursive(n - 1)
number = int(input("Enter a number: "))
factorial = factorial_recursive(number)
print("Factorial of", number, "is", factorial)
