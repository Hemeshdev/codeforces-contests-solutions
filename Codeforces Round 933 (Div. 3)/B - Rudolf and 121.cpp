#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<long long>temp(n,0);
    for(int i=0;i<n;i++){
      cin>>temp[i];
    }
    for(int i=0;i<n-2;i++){
      if(temp[i]>0){
        temp[i+1]-=2*temp[i];
      temp[i+2]-=temp[i];
      temp[i]=0;
      }
      
    }
    bool flag  =true;
    for(int i=0;i<n;i++){
      if(temp[i]!=0) flag = false;
    }
    if(flag==true) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}
