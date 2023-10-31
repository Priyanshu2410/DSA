def find_min_max(lst):
    if not lst:
        return None, None

    min_value = max_value = lst[0][0]
    for tpl in lst:
        for value in tpl:
            if value < min_value:
                min_value = value
            if value > max_value:
                max_value = value

    return min_value, max_value

list_of_tuples = [(3, 6, 1), (9, 2, 5), (8, 4, 7)]
min_val, max_val = find_min_max(list_of_tuples)

print("Minimum value:", min_val)
print("Maximum value:", max_val)
