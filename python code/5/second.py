def invert_dictionary(dictionary):
    inverted_dict = {value: key for key, value in dictionary.items()}
    return inverted_dict

original_dict = {'name': 'John Doe', 'age': 25, 'city': 'New York'}

inverted_dict = invert_dictionary(original_dict)
print(inverted_dict)
