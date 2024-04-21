#include <iostream>
using namespace std ;

int main() {
  int age;
  cout << "Enter your age: ";
    cin >> age;

  try {
  
    if (age < 0) {
      throw("Age cannot be negative!");
    }

    else if(age >= 18)
        cout << "You're elegible to vote." ;

    else 
    throw("You're not elegible to vote.") ;
  } 
  
  catch (const char* error) {
    cout << "Error: " << error << endl;
  }

  return 0;
}
