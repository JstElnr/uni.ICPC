#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    set<char> n;
    for(char c:s){
    if(isalpha(c)) n.insert(c);
}
    cout<<n.size();
    return 0;
}