//#include<iostream>
//
//using namespace std;
//
//int main() {
//
//	//int a = 10;
//	//cout << "Value of a : " << a;
//	//cout << endl << "Address of a: " << &a;
//	//// pointers => carry the addresses of the variables (Memory k ander locations)
//	//// Dynamic Array => Pointer that points to the Array 
//	//int* ptr; // ptr is a pointer that is pointing to an integer
//	//ptr = &a;
//	//cout << endl << "Value of ptr: " << ptr;
//	//cout << endl << "Value of A from ptr: " << *ptr; // I need the value of the variable that pointer holds
//
//	// DYNAMIC ARRAYs: 1D Array  => VECTORS = Column Matrix
//	/*int* arr = new int[5];
//	for (int i = 0; i < 5; i++) {
//		arr[i] = i;
//	}
//	for (int i = 0; i < 5; i++) {
//		cout << arr[i]<< " ";
//	}*/
//	//2D arrays: MATRICES
//	//STATIC ARRAY:
//	/*int _2dArr[5][5];*/
//	// =-==-==--=========================================MAKING A 2D ARRAY
//	int** arr2d = new int* [5];
//	for (int i = 0; i < 5; i++) {
//		arr2d[i] = new int[4];				// order 5*4
//	}
//	// --------------------------------------------------------------------------
//
//	// TRAVERSAL THROUGH 2D ARRAY:
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 4; j++) {
//			arr2d[i][j] = 5;
//		}
//	}
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 4; j++) {
//			cout << arr2d[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}



#include<iostream>
#include <string>

using namespace std;

class Car {
private:
	string name;
	string model;
	string dateOfMod;
	string engine;
	bool bullerProof;

	void printP() {
		cout << "Name: " << name << endl
			<< "Model: " << model << endl
			<< "DOM: " << dateOfMod << endl
			<< "Engine name: " << engine << endl
			<< "Bullet proof: " << bullerProof << endl;
	}

public:
	// Constructor: Constructor is a function that is named after the class, with no return type. It has three types:
	// Default constructor: 
	Car() {
		name = "Anston Martin";
		engine = "ENG5501";
		model = "Bond";
		dateOfMod = "12/5/1984";
		bullerProof = true;
	}
	// Parametrized Constructor
	Car(string n, string m, string dom, string eng, bool bp) {
		name = n;
		engine = eng;
		model = m;
		dateOfMod = dom;
		bullerProof = bp;
	}
	Car(string n) {
		name = n;
		engine = "ENG5501";
		model = "Bond";
		dateOfMod = "12/5/1984";
		bullerProof = true;
	}
	// Copy Constructor: 
	Car(Car* car) {
		name = car->name;
		engine = car->engine;
		model = car->model;
		dateOfMod = car->dateOfMod;
		bullerProof = car->bullerProof;
	}
	void print() {
		printP();
	}
	string getName() {
		return name;
	}
	void setName(string s) {
		name = s;
	}
};



class LinkedList {
private:
	class Node {
		public:
			int key;
			Node* nextnode;
	};
	Node root;
	Node current;
	Node lastNode;
	int capacity;

	// SPACE VS TIME

public:
	LinkedList() {	
		root.key = 0;
		root.nextnode = new Node;
		capacity = 0;

	}
	//    0       1		2		3
	//    root
	//	  	   	  curr	cn
	void addElement(int val) {
		Node* newElement = new Node;
		newElement->key = val;
		current.nextnode = newElement;
		lastNode.nextnode = newElement->nextnode;
		capacity++;
	}
	void removeElement(int key) {
		Node* curr = &root;
		for (int i = 0; i < capacity; ) {
			if (curr->nextnode->key== key) {
				curr->nextnode = curr->nextnode->nextnode;
				capacity--;
			}
			curr = curr->nextnode;
		}
	}

	bool FindAKey(int key) {
		Node* curr = &root;
		for (int i = 0; i < capacity; ) {
			if (curr->nextnode->key == key) {
				return true;
			}
			curr = curr->nextnode;
		}
		return false;
	}


};



int main() {
	Car Aston; // Objects
	Car RollsRoyce = Car("RollsROyce", "2029", "10/5/2029", "phtomEng11", true); // 
	/*Aston.print();	*/
	cout << "Car Name: " << Aston.getName() << endl;
	Aston.setName("Porsche 911");
	cout << "Car Name: " << Aston.getName() << endl;

	cout << endl;
	/*RollsRoyce.print();*/

}

