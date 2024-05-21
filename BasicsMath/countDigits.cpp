#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
   int count = 0;
   while(n >0 ){
    count++;
    n = n/10;
   }
   return count;
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int result = countDigits(n);
    cout<<result;
    return 0;
}