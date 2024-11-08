#include <iostream>
using namespace std ;

class BankAccount {
    private:
    float AccNum, balance=10000.00, withdrawAmt, depositAmt ; 
    public:
    void getData() {
        cout << "Enter your Account number : " ;
        cin >> AccNum ;
        cout << endl ;
        options() ;
    }
    void withdrawBal() {
        cout << "Enter the amount you want to withdraw : " ;
        cin >> withdrawAmt ;
        if (withdrawAmt >= balance-1000) {
            cout << "Error : Insufficient Balance !!\n" ;
            cout << "\n\n----- Thanks for using our services -----" ;
        }
        else {
            balance -= withdrawAmt ;
            cout << "\nRemaning Balance : " << balance ;
            cout << "\n\n----- Thanks for using our services -----" ;
        }
        
    }
    void depositBal() {
        cout << "Enter the amount you want to deposit : " ;
        cin >> depositAmt ;
        balance = balance + depositAmt ;
        cout << "\nRemaning Balance : " << balance ;
        cout << "\n\n----- Thanks for using our services -----" ;
    }
    void options() {
        int choice ;
        cout << "----- Correct Account Number -----\n" ;
        cout << "Initializing our services..........\n" ;
        cout << "----- Welcome to our Bank -----\n" ;
        cout << "Please choose any one option : " << endl ;
        cout << "1.Withdraw Amount \n" ;
        cout << "2.Deposit Amount \n" ;
        cout << "Enter your choice (1/2) :  " ;
        cin >> choice ;
        if (choice == 1) {
            withdrawBal() ;
        }
        else if (choice == 2) {
            depositBal() ;
        }
        else {
            cout << "Wrong choice ! " << endl ;
            cout << "Exiting our services !! ---.........\n" ;
        }
    }
};

int main () {
    BankAccount Sankalp ;
    Sankalp.getData() ;
    return 0 ;
}