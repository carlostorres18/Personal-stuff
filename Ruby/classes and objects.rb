# classes and objects
# class is a blueprint
# objects are instances of the blueprint that we create

# this is the blueprint, with all of the attributes that a book can have
class Book
  # attributes information that books have
  attr_accessor :title, :author, :pages

  # initialize method in a class
  # instead of having to initialize a class and specify all its attributes one by one like below
  # begin
    # book2 = Book.new()
    # book2.title = "Berserk"
    # book2.author = "Unknown"
    # book2.pages = 400
  # end
  # an initialize method allows us to gives the attributes to the objects that we create all at once
  # it gets called whenever we create an object
  def initialize(title, author, pages)
    @title = title
    @author = author
    @pages = pages
  end

end

# whenever we use the .new() the initialize method gets called
book1 = Book.new("Diary of a Wimpy Kid", "Jeff", 217)
book2 = Book.new("Berserk", "Unknown", 400)

puts book1.title
puts book1.author
puts book2.title
puts book2.author


class Student
  attr_accessor :name, :major, :gpa
  def initialize(name, major, gpa)
    @name = name
    @major = major
    @gpa = gpa
  end

  def has_honors
    if @gpa >= 3.5
      return true
    end
    return false
  end
end

student1 = Student.new("Jim", "business", 2.6)
student2 = Student.new("Pam", "art", 3.6)

puts student2.has_honors

# inheritance using the Cheff class
class Chef
  def make_chicken
    puts "The chef makes chicken"
  end
  def make_salad
    puts "The chef makes salad"
  end
  def make_special_dish
    puts "The chef makes bbq ribs"
  end
end

class ItalianChef < Chef # this is how to bring all the methods from another class and make it a superclass
  # using inheritance this class can have all the methods that the Chef class has
  # we can also override a method that is originally from another class
  def make_special_dish
    puts "The chef makes eggplant parm"
  end
  def make_pasta
    puts "The chef makes pasta"
  end
end


chef = Chef.new()
chef.make_chicken
chef.make_special_dish

chef1 = ItalianChef.new()
chef1.make_chicken
chef1.make_special_dish

# to use the modules from a different .rb file will be like this
# note: all of these methods come from the useful_tools.rb file
# for this one to work both files must be on the same directory, so you can specify with the name

# fun fact when you run this file, and there are other instructions on the file that you included
# those instructions will also run, on the useful_tools.rb file it has a saybye() and sayhi() at the end
# and they both run when executing this file
require_relative "useful_tools.rb"
include Tools

Tools.sayhi("Carlos")