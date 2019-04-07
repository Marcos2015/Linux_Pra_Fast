module HelloModule
#	Version = "1.0"

	def hello(name)
		puts "Hello.#{name}"
	end

#		HelloModule.hello("Kitty")     在模块内不可使用函数名.方法方式调用方法
#		hello("wawa")                  在模块内不可以直接使用方法名方式调用方法


	def wild
		lpp=self.hello("you")
	end


	module_function:hello 
end


#p HelloModule::Version
HelloModule.hello("alice") #必须将hello设置为module_function:hello模块函数.否则无法在模块外调用

include HelloModule
#p Version
HelloModule.hello("Tom")
HelloModule.wild

