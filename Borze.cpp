#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    string res;
    for(int i=0;i<(int)s.size();){
        if(s[i]=='.'){
            res+='0';
            i++;
        }else{
            if(s[i+1]=='.'){
                res+='1';
            }else{
                res+='2';
            }
            i+=2;
        }
    }
    cout<<res<<endl;
    return 0;
}