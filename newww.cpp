#include <iostream>

using namespace std ;

class student {
    private :
     int a , b ;
    
    public :
     student(int num1 , int num2){
      a = num1 ;
      b = num2 ;
     }
    
    int sum(int num1 , int num2){
      int c = a + b ;
      return c ;
    }
};

int main() {
    student s1(14 , 28);
    int result = s1.sum(14 , 28);
    cout << result ;  

}