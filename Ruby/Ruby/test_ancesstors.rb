module M1
	p self
end

module M2
	p self
end

module M3
	include M2
end


class C
	include M2
	include M3
	include M1
end

p C.ancestors
