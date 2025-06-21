#include<iostream>
#include<string>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
string a,b;
cin>>a>>b;
for(size_t i =0;i<a.size();i++){
cout<<((a[i]-'0')^(b[i]-'0'));
}cout<<"\n";
return 0;
}