#include<iostream>	// HEADER FILES
#include<string>

using namespace std;





int main() {

	// OPERAtORS -- OPERANDS -- TYPES OF OPERATORS: 	
	// + - * /  ==> ARithmetic 
	// ==, >=, <=, !=, >, <   ==> Relational operators
	// && (and), || (or), ! (not) ==> logical operators
	// = Assignment operator

	// Unary operator(operand1);


	int a = 9, b= 9;
	//a = a + b;	// binary operator(operand1, operand2)
	//cout << a << endl // 9
	//	<< b;	// 9
	//
	// Conditionals :
	bool c1 = true; 
	bool c2 = false;
	bool c3 = true;
	if (c1 && c2 && c3) {
		cout << "I am in first conditional" << endl;
	}
	
	 if(!c1 || c2 || !(a!=9)){
		cout << "I am in second conditional" << endl;

	}else if(c1||c2 && c3){
		 cout << "I am in else if conditional" << endl;
	 }
	else {
		cout << "I am in else" << endl;
	}

	

	return 0;
}
