#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int>v(n,0);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      int i=0,j=n-1;
      int sum1=v[0],sum2=v[n-1];
      int ans =0;
      while(i<j){
        if(sum1==sum2){
          ans = max(ans,(i+1+n-j));
          i++;
          sum1+=v[i];
        }while(sum1<sum2 && i<j){
          i++;
          sum1+=v[i];
          
        }
        while(sum1>sum2 && i<j){
          j--;
          sum2+=v[j];
          
        }
      }
      cout<<ans<<endl;
    }
}
