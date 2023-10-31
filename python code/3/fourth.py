def decimal_to_hex_oct_bin(decimal):
    hex_value = hex(decimal).lstrip("0x")
    octal_value = oct(decimal).lstrip("0o")
    binary_value = bin(decimal).lstrip("0b")

    return hex_value, octal_value, binary_value


decimal_number = int(input("Enter a decimal number: "))
hexadecimal, octal, binary = decimal_to_hex_oct_bin(decimal_number)

print("Hexadecimal: ", hexadecimal)
print("Octal: ", octal)
print("Binary: ", binary)
