#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<string> inp;
    for(int i=0;i<x;i++){
        string a;
        cin>>a;
        inp.push_back(a);
    }
    for(int i=0;i<x;i++){
        string ans="";
        if(inp[i].size()>10){
            ans+=inp[i][0];
            ans+=to_string(inp[i].size()-2);
            ans+=inp[i][inp[i].size()-1];
        }else{
            ans=inp[i];
        }
        cout<<ans<<endl;
        
    }
    return 0;

}