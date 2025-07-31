# exception handling
# with this you can see if any of your code will break the program or throw an error
# in Ruby we have to be specific on the type of errors that we might want to catch

lucky_nums = [0, 4, 8, 12, 16, 20]

begin
  # in here goes the code that you think will break the program
  # num = 10/0 # obviously 10 can't be divided by 0
  lucky_nums["dog"]
rescue ZeroDivisionError
  # if the code above can break the program instead of ending the program, it will execute the code in the rescue section
  puts "Division by zero error"
# you can make different rescue's based on the error that the code might give you
rescue TypeError => e # we can store the error in a variable
  puts e # and when we print the variable, it tells us what the actual error was
end
