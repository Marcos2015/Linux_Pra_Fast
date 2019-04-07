module FooModule
	def foo
		p self
	end

	module_function:foo
end

FooModule.foo #必须设置为模块函数否则无法调用

