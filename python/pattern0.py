numbers = [5, 2, 5, 2, 2]
for x in numbers:    
    for y in range (x):
        print('x', end = '')
    print('')
print('\n')
numbers = [2, 2, 2, 2, 5]
for x in numbers:
    output = ''
    for y in range(x):
        output += 'x'
    print(output)