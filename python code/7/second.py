try:
    num = float(input("Enter a number: "))
    if num >= 0:
        print("Entered number:", num)
    else:
        raise ValueError("Number is negative")
except ValueError as ve:
    print("Error:", ve)

print("Code execution completed")
