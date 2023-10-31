def factorial_iterative(n):
    result = 1
    for i in range(2, n + 1):
        result *= i
    return result
number = int(input("Enter a number: "))
factorial = factorial_iterative(number)
print("Factorial of", number, "is", factorial)
