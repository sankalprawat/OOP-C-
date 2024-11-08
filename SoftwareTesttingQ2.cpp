#include <iostream>
using namespace std;

#define PIN 4032

void showBalance(int balance);
void withdrawAmt(int &withdraw, int &balance);
void depositAmt(int &deposit, int &balance);

int main() {
    int enteredPIN;
    int balance = 10000, deposit = 0, withdraw = 0;
    int options;

    cout << "*** Welcome to ATM service *** \n";
    cout << "\n Please enter your PIN : ";
    cin >> enteredPIN;

    if (enteredPIN != PIN) {
        cout << "Please enter correct PIN !" << endl;
    } else {
        cout << "Choose any one service : \n";
        cout << "1. Check balance" << endl;
        cout << "2. Deposit Amount." << endl;
        cout << "3. Withdraw Amount." << endl;
        cout << "4. Quit." << endl;
        cout << "Enter the number corresponding to service you want (1, 2, 3, 4) : ";
        cin >> options;
    }

    switch (options) {
        case 1:
            showBalance(balance);
            break;

        case 2:
            depositAmt(deposit, balance);
            break;

        case 3:
            withdrawAmt(withdraw, balance);
            break;

        case 4:
            cout << "Thank you for using our service !" << endl;
            break;

        default:
            cout << "Please choose a correct option !" << endl;
            break;
    }

    return 0;
}

void showBalance(int balance) {
    cout << "Available balance is : " << balance << endl;
}

void depositAmt(int &deposit, int &balance) {
    cout << "Enter the amount you want to deposit : ";
    cin >> deposit;
    balance = balance + deposit; // Update balance with deposit
    cout << "Available balance is : " << balance << endl;
}

void withdrawAmt(int &withdraw, int &balance) {
    cout << "Enter the amount you want to withdraw : ";
    cin >> withdraw;
    if (withdraw > (balance - 500)) {
        cout << "Insufficient Balance ! " << endl;
    } else {
        balance = balance - withdraw;
        cout << "Please collect your cash !" << endl;
        cout << "Available balance is : " << balance << endl;
    }
}
