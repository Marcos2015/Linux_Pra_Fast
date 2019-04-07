class Point
	attr_accessor:x,:y
	protected :x=,:y=

	def initialize(x=0.0,y=0.0)
		@x,@y = x,y
	end

	def swap(other)
		temp_x,temp_y=@x,@y

		@x,@y=other.x,other.y

		other.x,other.y=temp_x,temp_y
		return self
	end

end



Hello=Point.new
Hello.swap

Kitty=Point.new(1.0,2.0)
p [p0.x,p0.y]

