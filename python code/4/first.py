def remove_duplicates(lst):
    return list(set(lst))

my_list = [1, 2, 3, 4, 3, 2, 1, 5]
result = remove_duplicates(my_list)
print(result)
