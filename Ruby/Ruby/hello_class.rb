class HelloWorld
	def initialize(myname = "Ruby")
		@name=myname
	end

	def hello
		p "Hello,world.I am #{@name}"
	end

	def name
		@name
	end

	def name=(value)
		@name=value
	end
	
 	def put_string
		p name
	end


  # attr_accessor:name

	def great
		puts "Hi,this is test great func :I am #{self.name}"
	end



end


bob=HelloWorld.new("Bob")
bob.great


p bob.name
bob.name="Robert" #调用name方法,而不是赋值
bob.put_string


alice=HelloWorld.new("Alice")
ruby=HelloWorld.new

bob.hello
ruby.hello
alice.hello

