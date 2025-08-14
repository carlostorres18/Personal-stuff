taskListArray = Array.new

choice = gets.chomp().to_i
puts "Current Todo List:"
puts taskListArray

while choice != 3
  puts "\n"
  puts "What would you like to do?"
  puts "1. Add a task"
  puts "2. View tasks"
  puts "3. Exit"
  puts "\n"
  choice = gets.chomp().to_i

  if choice == 1
    add_task = gets.chomp()
    taskListArray.push(add_task)
  elsif choice == 2
    puts "Current Todo List:"
    puts taskListArray
  elsif choice == 3
    exit()
  end
end