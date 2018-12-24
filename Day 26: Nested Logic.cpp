#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int day, month, year, D1, M1, Y1, mdif, ddif, ydif, dif;

    cin >> day >> month >> year >> D1 >> M1 >> Y1;

    mdif = month - M1;
    ddif = day - D1;
    ydif = year - Y1;
    dif = (year - Y1 > 0)
               ? 10000
               : (month - M1 > 0 && ydif == 0)
                     ? mdif * 500
                     : (day - D1 > 0 && ydif == 0) ? ddif * 15 : 0;
    cout << dif << endl;

    return 0;
}
