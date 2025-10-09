#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="qwertyuiopasdfghjklzxcvbnmq";
    char ss;
    cin>>ss;
    cout<<s[s.find(ss)+1]<<endl;
    return 0;
}