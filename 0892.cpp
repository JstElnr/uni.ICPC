#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==12||n<3&&n>0) cout<<"Winter";
    else if(n>2&&n<6) cout<<"Spring"<<endl;
    else if(n>5&&n<9) cout<<"Summer"<<endl;
    else if(n>8&&n<12) cout<<"Autumn"<<endl;
    else cout<<"Error"<<endl;
    return 0;
}