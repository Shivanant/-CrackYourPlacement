#include<bits/stdc++.h>
using namespace std;
int main(){
    string haystack="abc",needle="c";
    bool flag=0;
    for(int i =0;i<=haystack.length()-needle.length();++i){
        if (haystack.substr(i,needle.length())==needle){
            cout<<"index i:"<<i<<endl;
            cout<<haystack.substr(i,needle.length())<<endl;
            flag=1;
            break;
        }
        

    }

    if (!flag){
        cout<<"no str matching";
    }
    return 0;
    
}