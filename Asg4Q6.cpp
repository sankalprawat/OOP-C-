// Write a program to count vowels and consonants in a given string using pointer.

#include <iostream>
using namespace std;

int main()
{
    char str[26], *pt;
    pt = str;
    int i = 0, c = 0;
    cout << "Enter a string : " << endl;
    cin >> str;

    while (*pt != '\0')
    {
        if (*pt == 'a' || *pt == 'e' || *pt == 'i' || *pt == 'o' || *pt == 'u')
        {
            c++;
        }
        i++;

        pt++;
    }

    cout << "Length of the string is : " << i  << endl;
    cout << "vowels in the string are : " << c << endl ;
    cout << "Consonant in the string are : " << i-c << endl ;

    return 0 ;
}