def map_lists_to_dictionary(keys, values):
    if len(keys) != len(values):
        raise ValueError("Lists must have the same length.")

    dictionary = dict(zip(keys, values))
    return dictionary


keys = ['name', 'age', 'city']
values = ['John Doe', 25, 'New York']

result = map_lists_to_dictionary(keys, values)
print(result)
