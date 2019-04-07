module Edition
	def edition(n)
		"#{self} 第#{n}版"
	end
end

str="Ruby基础教程"

#extend 是针对的是个体，即单例类及对象，只是把一个module嵌入到单独一个类或对象里面
#而include是把一个module嵌入到一个普通类里面，和extend有区别.


str.extend(Edition)   #entend之后,str="Ruby基础教程" 就是self,所以打印出来"Ruby基础教程,第3版"
p str.edition(3)   #extend之后,模块内的函数就可以当做实例方法被调用.



