tags=["A","IMG","PRE"]
tags.each do |tagname|
	case tagname
	when "AD","PA","Goog"  #数组的每一项去匹配这一条件，A作为第一项去匹配"K","PA","Goog"，如果匹配这三项中的一项就符合条件."A"必须匹配"A",若"AD"都表明不匹a配.
	   puts "#{tagname} has child"
	when "IMG","BR"	   
		puts "#{tagname} has no child"
	else
		puts "#{tagname} can not be uses"
	end
end

