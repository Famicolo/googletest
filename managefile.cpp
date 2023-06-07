//compile with g++ -o managefile managefile.cpp googletest/samples/sample1.cc -lgtest -lpthread
//run with ./managefile input.txt ANY_OUTPUT_FILENAME.txt

/*
This code takes in two command line arguments: an input file and an output file.
It performs the following operations:

Checks if the number of command line arguments is not equal to 3 and displays an error message if true.
Opens the input file specified by the first command line argument.
Displays an error message if the input file cannot be opened.
Opens the output file specified by the second command line argument.
Displays an error message if the output file cannot be created.
Reads numbers from the input file and checks if they are prime using the IsPrime function from sample1.cc.
Writes the result (whether the number is prime or not) to the output file.
Returns 0 to indicate successful execution of the program.
*/




#include<iostream> 
#include<fstream> 
#include<gtest/gtest.h>
// #include"googletest/samples/sample1.cc"

int main(int argc, char* argv[]){
	
	if(argc!= 3){
		std::cerr<<"Error in program " << argv[0]<< "! Wrong number of parameters."<<std::endl; 
		return -1; 
	}
	
	std::ifstream ist( argv[1] );  
	
	if(!ist){
		std::cerr<<"Program " << argv[0] << " cannot open file:  " << argv[1]<<std::endl; 
		return -1; 
	}
	
	
	std::ofstream ost ( argv[2] );   
	
	if(!ost){
		std::cerr<< "Program " << argv[0] << " cannot create file:  " << argv[2]<<std::endl; 
		return -1; 
	}
	
	unsigned n; 
	while(ist>>n){
		ost<<IsPrime(n)<<std::endl; 
	}
	
	return 0;
}
