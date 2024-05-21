#include<bits/stdc++.h>
using namespace std;

void printNames(int n,int count){
    if(count == n)
        return; 
    cout<<"Dharmendra"<<endl;
    printNames(n,count+1);
}

int main(){
    cout<<"How many times your name should be printed?"<<endl;
    int n;
    cin>>n;
    printNames(n,0);
    return 0;
}