def find_frequency(lst):
    frequency = {}
    for item in lst:
        if item in frequency:
            frequency[item] += 1
        else:
            frequency[item] = 1
    return frequency

my_list = [1, 2, 3, 4, 3, 2, 1, 5]
result = find_frequency(my_list)
print(result)
