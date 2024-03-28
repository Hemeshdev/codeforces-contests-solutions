#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin>>t;
    while(t--){
      string temp;
      cin>>temp;
      int h = stoi(temp.substr(0,2));
      int m = stoi(temp.substr(3,2));
      string ans ="";
      int nh=h;
      if(h==0) {
        nh =12;
        
      }
      else if(h>12){
        nh = h%12;
      }
      if(nh<10) ans+="0";
      ans+=to_string(nh);
      ans+=":";
      ans+=temp.substr(3,2);
      ans+=" ";
      if(h>=12) ans+="PM";
      else ans+="AM";
      cout<<ans<<endl;
    }
}
