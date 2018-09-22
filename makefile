grader.exe: grader.o	
	g++ grader.o -o grader.exe 
grader.o: grader.cpp
	g++ -c grader.cpp -o "grader.o" 
