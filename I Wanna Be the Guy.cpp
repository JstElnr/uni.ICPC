#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> dig;
    int p;
    cin>>p;
    for(int i=0;i<p;i++){
        int level;
        cin>>level;
        dig.insert(level);
    }  int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int level;
        cin>>level;
        dig.insert(level);
    }if(dig.size()==n) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    return 0;
}