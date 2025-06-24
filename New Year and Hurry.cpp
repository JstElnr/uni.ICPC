#include<iostream>
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n,t;
    int count=0;
    int clock=240;
    std::cin>>n>>t;
    int solvetime=0;
    for(int i=1; i<=n;i++){
    solvetime+=5*i;
    if(solvetime<=clock-t){
    count++;}
     else{
        break;
    }
    }std::cout<<count;
    return 0;
}