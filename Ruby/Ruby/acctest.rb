class AccTest
	def pub
		puts "pub is a public method"
		priv # 私有方法只能以缺省接收者的方式调用该方法
	end

	public:pub  #冒号必须紧挨着方法(pub)，不能有任何空格，哪怕一个空格也不可以，否则报错.


	def priv
		puts "priv is a private method"
	end

	private:priv

end


Hello=AccTest.new
Hello.pub
#Hello.priv  私有方法不可以从实例外部访问.

