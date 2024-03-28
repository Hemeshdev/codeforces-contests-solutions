#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int a;
      cin>>a;
      vector<vector<string>>v(a,vector<string>(a,""));
      for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
          if((i+j)%2==0) v[i][j] = "#";
          else v[i][j] = ".";
        }
      }
      for(int i=0;i<a;i++){
        string ans ="";
        for(int j=0;j<a;j++){
          ans+=v[i][j];
          ans+=v[i][j];
        }
        cout<<ans<<endl;
        cout<<ans<<endl;
      }
    }
}
