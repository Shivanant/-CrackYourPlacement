#include <bits/stdc++.h>
using namespace std;

bool helper(string s ,int sp, int ed){

    while (sp<=ed){
        if (s[sp]!=s[ed]){
            return 0;
        }
        sp++;
        ed--;
    }
    return true;



}
bool validpal(string s){
    int ed=s.length()-1;
    int sp=0;
    while(sp<=ed){
        if (s[ed]==s[sp]){
            ed--;
            sp++;
        }else{
            return (helper(s,sp+1,ed)||helper(s,sp,ed-1));
        }

    }
    return true;

    // return helper(s,0,n);

}
int main(){
    string s ;
    cin>>s;
    cout<< validpal(s);
}