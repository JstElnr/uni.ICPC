#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drink =(k*l )/ nl;
    int lime = c * d;
    int salt = p / np;

    int total = min(min(drink, lime), salt)/n;
    cout << total;

    return 0;
}