def generate_alphabet_frequency(string):
    frequency_dict = {}

    for char in string:
        if char.isalpha():
            char = char.lower()
            frequency_dict[char] = frequency_dict.get(char, 0) + 1

    return frequency_dict

input_string = "Hello, World!"

frequency_dict = generate_alphabet_frequency(input_string)
print(frequency_dict)
