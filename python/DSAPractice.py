# what was the price on day 3?
'''
output = 320
'''

stock_prices = [298, 305, 320, 301, 292]
target = 0

specific_day = 3
def price_on_specific_day():
    #look into the array, find price on specific day
        # assign the price into target and return target
    for i in range(len(stock_prices)):
        if stock_prices[i] == 320:
            return i
    
print(price_on_specific_day() + 1)