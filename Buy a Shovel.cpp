#include <iostream>
using namespace std;
int main() {
    int k,r;
    cin>>k>>r;
    int x=1;
    while(true) {
        int total=x*k;
        if (total%10==0||(total-r)%10==0) {
        cout<<x;
        break;
        }
        x++;
    }
    return 0;
}
