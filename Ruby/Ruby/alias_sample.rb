class C1
	def hello
		"Hello"
	end
end

class C2 < C1
	alias old_hello hello
#	undef hello  #在这里undef 没有任何作用，因为在这里undef hello之后,紧接着就在后面马上定义了一个同名hello函数，就等于重新定义了hello方法，所以这里不起任何作用.
	def hello
		"#{old_hello},new hello"
#		undef old_hello   # 即是在这里删除old_hello之后,编译运行的时候还是可以打印old_hello方法,可能是由于undef 写在hello函数之后的原因,而如果在其他地方undef则会提示不存在old_hello方法
#		undef hello  #在这里删除hello之后,则会运行父类的hello方法,而子类的hello方法则提示不存在
	end
end

# undef old_hello  #提示不存在old_hello方法，因为old_hello方法已经在之前定义,而在这里则undef删除了.


obj=C2.new
p obj.old_hello #子类调用父类的hello方法
p obj.hello     #子类调用自己的hello方法

