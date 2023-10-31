def print_student_names(students):
    for name in students.keys():
        print(name)


def get_student_with_highest_cpi(students):
    highest_cpi = 0
    highest_cpi_student = ""

    for name, info in students.items():
        if info['cpi'] > highest_cpi:
            highest_cpi = info['cpi']
            highest_cpi_student = name

    return highest_cpi_student


students = {
    'John': {'semester': 5, 'age': 20, 'cpi': 8.5},
    'Sarah': {'semester': 4, 'age': 21, 'cpi': 9.2},

    
    'Michael': {'semester': 6, 'age': 22, 'cpi': 8.9},
}

print("All student names:")
print_student_names(students)
print()


highest_cpi_student = get_student_with_highest_cpi(students)
print("Student with the highest CPI:", highest_cpi_student)
