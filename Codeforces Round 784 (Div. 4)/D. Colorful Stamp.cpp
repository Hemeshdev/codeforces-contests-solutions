#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      string str;
      cin>>str;
      if(n<=1){
        cout<<"NO"<<endl;
        continue;
      }
      vector<string>temp;
      string t = "";
      for(int i=0;i<n;i++){
        if(str[i]=='W'){
          temp.push_back(t);
          // cout<<t<<" ";
          t ="";
        
        }
        else t+=str[i];
      }
      temp.push_back(t);
      // cout<<endl;
      bool flag = true;
      for(auto i:temp){
        if(i.find('R')==string::npos ^ i.find('B')==string::npos){
          flag =false;
          break;
        }
      }
      if(flag) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}
