/*WAP in C++ to concetenate two strings using operator overloading*/

#include <iostream>

using namespace std ;

class MyString {
private:
  string str;
public:
  
  MyString(string s)  {
    str = s ;
  }

  MyString operator+(MyString other) {
    return str + other.str;
  }

  void display() {
    cout << str ;
  }
};

int main() {
  MyString str1("Hello, ");
  MyString str2("World!");
  MyString result = str1 + str2;

  result.display() ;
  return 0;
}
