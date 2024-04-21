#include <iostream>
#include <string>

using namespace std;

enum cow_purpose
{
    milk,
    pet,
    hide,
    meat
};

class cow
{
public:
    cow(string name_c, int age_c, unsigned char purpose_c)
    {
        name = name_c;
        age = age_c;
        purpose = purpose_c;
    }

    string get_name()
    {
        return name;
    }

    int get_age()
    {
        return age;
    }

    unsigned char get_purpose()
    {
        return purpose;
    }

private:
    string name;
    int age;
    unsigned char purpose;
};

int main()
{
    cow my_cow("Hildy", 7, pet);
    cow my_cow2("Besty", 10, meat);
    cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << endl;
    cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << endl;
    cout << my_cow2.get_name() << " is a type-" << (int)my_cow2.get_purpose() << " and age of this cow is " << my_cow2.get_age() << endl;
    return 0;
}
