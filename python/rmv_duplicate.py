numbers = [3, 12, 4, 3, 8, 4, 21, 5, 12]
uniques = []
for count1 in numbers:
    if count1 not in uniques:
        uniques.append(count1)
print(uniques)