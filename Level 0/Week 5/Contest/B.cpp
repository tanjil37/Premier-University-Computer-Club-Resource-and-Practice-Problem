#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int sun;
    if (S == "SUN")
        sun = 7;
    else if (S == "MON")
        sun = 6;
    else if (S == "TUE")
        sun = 5;
    else if (S == "WED")
        sun = 4;
    else if (S == "THU")
        sun = 3;
    else if (S == "FRI")
        sun = 2;
    else if (S == "SAT")
        sun = 1;

    cout << sun << endl;

    return 0;
}