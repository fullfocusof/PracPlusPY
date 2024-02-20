size = int(input())

matrix = []

for i in range(size):
    temp = [int(x) for x in input().split()]
    matrix.append(temp)

for k in range(size):
    for i in range(k + 1):
        print(matrix[k - i][i], end = " ")

for k in range(1, size):
    for i in range(size - k):
        print(matrix[size - 1 - i][k + i], end = " ")
