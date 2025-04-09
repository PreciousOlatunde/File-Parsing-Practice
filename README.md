# File-Parsing-Practice
This program takes an expected input file ('input.txt') and produces an output file ('output.txt') based on the data in the input

In this particular program, the 'input.txt' file structures to have an alternting pattern of three integers separated by commas on one line, and a word or phrase on the next line. The purpose of this structure is that in the 'output.txt' file, each line is the word/phrase from each alternated line in 'input.txt', repeated the number of times dictated by the integers on the line above it in 'input.txt', separated by commas.
For example, "MY NAME IS PRECIOUS", which is the phrase on the 6th line of 'input.txt', is written out twice (2), then once (1) and not again (0) each time separated by commas because the line above it (5th line in 'input.txt') is "2,1,0".

Files needed to run/execute the program:
1. input.txt
2. fileParsing.cpp
3. makefile

How to run/execute the program:
1. Make sure all aforementioned files are present and in your current working directory
2. Type "make run" into the comman line and press enter

Additional info
1. The 'output.txt' file created by running the program should appear in the same directory/folder where the files associated with the program are stored
2. Type and enter the comman "make clean" to delete all 'input.txt' files and executables generated from previous program runs
