#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    const int MAX_N = 100;
    char names[MAX_N][11]; // Assuming names are at most 10 characters long
    int ages[MAX_N];

    // Read names and ages
    for (int i = 0; i < N; ++i) {
        cin >> names[i] >> ages[i];
    }

    // Find the index of the youngest person
    int min_age = ages[0];
    int min_index = 0;
    for (int i = 1; i < N; ++i) {
        if (ages[i] < min_age) {
            min_age = ages[i];
            min_index = i;
        }
    }

    // Print names starting from the youngest person
    for (int i = 0; i < N; ++i) {
        int index = (min_index + i) % N;
        cout << names[index] << endl;
    }

    return 0;
}
