'''
Created on Jan 25, 2022

@author: biplavs
'''

class PersonInfo:
    

        
    def __init__(self, first = "default-Maria", last = "default-Wang"):
        
        if first:
            self.firstName = first
        if last:
            self.lastName = last

    def getFirst(self):
        return self.firstName
    
    def getLast(self):
        return self.lastName


p1 = PersonInfo ()
print ("First person: " , p1.getFirst() + ", " + p1.getLast())

p2 = PersonInfo ("Joginder")
print ("Second person: " ,p2.getFirst() + ", " + p2.getLast())

p3 = PersonInfo ("Joginder", "Singh")
print ("Third person: " ,p3.getFirst() + ", " + p3.getLast())