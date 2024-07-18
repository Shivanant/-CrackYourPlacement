#include <bits/stdc++.h>
using namespace std;
string numberof(string str,int n)
    {
        if(n==0)
            return "";
        string ans="";
        for(int i=1;i<=n;i++)
        {
            ans=ans+str;
        }
        return ans;
    }
    string intToRoman(int num) {
        int a[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        map<int,string> mp={{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}};
        string ans="";
        int n;
        for(int i=0;i<13;i++)
        {
            
            n=num/a[i];
            ans=ans+numberof(mp[a[i]],n);
            
            num=num%a[i];
        
        }
        return ans;
        
        
    }
int main(){
    int n;
    cin>>n;
    cout<< intToRoman(n);

}