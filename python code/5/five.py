def concatenate_dictionaries(*dicts):
    concatenated_dict = {}
    
    for dictionary in dicts:
        concatenated_dict.update(dictionary)
    
    return concatenated_dict


dict1 = {'a': 1, 'b': 2}
dict2 = {'c': 3, 'd': 4}
dict3 = {'e': 5, 'f': 6}

result = concatenate_dictionaries(dict1, dict2, dict3)
print(result)
