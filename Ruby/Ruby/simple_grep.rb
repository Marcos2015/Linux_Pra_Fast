pattern=Regexp.new(ARGV[0])
file=File.open(ARGV[1])

file. each_line do |line|   # 读取文件对象的每一行
		if pattern =~ line  #然后每一行判断是否匹配pattern，即模式匹配
		print line
	end
end


file.close

