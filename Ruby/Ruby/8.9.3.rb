module ClassMethods
	def cmethods
		"Class methods"
	end
end

module InstanceMethods
	def imethods
		"instance methods"
	end
end


class MyClass
	extend ClassMethods
	#extend可以定义类方法，直接用类就可以调用的方法
	
	include InstanceMethods
	#include只能将模块嵌入到类里面为类添加实例方法,即include进去的module里面包含的方法只能被对象调用，不能直接被类直接调用.
end


p MyClass.cmethods

p0=MyClass.new
p0.imethods  #这种写法是可以正确调用imethods，但是不会显示，需要用p


p MyClass.new.imethods  #调用p将方法里面的内容打印出来

