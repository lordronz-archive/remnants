string = input("Input string = ")
n = int(input("Input N = "))
for i in range(n // 2, n, 2):
    output = ""
    for j in range(n, i + 1, -2):
        output += " "
    for j in range(0, i):
        output += "*"
    for j in range(n, i, -1):
        output += " "
    for j in range(0, i):
        output += "*"
    print(output)
for i in range(2 * n - 1, 0, -2):
    output = ""
    for j in range(2 * n - 1, i, -2):
        output += " "
    if i == 2 * n - 1:
        for j in range((2 * n - 1 - len(string)) // 2, 0, -1):
            output += "*"
        output += string
        for j in range((2 * n - 1 - len(string)) // 2, 0, -1):
            output += "*"
        if len(string) % 2 == 0:
            output += "*"
    else:
        for j in range(i, 0, -1):
            output += "*"
    print(output)