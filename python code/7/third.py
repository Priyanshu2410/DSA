class FormulaError(Exception):
    pass

def calculate(first_num, operator, second_num):
    if operator == '+':
        return first_num + second_num
    elif operator == '-':
        return first_num - second_num
    else:
        raise FormulaError("Invalid operator")

while True:
    user_input = input("Enter a formula (or 'quit' to exit): ")
    if user_input.lower() == "quit":
        break

    formula_parts = user_input.split()
    if len(formula_parts) != 3:
        print("FormulaError: Input should consist of 3 elements")
        continue

    first_value = formula_parts[0]
    operator = formula_parts[1]
    second_value = formula_parts[2]

    try:
        first_num = float(first_value)
        second_num = float(second_value)
    except ValueError:
        print("FormulaError: Invalid number input")
        continue

    if operator not in ('+', '-'):
        print("FormulaError: Invalid operator")
        continue

    try:
        result = calculate(first_num, operator, second_num)
        print("Result:", result)
    except FormulaError as fe:
        print(fe)

print("Code execution completed")
