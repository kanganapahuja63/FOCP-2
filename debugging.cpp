#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 2, 3, 1};

    for (int i = 0; i < 5; i++) {

        // Skip if element already counted
        bool alreadyCounted = false;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyCounted = true;
                break;
            }
        }
        if (alreadyCounted)
            continue;

        int count = 0;
        for (int j = 0; j < 5; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        cout << arr[i] << " occurs " << count << " times\n";
    }

    return 0;
}