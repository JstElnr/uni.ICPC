#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int x=max(a,b);
    int z=min(a,b);
    cout<<z<<" "<<(x-z)/2;
    return 0;
}