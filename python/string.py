string = "You're the apple of my eye"
stringcopied = string[:]
print(stringcopied)
print(string[4])
print(string[1:-2])
print(string[1:])
print(string[:9])
print(string[-25])
first = 'Aaron'
last = 'Christopher'
message = first + ' [' + last + '] ' + 'is a coder'
#formatted string
msg = f'{first} [{last}] is a coder'
print(message)
print(msg)
#return the length of the string
print(len(msg))
print(msg.upper())
print(msg.find('['))
print(msg.find('[]'))
print(msg.replace('[', '*'))
print('Aaron' in msg)
print('aaron' in msg)
name = 'John', 'Wick', 'Aaron', 'Karin', 'Sarah', 'Bob'
print(name[2:4])