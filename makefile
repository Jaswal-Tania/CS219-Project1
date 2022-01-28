# Output exe, can change if you want the output to change.
OUTPUT = main

$(OUTPUT) : main.o $(OUTPUT).o
	g++ main.o -o $(OUTPUT) -std=c++11

main.o: main.cpp
	g++ -c main.cpp
