limit = int(input())
result = 0

if limit <= 0:
    for i in range(limit, 2):
        result += i
else:
    for i in range(1, limit + 1):
        result += i

print(result)