#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int q1,q2,q3,q4,q5,q6;
    q6=n%10;
    q5=n/10%10;
    q4=n/100%10;
    q3=n/1000%10;
    q2=n/10000%10;
    q1=n/100000%10;
    if(q1+q2+q3==q4+q5+q6) cout<<"YES";
    else cout<<"NO";
    return 0;
}