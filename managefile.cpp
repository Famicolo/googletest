#include<iostream> 
#include<fstream> 

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
	
	ost << ist.rdbuf(); 
	
	return 0;
}
