numbers = {
    '0' : 'Zero',
    '1' : 'One',
    '2' : 'Two',
    '3' : 'Three',
    '4' : 'Four',
    '5' : 'Five',
    '6' : 'Six',
    '7' : 'Seven',
    '8' : 'Eight',
    '9' : 'Nine'
}
spell = ""
x = input("Phone : ")
for count in x:
    spell += numbers[count] + " "
    #or I can use(actually this one is better)
    #spell += numbers.get(count, "Invalid") + " "
print(spell) 