//fileParsing.cpp
//CPP file for Parsing and File I/O 

//libraries
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <fstream>

//main function
int main() {
  //data
  std::ifstream inFile;
  std::ofstream outFile;
  std::string currentLine;
  std::string num;
  std::stringstream ss;
  int numI;
  int sum;

  //open input and output files
  inFile.open("input.txt");
  outFile.open("output.txt");

  if(outFile.is_open()){ 

    while(getline(inFile, currentLine)){

      //clear the string stream
      ss.clear();
      ss.str("");

      if(std::atoi(currentLine.c_str()) == 0){
        for(int i = 0; i < sum; i++){
        outFile << currentLine << ",";
        } //end of for loop
        outFile << std::endl;

      } else {
        sum = 0;
        
        ss.str(currentLine);
        getline(ss, num, ',');
        numI = std::atoi(num.c_str());
        sum = sum + numI;

        getline(ss, num, ',');
        numI = std::atoi(num.c_str());
        sum = sum +  numI;

        getline(ss, num);
        numI = std::atoi(num.c_str());
        sum = sum + numI;

      } //end of if statement

    } //end of while loop
    outFile.close();
  } else{
    std::cout << "output.txt could not be opened" << std::endl;
  } //end of if statement

  inFile.close();
} //end of main
