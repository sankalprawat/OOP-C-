#include <iostream>
using namespace std;

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    char* ptr = str;
    while (*ptr) {
        if ((*ptr) == 'a' || (*ptr) == 'e' || (*ptr) == 'i' ||
            (*ptr) == 'o' || (*ptr) == 'u' || (*ptr) == 'A' || (*ptr) == 'E' || (*ptr) == 'I' || (*ptr) == 'O' || (*ptr) == 'U') {
            vowels++;
        } 
        else{
            consonants++;
        }
        ptr++;
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
