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
#puts can print out whole, decimal, and negative numbers without any problems
puts 5.545

# basic arithmetic as any other programming language
puts 5-9
puts 5+9
puts 5*9
puts 5/9
puts 5%9
puts 5**9

num = 20.687
puts num
# this will take 20 and make it a string, so that it can be printed out with the string
puts ("my fav num " + num.to_s)
puts num.abs() # absolute value
puts num.round() #round number either up or down depending on the decimals


# Math is a class and we can use its methods
puts Math.sqrt(36) # this method gives us the square root of a number that is put between the parenthesis

puts 1.0 + 7 # using at least one float number, it will output a float number
puts 1 + 7 # using two whole numbers, it will output a whole number

# using the terminal to get input from the user
puts "Enter your name: "
name = gets.chomp() # allows the user to input a piece of information for the program
puts "Enter your Age: "
age = gets.chomp()

puts ("Hello " + name + ", you are " + age)

# we will be making a calculator that is going to run in the terminal
# ruby automatically converts it into a string, and just concatenate the strings
# we need to convert the strings into nums

puts "Enter a number: "
num1 = gets.chomp().to_f # you can add the method .to_f to the gets, but if you want a different output, you do it on the puts at the bottom
puts "Enter another number"
num2 = gets.chomp().to_f

puts (num1.to_i + num2.to_i) # only problem is that this is turning the numbers into integers, so if we want a float number it will be different
puts (num1 + num2) # to_f -> to float

# arrays ( yippie!!! )
# structure/container and it can hold multiple values, you can have different data types for the values
friends = Array["Kevin", "Karen", "Oscar"] # <- inside they are array elements
puts friends[0] # <- this is how to get a specific value based on the index position, like other programming languages
puts friends[0,2] # <- this will get a range of elements, but not including the last element

# we can modify the elements in the array
friends[0] = "Dwight"
puts friends

myArray = Array.new # <- this is how to make a new array and not give it information, but give it overtime
myArray[0] = "Michael"
puts myArray
puts friends.length() # <- gives the length of the array
puts friends.include? "Karen" # <- will check if the string you are looking for in the array is inside
puts friends.reverse() # <- this will reverse the order of the string
puts friends.sort() # <- will sort in alphabetical order

# Hashes - similar to arrays, but we can store a key value pair, where we store a value and give it a key, almost like a dictionary
# Word = Key, Definition = Value <- something like this
states = {
    # key value pairs here
    # keys are unique, cannot be repeated
    # key              value
    :Pennsylvania => "PA",
    "New York" => "NY",
    "Oregon" => "OR"
}

puts states[:Pennsylvania]
puts states["Oregon"]

# Methods/Functions - block of code that will execute a specific task
# the syntax for it, is almost like python, ruby is almost like python lol
def sayhi(name = "no name", age = -1)
    puts ("Hello " + name + ", you are " + age.to_s) # .to_s, transforms wtv type the value is into a string
end

sayhi("Mike", 21)

# return statements
def cube(num)
    return num * num * num
end

puts cube(3)

# if statements (finally lol)
ismale = true
istall = false

if ismale and istall
    puts "You are a tall male"
elsif ismale and !istall
    puts "You are a short male"
elsif !ismale and istall
    puts "You are not male but are tall"
else
    puts "You are not male and not tall"
end