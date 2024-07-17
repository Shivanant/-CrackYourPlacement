#include <bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    cin>>s;
    unordered_map<char,int>mappa;
    for(int i =0;i<s.length();++i){
        if (mappa.find(s[i])==mappa.end()){
            mappa[s[i]]=1;
        }else{
            mappa[s[i]]++;
        }
    }
      for (auto it = mappa.begin(); it != mappa.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
}