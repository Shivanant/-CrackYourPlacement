#include <bits/stdc++.h>
using namespace std;
void helper(int n, int o,int c ,vector<string>&v,string s){
    if(o==c && s.length()==2*n){
        v.push_back(s);
        return;
    }
    if (o>n|| c>o||s.length()>2*n)return ;
    s+="(";
    helper(n,o+1,c,v,s);
    s.pop_back();
    s+=")";
    helper(n,o,c+1,v,s);
    s.pop_back();
    return;



}
void generateparan(int n,vector<string> &v ){
    helper(n,0,0,v,"");
}

int main(){
    
    int n ;
    cin>>n;
    vector<string> ans;
    generateparan(n,ans);
    for (int i =0;i<ans.size();++i){
        cout<<ans[i]<<endl;
    }



}