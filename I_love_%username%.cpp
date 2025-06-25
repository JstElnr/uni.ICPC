#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s;
    cin>>s;
    vector<int> n(s);
    for(int i=0;i<s;i++){
        cin>>n[i];
    }
    int amazing=0,max=n[0],min=n[0];
    for(int i=1;i<s;i++){
        if(n[i]>max){
            amazing++;
            max=n[i];
        }else if(n[i]<min){
            amazing++;
            min=n[i];
        }
    }cout<<amazing;
    return 0;
}