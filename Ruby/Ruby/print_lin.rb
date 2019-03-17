name=["小林","张三","李四","王五"]
name.each do |name|
	if /林/ =~ name
		puts name
	end
end

#
#name.each do |n|
#	 if /林/ =~ n
#		puts n
#	end
#end

