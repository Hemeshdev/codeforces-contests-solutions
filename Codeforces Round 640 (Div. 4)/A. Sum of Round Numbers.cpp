#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      string temp;
      cin>>temp;
      int n = temp.size();
      vector<int>ans;
      int j =n;
      for(int i=0;i<n;i++){
        int q = (temp[i]-'0') * pow(10,j-1);
        if(q!=0) ans.push_back(q);
        j--;
      }
      cout<<ans.size()<<endl;
      for(auto i:ans){
        cout<<i<<" ";
      }
      cout<<endl;
    }
    return 0;
}
