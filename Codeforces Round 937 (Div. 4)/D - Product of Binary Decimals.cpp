#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isGood(int e,vector<int>& temp){
  if(e==1 || find(temp.begin(),temp.end(),e)!=temp.end()) return true;
  for(int i=1;i<temp.size();i++){
    if(e%temp[i]==0) return isGood((e/temp[i]),temp);
  }
  return false;
}
int main() 
{
    vector<int>temp;
    temp.push_back(1);
    for(int i=1;i<=5;i++){
      int q = pow(10,i);
      
      int s = temp.size();
      temp.push_back(q);
      for(int j=0;j<s;j++){
        int w = q+temp[j];
        temp.push_back(w);
      }
      
    }
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      bool flag = isGood(n,temp);
      if(flag) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}
