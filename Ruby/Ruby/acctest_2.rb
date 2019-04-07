class AccTest

public

	def pub
		puts "pub is a public method"
	end


private

	def priv
		p "priv is a private method"
	end

end

Hello=AccTest.new
Hello.pub
Hello.priv

