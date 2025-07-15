puts "Carlos" #puts puts a new line after the text think of it as Println
print "Giraffe Academy" #while print works like Print and puts lines of text next to each other
puts # making a new line
#drawing shapes
puts "  /|"
puts " / |"
puts "/__|"

# using variables
character_name = "Carlos"
character_age = "21"

puts

puts ("There once was a man named " + character_name)
puts ("he was " + character_age + " years old.")
character_name = "Tom"
puts ("He really liked the name " + character_name)
puts ("but didn't like being " + character_age + ".")

puts

# data types in Ruby

#string
name = "Mike" # <- this is a string value
occupation = "Programmer"

#numbers
age = -75 # <- integer, can also make them negative
gpa = -3.2 # <- float
ismale = true # <- boolean
istall = false # <- boolean, it can represent only 2 values True or False
flaws = nil # <- doesn't have a value

# working with strings

phrase = "Giraffe Academy"

puts phrase # this is how to print string variables
# string functions/methods that are available
puts phrase.upcase() # <- make the phrase upper case letters
puts phrase.downcase() # <- make the phrse lower case letters

puts phrase.strip() # <- this will strip off the blank spaces that the phrase has
puts phrase.length() # <- how many characters are in the phrase
puts phrase.include? "Academy" # <- returns a T/F value on whether the phrase includes a certain character/phrase
puts phrase[1] # <- this is how to access a certain character using index position (0 - n)
puts phrase[0,3] # <- specified range, this will give the first 3 characters in the specified index positions
puts phrase.index("G") # <- tells you the index position that the specified character shows up

# all the methods that we previously used can also be used on values that are not stored on variables
puts "programming".upcase()

# working with numbers and number methods
