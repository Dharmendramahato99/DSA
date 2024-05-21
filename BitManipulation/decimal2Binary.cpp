#include<bits/stdc++.h>
using namespace std;

string convert2Binary(int &x){
    string res = "";
    while(x != 0){
        if(x%2 == 1){
            res += '1';
        }
        else{
            res += '0';
        }
        x = x/2;
    }
    return res;
}
string reverse(string &str){
   int n = str.size();
   string res = "";
   for(int i = n-1;i>=0;i--){
     res += str[i];
   }
   return res;
}

int main(){
    int x;
    cout<<"Enter Number"<<endl;
    cin>>x;
    string res = convert2Binary(x);
    string result = reverse(res);
    cout<<result;
    return 0;
}