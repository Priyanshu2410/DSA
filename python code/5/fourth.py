def sum_dictionary_items(dictionary):
    total_sum = sum(dictionary.values())
    return total_sum


my_dict = {'a': 10, 'b': 20, 'c': 30, 'd': 40}

result = sum_dictionary_items(my_dict)
print(result)
