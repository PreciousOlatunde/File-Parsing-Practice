fileParse: input.txt fileParsing.cpp
	g++ fileParsing.cpp -o fileParse
clean:
	rm fileParse
	rm output.txt
run: fileParse
	./fileParse
