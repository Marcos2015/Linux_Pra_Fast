module M1
	def foo
		p self
	end
end

module M2
	p self
end

class C
	include M1
	include M2
	include M1   #第二次及以后被包含的模块,直接就被省略了
end


p C.ancestors
