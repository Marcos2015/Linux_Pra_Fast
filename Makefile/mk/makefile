helloworld:file1.o file2.o
	g++ file1.o file2.o -o helloworld

file1.o:file1.cc file1.h
	g++ -c file1.cc -o file1.o

file2.o:file2.cc file1.h
	g++ -c file.cc -o file2.o

clean:
	rm -rf *.o helloworld
	
