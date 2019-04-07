str1="Ruby"
str2="Ruby"

class << str1  #单例方法:仅一个类独有的方法，其他类都没有
	def hello
		"Hello,#{self}"
	end
end


p str1.hello
p str2.hello

