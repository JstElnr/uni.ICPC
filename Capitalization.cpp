#include<iostream>
#include<string>
#include<vector>
#include<cctype>
#include<ctime>
using namespace std;
int main(){
    clock_t start=clock();
    string s;
    cin>>s;
s[0]=toupper(s[0]);
cout<<s;
clock_t end=clock();
cout<<"\nTime:"<<double(end-start)/1000<<"s\n";
    return 0;
}