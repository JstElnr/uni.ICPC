#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int q=a%10;
        int w=(a%100)/10;
        int e=(a%1000)/100;
        int r=(a%10000)/1000;
        int t=(a%100000)/10000;
        int y=(a/100000);
        if((q+w+e)==(r+t+y)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
