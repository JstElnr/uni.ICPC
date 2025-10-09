#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=(n-5)/10;
    int x=s*(s+1);
    if(x==0) cout<<25;
    else{
        cout<<s*(s+1)<<25<<endl;
    }
    return 0;
}