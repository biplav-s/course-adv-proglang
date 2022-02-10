'''
Created on Feb 9, 2022

@author: biplavs
'''

class Employee:
    
    def __init__(self, name, current_salary):
        self.name = name
        self.current_salary = current_salary

    def myprint(self):
        print("Employee base print: name - ", self.name)

    def myshow(self):
        print("Employee base show.")


class EmployeeManager (Employee):

    def myprint(self):
        print("EmployeeManager derived print: name - ", self.name)

    def myshow(self):
        print("EmployeeManager derived show.")

# Instantiating and running
print( "--- Employee ---" )
e = Employee("Jack", 100)
e.myprint()
e.myshow()

print( "--- Manager ---" )
em = EmployeeManager("Jane", 150)
em.myprint()
em.myshow()

print( "--- Now printing using same call ---" )
for staff in (e, em):
    staff.myprint()
    staff.myshow()

