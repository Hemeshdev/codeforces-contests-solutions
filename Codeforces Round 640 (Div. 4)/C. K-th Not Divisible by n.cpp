#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n,k;
      cin>>n>>k;
      int temp = (k-1)/(n-1);
      cout<<k+temp<<endl;
    }
}
