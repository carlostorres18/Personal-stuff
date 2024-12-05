class Microwave:
    # initializers, this takes care of initializing the class (lol)
    def __init__(self, brand: str, power_rating: str) -> None:
        # self is the instance of the class
        self.brand = brand
        self.power_rating = power_rating
        self.turned_on: bool = False
        
    def turn_on(self) -> None:
        if self.turned_on:
            print(f'Microwave ({self.brand}) is already turned on')
        else:
            self.turned_on = True
            print(f'Microwave ({self.brand}) is now turned on')
            
    def turn_off(self) -> None:
        if self.turned_on:
            self.turned_on = False
            print(f'Microwave ({self.brand}) is now turned off')
        else:
            print(f'Microwave ({self.brand}) is already turned off')
    
    def run(self, seconds: int) -> None:
        if self.turned_on:
            print(f'Running ({self.brand}) for ({seconds}) seconds')
        else:
            print(f'A mystical force whispers: "Turn on your microwave first..."')
    
    # Dunder -> Double Underscores
    #   They can also be known as magic methods
    def __add__(self, other):
        return f'{self.brand} + {other.brand}'
    
    def __mul__(self, other):
        return f'{self.brand} * {other.brand}'
    
    def __str__(self) -> str:
        return f'{self.brand} (Rating: {self.power_rating})'
    
    def __repr__(self) -> str:
        return f'Microwave(brand="{self.brand}", power_rating="{self.power_rating}")'
    
    # Main difference between __str__ method and __repr__ method
    #   is that __str__ is supposed to be user friendly
    #   while __repr__ is supposed to be something that the developer can use
    
    
    
# type annotation it can help identify instances of classes faster im assuming
#   so like in Java with @Override doing this helps the programmer
#       using the function what kind of data to pass to the funtion
#       and what kind of data to expect when the function returns a value
smeg: Microwave = Microwave('Smeg', 'B')
# smeg.turn_on()
# smeg.turn_on()
# smeg.run(30)
# smeg.turn_off()
# smeg.turn_off()

# print(smeg.brand)
# print(smeg.power_rating)

bosch: Microwave = Microwave('Bosch', 'B')
# print(bosch.brand)
# print(bosch.power_rating)
print(smeg)
print(repr(smeg))

# Dunder methods
print(smeg + bosch)
