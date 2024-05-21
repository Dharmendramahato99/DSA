#include<bits/stdc++.h>
using namespace std;


void explainPair(){
    //pair<int,int>p = {1,3};
    //cout<<p.first<<" "<<p.second;
    
    //Nested Pair
    pair<int,pair<int,int>>p = {1,{3,4}};
    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first<<" ";
    
    //Array of pair
    pair<int,int>arr[] = {{1,2},{2,5},{5,1}};
    cout<<arr[1].second;

}

void explainVector(){
    vector<pair<int,int>>vec;
    vec.push_back({1,3});


     vector<int>v(5,100);
     vector<int>v1(5);

     vector<int>v2(v1);
}

int main(){
    //explainPair();
    explainVector();
    return 0;
}