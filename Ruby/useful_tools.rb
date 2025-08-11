module Tools
  def sayhi(name)
    puts "Hello #{name}"
  end
  def saybye(name)
    puts "Bye #{name}"
  end
end

# Modules -  a container where we can store a group of methods
# this Tools module comes from the useful_tools.rb file
# Modules allow us to organize our methods a lot better than class can
include Tools

Tools.sayhi("Mike")
Tools.saybye("Mike")