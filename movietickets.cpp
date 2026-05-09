#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>
using namespace std;class MovieTicket {
    
    unordered_map<int, unordered_set<int>> bookedUsers;
    unordered_map<int, int> bookedCount;

public:

    bool BOOK(int X, int Y) {

        // Already booked
        if (bookedUsers[Y].count(X))
            return false;

        // Movie full
        if (bookedCount[Y] >= 100)
            return false;

        bookedUsers[Y].insert(X);
        bookedCount[Y]++;

        return true;
    }

    bool CANCEL(int X, int Y) {

        // Not booked
        if (!bookedUsers[Y].count(X))
            return false;

        bookedUsers[Y].erase(X);
        bookedCount[Y]--;

        return true;
    }

    bool IS_BOOKED(int X, int Y) {

        return bookedUsers[Y].count(X);
    }

    int AVAILABLE_TICKETS(int Y) {

        return 100 - bookedCount[Y];
    }
};

int main() {

    int Q;
    cin >> Q;

    MovieTicket mt;

    while (Q--) {

        string query;
        cin >> query;

        if (query == "BOOK") {

            int X, Y;
            cin >> X >> Y;

            cout << (mt.BOOK(X, Y) ? "true" : "false") << '\n';
        }

        else if (query == "CANCEL") {

            int X, Y;
            cin >> X >> Y;

            cout << (mt.CANCEL(X, Y) ? "true" : "false") << '\n';
        }

        else if (query == "IS_BOOKED") {

            int X, Y;
            cin >> X >> Y;

            cout << (mt.IS_BOOKED(X, Y) ? "true" : "false") << '\n';
        }

        else if (query == "AVAILABLE_TICKETS") {

            int Y;
            cin >> Y;

            cout << mt.AVAILABLE_TICKETS(Y) << '\n';
        }
    }

    return 0;
}