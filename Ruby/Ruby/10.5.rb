def open_read
	begin
		file=File.open(ARGV[0])
	rescue
		sleep 2
		retry
	end

	data=file.read
end

open_read

