class Hello_World
	def initialize(myname="Ruby")
		@name=myname
	end
end


class Hello_World
	class << self
		def hello(name)
			puts "#{name} said Hello"
		end
	end
end

Hello_World.hello("Kitty")



def Hello_World.world(name)
	puts "#{name} said world"
end

Hello_World.world("Tom")


class Hello_World
	def self.give(name)
		puts "#{name} said give"
	end
end

Hello_World.give("Tim")




class << Hello_World
	def Tom(name)
		puts "#{name} said Tom"
	end
end


Hello_World.Tom("From now on")

