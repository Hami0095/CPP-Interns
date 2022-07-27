// Example program
#include <iostream>
#include <string>
#include<stdio.h>


using namespace std;

int main(){
    // Compound Assignment operators: 
    int l = 9, w =3;
    int area = l*w;
    area = area*area; // simple assignment
    cout << "Simple Assignment : "<<  area << endl;
    area = l*w;
    area *= area;   // coumpound assignment
    cout << "coumpound assignment: " << area << endl;
    
    l += 5; // l = l + 5
    cout << l;
    
    cout << " \t \t \t \t \t Hi I am a robot \n \t this is me"; // \n is called new line sequence
    
    /*   
    // example: month number 
    
    int monthNum;
    cout << "Enter Month number: "<<endl;
    cin >> monthNum;
// IMPORTANT NOTE :=> C++/ C these languages are indentation free
    if(monthNum >1 && monthNum < 13 ){
        if(monthNum == 1)
            cout << "jan"; 
        else if(monthNum == 2)
            cout << "Feb";            
        else if(monthNum == 3)
            cout << "Mar";
        else if(monthNum == 4)
            cout << "Apr";
        else if(monthNum == 5)
            cout << "May";
        else if(monthNum == 6)
            cout << "Jun";
        else if(monthNum == 7)
            cout << "Jul";
        else if(monthNum == 8)
            cout << "Aug";
        else if(monthNum == 9)
            cout << "Sept";
        else if(monthNum == 10)
            cout << "Oct";
        else if(monthNum == 11)
            cout << "Nov";
        else
            cout << "Dec";
        
    }else
        cout << "BHAI SAAL MAIN KITNY MAHENY HOTY HAIN?" << endl;
    
    */
    return 0;
  
}
