# exponent method
def pow(base_num, pow_num)
  result = 1
  pow_num.times do |index|
    result *= base_num
  end
  
  return result
end

puts pow(2, 3)

# reading external files on our computer
# it has to be on the same directory that the .rb file is located in
# if not located on the same directory, you can add an absolute path to where the file that you want to open is located in
# or some sort of path
# the .open takes 2 parameters, the file name, and the mode that it wants to open the file
# we are going to use the read mode
File.open("employees.txt", "r") do |file| # this is going to store employees.txt into the file variable
  for line in file.readlines()
    puts line
  end
  # file.close() # always close a file when you are done using it
end

# writing to a file
File.open("employees.txt", "a") do |file| # a will append to the end of file, what you told it to write
  file.write("\nOscar, Accounting") # everytime u run the file, it will append oscar over and over to the end of the file
end

File.open("employees.txt", "w") do |file| # w will overwrite everything in the file, and just add what you wanted it to write
  file.write("\nOscar, Accounting")
end

# to create a new file
File.open("index.html", "w") do |file| # when we run this program the .html file will be created in the directory that we are currently in
  file.write("<h1>Hello World</h1>")
end

# r+ will start at the beginning of the file
File.open("employees.txt", "r+") do |file| # this mode will allow us to read + write in the file that we want to work with
  file.readline()
  file.write("Overridden")
end

