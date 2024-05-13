#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      unordered_map<int,int>mp;
      for(int i=0;i<n;i++){
        int a;
        cin>>a;
        mp[a]++;
      }
      bool flag =false;
      for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second>=3) {cout<<it->first<<endl; flag =true; break; }
      }
      if(!flag)cout<<-1<<endl;
    }
}
