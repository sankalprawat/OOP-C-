#include<iostream>
using namespace std ;

class acct_holder{
    private :
    string name ;
    string accountNo ;
    double balance ;
    string Bank_name ;

    public :

    void get_data(){
        cout<<"Enter the name of Account Holder : " ;
        cin >> name ;
        cout << "Enter the Account Number : " ;
        cin >> accountNo ;
        cout << "Enter the balance of Account holder : ";
        cin >> balance ;
        cout << "Enter the name of the bank : " ;
        cin >> Bank_name ;
    }

    void put_data() {
        cout << "Name : " << name << endl ;
        cout << "Account Number : " << accountNo << endl ;
        cout << "Balance : " << balance << endl ;
        cout << "Bank name : " << Bank_name << endl ;
    }
};

int main() {
    acct_holder A1[10] ;
    int n ;
    cout << "Enter the number of Account holder you want : " ;
    cin >> n ;
    for(int i = 0 ; i < n ; i++){
       A1[i].get_data();
    }
    cout << "The deatils of the Bank holders are as follow :" << endl ;
    for(int i = 0 ; i < n ; i++){
       A1[i].put_data();
    }
    return 0 ;
}