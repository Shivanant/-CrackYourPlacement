#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
        stack<string>words;
        string word="";
        for (int i =0;i<s.size();++i){
            if (s[i]==' '){
                if(word!=""){
                    words.push(word);
                    word="";
                }
            }else{
                word+=s[i];
            }
        }
        if (word.length()){
            words.push(word);
        }
        string ans="";
        while (!words.empty()){
            ans+=words.top()+" ";
            words.pop();
        }
        ans.pop_back();
        return ans;
        
    }
int main(){
    string s ="Shivanant is a good boy";
   
    string ans=reverseWords(s);
    cout<<ans;


}