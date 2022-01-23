numbers = [2, 56, 8, 71, 43, 56, 10, 22]
largest = numbers[0]
for count in numbers:
    if count > largest:
        largest = count
print(largest)
