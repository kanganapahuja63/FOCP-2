#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Bank {

    unordered_map<int, long long> balance;

public:

    bool CREATE(int X, long long Y) {

        // New account
        if (balance.find(X) == balance.end()) {
            balance[X] = Y;
            return true;
        }

        // Existing account
        balance[X] += Y;
        return false;
    }

    bool DEBIT(int X, long long Y) {

        // User not found or insufficient balance
        if (balance.find(X) == balance.end() || balance[X] < Y)
            return false;

        balance[X] -= Y;
        return true;
    }

    bool CREDIT(int X, long long Y) {

        // User not found
        if (balance.find(X) == balance.end())
            return false;

        balance[X] += Y;
        return true;
    }

    long long BALANCE(int X) {

        // User not found
        if (balance.find(X) == balance.end())
            return -1;

        return balance[X];
    }
};

int main() {

    int Q;
    cin >> Q;

    Bank bank;

    while (Q--) {

        string query;
        cin >> query;

        if (query == "CREATE") {

            int X;
            long long Y;
            cin >> X >> Y;

            cout << (bank.CREATE(X, Y) ? "true" : "false") << '\n';
        }

        else if (query == "DEBIT") {

            int X;
            long long Y;
            cin >> X >> Y;

            cout << (bank.DEBIT(X, Y) ? "true" : "false") << '\n';
        }

        else if (query == "CREDIT") {

            int X;
            long long Y;
            cin >> X >> Y;

            cout << (bank.CREDIT(X, Y) ? "true" : "false") << '\n';
        }

        else if (query == "BALANCE") {

            int X;
            cin >> X;

            cout << bank.BALANCE(X) << '\n';
        }
    }

    return 0;
}