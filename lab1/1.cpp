#include <bits/stdc++.h>
using namespace std;

class Account {
    string depositor;
    int accountNo;
    string accountType;
    float balance;

public:
    Account(string depositor, int accountNo, string accountType, float balance = 0) {
        this->depositor = depositor;
        this->accountNo = accountNo;
        this->accountType = accountType;
        this->balance = balance;
        cout << "Account Created" << endl;
    }

    void depositAmount(float amount) {
        if(amount > 0) {
            this->balance += amount;
            cout << "Deposited amount: " << amount << endl;
        }
        else cout << "Amount is invalid." << endl;
    }

    void withdrawAmount(float amount) {
        if(amount > 0) {
            if(this->balance >= amount) {
                this->balance -= amount;
                cout << "Withdrawn amount: " << amount << endl;
            } else cout << "Not enough balance." << endl;
        } else cout << "Amount is invalid." << endl;
    }

    void display() {
        cout << "-----ACCOUNT INFORMATION-----" << endl;
        cout << "Name: " << this->depositor << endl;
        cout << "Balance: " << this->balance << endl;
    }
};

int main() {
    string depositor;
    string accountType;

    cout << "Enter depositor name: ";
    cin >> depositor;
    cout << "Enter account type: ";
    cin >> accountType;

    Account account(depositor, 1, accountType);

    int query = 0;
    do {
        cout << "Enter query" << endl;
        cout << "1 for deposit amount" << endl;
        cout << "2 for withdraw amount" << endl;
        cout << "3 for display the information" << endl;
        cout << "0 to exit" << endl;
        cin >> query;

        float amt;
        switch (query) {
            case 1:
                cout << "Enter amount to deposit = ";
                cin >> amt;
                account.depositAmount(amt);
                break;
            case 2:
                cout << "Enter amount to withdraw = ";
                cin >> amt;
                account.withdrawAmount(amt);
                break;
            case 3:
                account.display();
                break;
        }
    } while(query != 0);

    cout << "Exiting..." << endl;

    return 0;
}