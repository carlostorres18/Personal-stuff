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