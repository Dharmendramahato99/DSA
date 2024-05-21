#include<bits/stdc++.h>
using namespace std;

vector<int> printDivisors(int num){
    vector<int>v;
    for(int i = 1; i*i <= num;i++){
        if(num%i == 0){
            v.push_back(i);
            if(num/i != i)
                v.push_back(num/i);
        }        
    }
    return v;
}
int main(){
    int num;
    cout<<"Enter Number"<<endl;;
    cin>>num;
    vector<int>result;
    result = printDivisors(num);
    for(int i = 0; i< result.size(); i++){
        cout<<result[i]<<" ";
    }
    
    return 0;
}