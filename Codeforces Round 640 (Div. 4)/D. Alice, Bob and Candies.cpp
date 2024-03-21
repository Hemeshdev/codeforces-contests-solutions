#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int>ls;
      for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        ls.push_back(temp);
      }
      int alice =0;
      int bob =0;
      int tot =0;
      int maxi = 0;
      int i=0;
      int j = ls.size()-1;
      bool flag = true;
      while(i<=j){
        if(flag){
          int sum =0;
          while(sum<=maxi){
            sum+=ls[i];
            i++;
          }
          alice+=sum;
          tot++;
          maxi = sum;
          flag = !flag;
        }else if(!flag){
          int sum = 0;
          while(sum<=maxi){
            sum+=ls[j];
            j--;
          }
          tot++;
          maxi = sum;
          flag =!flag;
        }
      }
      int re = accumulate(ls.begin(),ls.end(),0)-alice;
      cout<<tot<<" "<<alice<<" "<<re<<endl;
      
    }
}
