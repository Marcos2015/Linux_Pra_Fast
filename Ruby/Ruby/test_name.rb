class Test_name
	def initialize(myname="ruby")
		@name=myname    #初始化name
		#attr_accessor:name
	end


	attr_accessor:name

	def name=(value)    #修改name
		@name=value
	end


	def test
		name="Hello_Ruby"
		self.name="Kitty" # 显式调用name方法
	end


end



ki=Test_name.new("Bob")
ki.test

p ki.name


