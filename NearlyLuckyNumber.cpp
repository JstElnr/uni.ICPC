#include<iostream>
using namespace std;
int main(){
    int x=0;
    long long n;
    cin>>n;
    while(n>0){
        int count=n%10;
        if(count==4||count==7){
x++;
        }n/=10;
    }if(x==4||x==7){
        cout<<"YES";
    }
    else{
    cout<<"NO";
}
    return 0;
}