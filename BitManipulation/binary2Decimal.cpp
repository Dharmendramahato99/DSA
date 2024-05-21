#include<bits/stdc++.h>
using namespace std;

int convert2Decimal(string num){
  int len = num.length();
  int res = 0,p2 = 1;
  for(int i = len-1; i>=0;i--){
    if(num[i] == '1'){
      res += p2;
    }
    p2 = p2 * 2;
  }
  return res;
}

int main(){

    string n;
    cout<<"Enter binary number"<<endl;
    cin>>n;
    int result = convert2Decimal(n);
    cout<<result;
    return 0;
}