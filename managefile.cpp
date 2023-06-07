//compile with g++ -o managefile managefile.cpp googletest/samples/sample1.cc -lgtest -lpthread
//run with ./managefile input.txt ANY_OUTPUT_FILENAME.txt
#include<iostream> 
#include<fstream> 
#include<gtest/gtest.h>
#include"googletest/samples/sample1.cc"

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
