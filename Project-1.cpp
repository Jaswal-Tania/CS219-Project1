#include<iostream>
#include<fstream>
using namespace std;

int main(){
   //myfile.open("Programming-Project-1.txt", ios::in);
   ifstream myfile("Programming-Project-1.txt");
   string operation;
   unsigned int operand1;
   unsigned int operand2;

   while(myfile >> operation >> operand1 >> operand2){
       //operation = '+';
       cout << operand1 << '+' << operand2 << endl;
   }
}