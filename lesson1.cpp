#include<iostream>	// HEADER FILES
#include<string>


using namespace std;

int main() {

	//int a;	// definition
	//int b = 0;	// initialization/ Declaration

	// TYPES OF DATATYPEs:	1. PRE-DEFINED DATATYPEs, 2. USER-DEFINED DATATYPES 

	// PRE-DEFINED: 
	// int, float, double, char, string, long double, long int, ... 
	
	// int and float 
	//int integer = 2.5;	//TYPE-CASTING => process in which one datatype is converted into another one
	//float _float = 3;
	//cout << "Integer: " << integer << endl;	// c-CONSOLE-out_OUTPUT
	//cout << "FLOAT: " << _float << endl;	// c-CONSOLE-out_OUTPUT
	////	---------------

	//double _double = 2;
	//cout << "double: " << _double << endl;	// c-CONSOLE-out_OUTPUT

	// CHARACTER-TYPE DATATYPES: 
		// 'a', v, c,d, %, &, ",  
		// a + a 
		// 
	// char, string
	char myChar1 = '%';	
	char myChar2 = '!';
	string str1 = "Hi ";
	string str2 = "I am Abdur Rehman";

	/*cout << myChar1 + myChar2 << endl;*/
	//cout << str1 + str2 << endl;

	// CONDITIONS, EXPRESSIONS, STATEMENTS
		// CONDITION		compile-time
	int a = 0, b = 5, x = 3;
	if (a == 0) {
		cout << "I AM IN CONDITION" << endl;
		}
	
		// EXPRESSIONS		run-time
	a == 0 ? b = a : b = x;
	cout << b;


	return 0;
}
