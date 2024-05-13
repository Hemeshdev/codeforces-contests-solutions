#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int a;
      cin>>a;
      int ans =0;
      if(a<=1399) ans = 4;
      else if(a>=1400 && a<=1599) ans = 3;
      else if(a>=1600 && a<=1899) ans =2;
      else ans = 1;
      cout<<"Division "<<ans<<endl;
    }
}
