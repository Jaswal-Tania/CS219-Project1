#include<iostream>
#include <string>
#include <sstream>
#include<fstream>
#include<iomanip>


using namespace std;

int main(){
    std::fstream myfile;
    myfile.open("Programming-Project-1.txt", std::ios::in);
    //std::ifstream myfile("Programming-Project-1.txt");
    int sum;
    std::string operation;
    uint32_t operand1;
    uint32_t operand2;
    stringstream ss;
   

    if (!myfile){  // print message if file is not open
            std::cout << "File can not be open\n";
        }

    while(ss >> operation >> operand1 >> operand2){
        ss << hex;
        // uint32_t operand1 = ss.str();
        // uint32_t operand2 = ss.str();
        string operation = ss.str();

        // operation = '+'
        sum = operand1 + operand2;
        cout << "The sum of " << operand1 << "and " << operand2 << "is " << sum << endl;
	}
	
	myfile.close();
	return 0;
}
