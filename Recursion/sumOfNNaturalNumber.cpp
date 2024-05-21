#include<bits/stdc++.h>
using namespace std;

int sumOfNNaturalNumber(int n){
  if(n == 0)
     return 0;
  return n + sumOfNNaturalNumber(n-1);
}

int main(){
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    int sum = sumOfNNaturalNumber(n);
    cout<<sum;
    return 0;
}