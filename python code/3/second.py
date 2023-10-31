def count_characters(sentence):
    digits = 0
    letters = 0
    uppercase_letters = 0
    lowercase_letters = 0
    spaces = 0

    for char in sentence:
        if char.isdigit():
            digits += 1
        elif char.isalpha():
            letters += 1
            if char.isupper():
                uppercase_letters += 1
            elif char.islower():
                lowercase_letters += 1
                
        elif char.isspace():
            spaces += 1

    return digits, letters, uppercase_letters, lowercase_letters, spaces

sentence = input("Enter a sentence: ")

digit_count, letter_count, uppercase_count, lowercase_count, space_count = count_characters(sentence)
print("Number of digits:", digit_count)
print("Number of letters:", letter_count)
print("Number of uppercase letters:", uppercase_count)
print("Number of lowercase letters:", lowercase_count)
print("Number of spaces:", space_count)
