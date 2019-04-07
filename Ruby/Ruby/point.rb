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


	def inspect
		"(#{x},#{y})"
	end

	def +(other)
		self.class.new(x+other.x,y+other.y)
	end


	def -(other)
		self.class.new(x-other.x,y-other.y)
	end

	

	def +@
		dup
	end


	def -@
		self.class.new(-x,-y)
	end


	def ~@
		self.class.new(-y,x)
	end













end



Hello=Point.new
p [ Hello.x,Hello.y ]

Kitty=Point.new(1.0,2.0)
Hello.swap(Kitty)

p [ Hello.x, Hello.y ]

p0=Point.new(1,3)
p1=Point.new(2,4)
p p0-p1



p2=Point.new(9,8)
p +p2
p -p2
p ~p2


