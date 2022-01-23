weight = input('Weight : ')
unit = input('(L)bs or (K)g : ')
if unit.upper() == 'L':
    weight = int(weight) * 0.45
    print(f"You're {str(weight)} kilos")
elif unit.upper() == 'K':
    weight = int(weight) / 0.45
    print(f"You're {str(weight)} pounds")
