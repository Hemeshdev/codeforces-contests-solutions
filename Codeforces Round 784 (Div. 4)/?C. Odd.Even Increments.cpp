#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int>temp(n,0);
      for(int i=0;i<n;i++){
        cin>>temp[i];
      }
      int e1=0,e2=0,o1=0,o2=0;
      for(int i=0;i<n;i+=2){
        if(temp[i]%2==0)e1=1;
        else o1=1;
      }
      for(int i=1;i<n;i+=2){
        if(temp[i]%2==0) e2=1;
        else o2=1;
      }
      if(e1 && o1) cout<<"NO"<<endl;
      else if(e2 && o2) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
    }
}
