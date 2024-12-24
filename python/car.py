class Car:
    # constructor
    # dunder (double underscore) method
    # WE NEED THIS METHOD IN ORDER TO CREATE OBJECTS
    def __init__(self, model, year, color, for_sale):
        self.model = model
        self.year = year
        self.color = color
        self.for_sale = for_sale
        
    def drive(self):
        # In here self refers to the object we are currently working with
        print(f"You drive the {self.year} {self.color} {self.model}")

    def stop(self):
        print(f"You stop the {self.year} {self.color} {self.model}")
    
    def describe(self):
        print(f"{self.year} {self.color} {self.model}")