class Microwave:
    # initializers, this takes care of initializing the class (lol)
    def __init__(self, brand: str, power_rating: str) -> None:
        self.brand = brand
        self.power_rating = power_rating
        
        
    
# type annotation it can help identify instances of classes faster im assuming
#   so like in Java with @Override doing this helps the programmer
#       using the function what kind of data to pass to the funtion
#       and what kind of data to expect when the function returns a value
smeg: Microwave = Microwave('Smeg', 'B')
print(smeg.brand)
print(smeg.power_rating)

bosch: Microwave = Microwave('Bosch', 'B')