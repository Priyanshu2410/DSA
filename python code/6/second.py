class Person:
    def __init__(self, name):
        self.name = name


class Businessman(Person):
    def __init__(self, name, income, num_people_involved):
        super().__init__(name)
        self.income = income
        self.num_people_involved = num_people_involved


class Employee(Person):
    def __init__(self, name, income):
        super().__init__(name)
        self.income = income

businessman1 = Businessman("John Doe", 100000, 5)
businessman2 = Businessman("Jane Smith", 150000, 10)
employee1 = Employee("Michael Johnson", 50000)
employee2 = Employee("Emily Brown", 60000)


people = [businessman1, businessman2, employee1, employee2]
person_with_greatest_income = max(people, key=lambda person: person.income)
print(f"{person_with_greatest_income.name} has the greatest income.")
