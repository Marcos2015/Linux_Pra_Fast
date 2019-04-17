require_relative  "grep"

pattern=Regexp.new(ARGV[0])
filename=File.open(ARGV[1])

simple_grep pattern,filename  #参数调用时可不需要添加圆括号

