# Object: a bundle of related attributes (variables) and methods (functions)
#           ex. phone, cup, book
#           You need a "class" to create many objects

# class = (blueprint) used to design the structure and layout of an object

from car import Car

car1 = Car("Toyota", 1994, "Black", True)
car2 = Car("Corvette", 2025, "Red", False)
print(car2.for_sale)

car1.drive()
car2.stop()

car2.describe()