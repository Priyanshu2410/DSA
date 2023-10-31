def matrix_addition(matrix1, matrix2):
    rows1, cols1 = len(matrix1), len(matrix1[0])
    rows2, cols2 = len(matrix2), len(matrix2[0])

    if rows1 != rows2 or cols1 != cols2:
        return None

    result = [[0] * cols1 for _ in range(rows1)]
    for i in range(rows1):
        for j in range(cols1):
            result[i][j] = matrix1[i][j] + matrix2[i][j]
    return result


def matrix_multiplication(matrix1, matrix2):
    rows1, cols1 = len(matrix1), len(matrix1[0])
    rows2, cols2 = len(matrix2), len(matrix2[0])

    if cols1 != rows2:
        return None

    result = [[0] * cols2 for _ in range(rows1)]
    for i in range(rows1):
        for j in range(cols2):
            for k in range(cols1):
                result[i][j] += matrix1[i][k] * matrix2[k][j]
    return result


matrix_a = [[1, 2], [3, 4]]
matrix_b = [[5, 6], [7, 8]]

addition_result = matrix_addition(matrix_a, matrix_b)
print("Matrix Addition:")
print(addition_result)

multiplication_result = matrix_multiplication(matrix_a, matrix_b)
print("\nMatrix Multiplication:")
print(multiplication_result)
