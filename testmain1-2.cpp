/*
Execute sampletest for samples1 and samples2

compiler call:

g++ -o testmain1-2 testmain1-2.cpp googletest/samples/sample1_unittest.cc googletest/samples/sample2_unittest.cc googletest/samples/sample1.cc  googletest/samples/sample2.cc googletest/samples/sample4_unittest.cc googletest/samples/sample4.cc  -lgtest -lpthread

*/



#include<iostream>
#include<fstream>
#include"gtest/gtest.h"

#include"googletest/samples/sample1_unittest.cc"
#include"googletest/samples/sample2_unittest.cc"
#include"googletest/samples/sample4_unittest.cc"


int main(int argc, char* argv[]){
  testing::InitGoogleTest(&argc, argv); 
  int exit_code = RUN_ALL_TESTS(); 
  
  std::ofstream ofs ("output-unittest1-2.txt");
  if(!ofs){                   
    std::cerr<<"Cannot create file"<<std::endl; 
    return -1;  
  }
 ofs << exit_code;
                     
 return exit_code; 
}

