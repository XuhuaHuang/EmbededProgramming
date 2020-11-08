# Topic: class in python
# Author: Xuhua Huang
#  Last updated: Nov 08, 2020
# Created on: Nov 08, 2020
# 
# no private and public specifier
# no need for set and get function
# 
# __init__ function
# 
# self parameter - current instance of class
#                - used to access variables belong to current class
#                - has to be the first parameter of any functions in the class
#                - self can be renamed to other object names


class Pet:
    name = ""
    age = 0

    # __init__ double underscore
    # acts like a overloaded constructor
    def __init__(self, name, age):
        self.name = name
        self.age = age
    
    # not necceary to have set and get function
    def set_name(self,user_name):
        self.name = user_name
    def get_name(self):
        return self.name
    def set_age(self, user_age):
        self.age = user_age
    def get_age(self):
        return self.age
    
    # other function
    def print(self):
        print(f"Your pet of name {self.name} is {self.age} years old.")


print("An object of class \"Pet\" is created named \"myPet\", aged 5." )
myPet = Pet("pet name", 5)  # creating object, name = pet name, age = 5

print("\nPrinting variables inside of \"Pet\" class with get() functions: ")
print(myPet.get_name())
print(myPet.get_age())

print("\nVariables inside of \"Pet\" class can be accessed without get() functions in Python: ")
print(f"Accessing variable \"name\" without get() function: {myPet.name}.")
print(f"Accessing variable \"age\" without get() function: {myPet.age}.")

print("\nWith print function inside of \"Pet\" class:")
myPet.print()
