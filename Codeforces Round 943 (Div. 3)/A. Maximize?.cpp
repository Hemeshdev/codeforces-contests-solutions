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
      int k =0;
      for(int i=1;i<a;i++){
        int temp = __gcd(a,i)+i;
        if(ans<temp){
          ans =temp;
          k=i;
        }
      }
      cout<<k<<endl;
    }
}
