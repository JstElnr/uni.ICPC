#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        vector<string> parts;
        int len=n.length();
        for(int i=0;i<len;i++){
            if(n[i]!='0'){
                string temp(1,n[i]);
                temp.append(len-i-1,'0');
                parts.push_back(temp);
            }
        }
        cout<<parts.size()<<"\n";
        for(const string &x: parts){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    return 0;
}