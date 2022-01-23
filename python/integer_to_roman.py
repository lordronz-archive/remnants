class InttoRoman:
    
    def __init__(self, num):
        self.num = num
    def convert(self):
        romannum = ''
        if self.num >= 1000:
            n = self.num // 1000
            romannum += n * 'M' 
            self.num %= 1000
        if 100 <= self.num < 1000:
            n = self.num // 100
            if n == 9:
                romannum += 'CM'
            elif 5 <= n < 9: 
                n -= 5
                romannum += 'D' + n * 'C'
            elif n == 4:
                romannum += 'CD'
            else:
                romannum += n * 'C'
            self.num %= 100
        if 10 <= self.num < 100:
            n = self.num // 10
            if n == 9:
                romannum += 'XC'
            elif 5 <= n < 9:
                n -= 5
                romannum += 'L' + n * 'X'
            elif n == 4:
                romannum += 'XL'
            else:
                romannum += n * 'X'
            self.num %= 10
        if 1 <= self.num < 10:
            n = self.num // 1
            if n == 9:
                romannum += 'IX'
            elif 5 <= n < 9:
                n -= 5
                romannum += 'V' + n * 'I'
            elif n == 4:
                romannum += 'IV'
            else:
                romannum += n * 'I'
        
        return romannum


num = int(input('Enter an integer : '))
roman = InttoRoman(num)
print('Roman numeral = {}'.format(roman.convert()))
