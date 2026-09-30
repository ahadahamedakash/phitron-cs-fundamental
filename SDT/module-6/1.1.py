class Parent:
    def show_parent(self):
        print("This is the Parent class")


class Child(Parent):
    def show_child(self):
        print("This is the Child class")


# Object of Child class

obj = Child()

obj.show_parent()  # Inherited method
obj.show_child()  # Child method


class Grandparent:
    def show_grandparent(self):
        print("This is the Grandparent class")


class Parent2(Grandparent):
    def show_parent(self):
        print("This is the Parent class")


class Child2(Parent2):
    def show_child(self):
        print("This is the Child class")


# Object of Child2 class

obj2 = Child2()

obj2.show_grandparent()  # Inherited from Grandparent
obj2.show_parent()  # Inherited from Parent2
obj2.show_child()  # Child method
