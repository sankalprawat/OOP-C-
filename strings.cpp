#include <iostream>
#include <string>

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

  
  friend ostream& operator<<(ostream& out, MyString obj) {
    out << obj.str;
    return out;
  }
};

int main() {
  MyString str1("Hello, ");
  MyString str2("World!");
  MyString result = str1 + str2;

  cout << result << endl; 
  return 0;
}
