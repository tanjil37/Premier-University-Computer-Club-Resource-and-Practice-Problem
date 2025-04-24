#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int maxRain = 0, currentRain = 0;

    for (char c : S) {
        if (c == 'R') {
            currentRain++;
            maxRain = max(maxRain, currentRain);
        } else {
            currentRain = 0;
        }
    }

    cout << maxRain << endl;
    return 0;
}
