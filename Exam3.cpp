#include <iostream>
#include <cstring>

using namespace std;

class String {
private:
    char str[500];

public:
    String() {}

    String(const char S1[]) {
        strcpy(str, S1);
    }

    String operator+(const String& S1) {
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, S1.str);
        return temp;
    }

    friend ostream& operator<<(ostream& os, const String& S) {
        os << S.str;
        return os;
    }
};

int main() {
    String s1("Sankalp");
    String s2(" Rawat");
    String s3;

    s3 = s1 + s2;

    cout << "Concatenated strings are : " << s3 << endl;

    return 0;
}
