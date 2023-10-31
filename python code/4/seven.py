def remove_element_from_tuple(tpl, element):
    new_tpl = tuple(val for val in tpl if val != element)
    return new_tpl

my_tuple = (1, 2, 3, 4, 5)
element_to_remove = 3

new_tuple = remove_element_from_tuple(my_tuple, element_to_remove)
print("Original tuple:", my_tuple)
print("Tuple after removing element:", new_tuple)
