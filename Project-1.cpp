#include<iostream>
#include<fstream>
using namespace std;

int main(){
   fstream myfile;
   //myfile.open("Programming-Project-1.txt", ios::in);
   fstream myfile("Programming-Project-1.txt");
   string operation;
   unsigned int operand1;
   unsigned int operand2;

   while(myfile >> operation >> operand1 >> operand2){
       operation = '+';
       cout << operand1 << operation << operand2 << endl;
   }
}