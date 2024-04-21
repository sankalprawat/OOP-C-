#include <iostream>

using namespace std;

float average(int mark1, int mark2, int mark3)
{
    return static_cast<float>(mark1 + mark2 + mark3) / 3.0f;
}

float average(float mark1, float mark2, float mark3)
{
    return (mark1 + mark2 + mark3) / 3.0f;
}

int main()
{
    int intMark1, intMark2, intMark3;
    float floatMark1, floatMark2, floatMark3;

    cout << "Enter three integer marks: ";
    cin >> intMark1 >> intMark2 >> intMark3;

    float intAvg = average(intMark1, intMark2, intMark3);
    cout << "Average of integer marks: " << intAvg << endl;

    cout << "Enter three floating-point marks: ";
    cin >> floatMark1 >> floatMark2 >> floatMark3;

    float floatAvg = average(floatMark2, floatMark2, floatMark3);
    cout << "Average of floating-point marks: " << floatAvg << endl;

    return 0;
}
