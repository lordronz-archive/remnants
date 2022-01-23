class Person:
    def __init__(self, name, crush_name):
        self.name = name
        self.crush_name = crush_name
    def love(self):
        return f'{self.name} ❤ {self.crush_name}'

name = input("Enter your name: ")
crush_name = input("Enter your crush's name: ")
output = Person(name, crush_name)
print(output.love())
