/*Program to claculate area of wall by taking input from the user uisng parameterized constructor*/

#include <iostream>

using namespace std ;

class wallArea {
    private :
    float length ;
    float width ;

    public : 
    wallArea(float a , float b){
        length = a ;
        width = b ;
    }

   void displayOut(){
    cout << "The area of given wall is :" << length*width << endl ;
   }

};

int main () {
    float length , width ;
    cout << "Enter the length of wall : " ;
    cin >> length ;
    cout << endl ;
    cout << "Enter the width of wall : " ;
    cin >> width ;
    cout << endl ;
 wallArea wall1 (length,width);  
 wall1.displayOut(); 

 return 0 ;
 
}