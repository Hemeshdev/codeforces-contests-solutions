#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n ,k;
      cin>>n>>k;
      vector<int>temp(k,0);
      for(int i=0;i<k;i++){
        cin>>temp[i];
      }
      sort(temp.begin(),temp.end());
      int ans = 0;
      for(int i =0;i<k-1;i++){
        ans+=2*temp[i]-1;
      }
      cout<<ans<<endl;
    }
}
