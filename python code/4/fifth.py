def generate_pascals_triangle(num_rows):
    triangle = []
    for row in range(num_rows):
        current_row = []
        for column in range(row + 1):
            if column == 0 or column == row:
                current_row.append(1)
            else:
                prev_row = triangle[row - 1]
                current_row.append(prev_row[column - 1] + prev_row[column])
        triangle.append(current_row)
    return triangle

# Example usage
num_rows = int(input("Enter the number of rows for Pascal's triangle: "))
pascals_triangle = generate_pascals_triangle(num_rows)

# Print Pascal's triangle
for row in pascals_triangle:
    print(row)
