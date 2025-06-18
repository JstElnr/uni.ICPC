#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<char> unq;
    for(int i=0;i<s.size();i++){
        char c=s[i];
        unq.insert(c);
    }if(unq.size()%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}