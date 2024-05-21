#include<bits/stdc++.h>
using namespace std;

void print1ToN(int n,int count){
  if(count > n)
     return;
  cout<<count<<endl;
  print1ToN(n,count+1);
}

int main(){

    int n;
    cin>>n;
    print1ToN(n,1);
    return 0;
}