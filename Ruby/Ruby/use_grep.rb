require_relative  "grep"

pattern=Regexp.new(ARGV[0])
filename=File.open(ARGV[1])

simple_grep(pattern,filename)

