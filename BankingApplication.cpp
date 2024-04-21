#include <iostream>
#include <vector>
#include <string>

using namespace std ;

struct Account {
    string bank_name;
    string bank_branch;
    string acc_holder_name;
    int acc_number;
    string acc_holder_address;
    float available_balance = 0;
};

vector<Account> accounts;

void createAccount() {
    Account acc;
    cout << "\nEnter bank name: ";
    cin >> acc.bank_name;
    cout << "\nEnter bank branch: ";
    cin >> acc.bank_branch;
    cout << "\nEnter account holder name: ";
    cin >> acc.acc_holder_name;
    cout << "\nEnter account number: ";
    cin >> acc.acc_number;
    cout << "\nEnter account holder address: ";
    cin >> acc.acc_holder_address;
    accounts.push_back(acc);
    cout << "\nAccount created successfully!\n";
}

void displayAccounts() {
    for (const auto& acc : accounts) {
        cout << "\nBank name: " << acc.bank_name
                  << "\nBank branch: " << acc.bank_branch
                  << "\nAccount holder name: " << acc.acc_holder_name
                  << "\nAccount number: " << acc.acc_number
                  << "\nAccount holder address: " << acc.acc_holder_address
                  << "\nAvailable balance: " << acc.available_balance << "\n";
    }
}

int main() {
    char option;
    while (true) {
        cout << "\n***** Welcome to Bank Application *****\n"
                  << "1. Create new account\n"
                  << "2. Display account information\n"
                  << "3. Exit\n"
                  << "Enter option: ";
        cin >> option;
        switch (option) {
            case '1': createAccount(); break;
            case '2': displayAccounts(); break;
            case '3': return 0;
            default: cout << "\nInvalid option. Please try again.\n"; break;
        }
    }
}
