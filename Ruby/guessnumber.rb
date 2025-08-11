# this program is for me to get use to the Ruby programming language even more
# here we will be asking a user to guess a number between 1-10
# if they guess right == "Congrats you guessed the number!"
# else "wrong!!! booooo"
# very simple program
puts "Hello and welcome, please guess a number between 1-10: "
guess = gets.chomp.to_i # don't forget to convert the guess into an integer!
random_number = rand(1..10)

if guess == random_number
  puts "Congrats you guessed right!"
else
  puts "Wrong!!! BOOOO!!"
end
