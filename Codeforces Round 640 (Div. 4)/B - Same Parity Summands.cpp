#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int a,b;
      cin>>a>>b;
      bool one = false;
      bool two = false;
      int odd = a-(b-1);
      int eve = a-(2*(b-1));
      if(odd%2!=0 && odd>0) one =true;
      if(eve%2==0 && eve>0) two = true;
      if(one){
        cout<<"Yes"<<endl;
        for(int i=0;i<b-1;i++){
          cout<<1<<" ";
        }
        cout<<odd<<endl;
      }else if(two){
        cout<<"Yes"<<endl;
        for(int i=0;i<b-1;i++){
          cout<<2<<" ";
        }
        cout<<eve<<endl;
      }else{
        cout<<"No"<<endl;
      }
    }
    
    
    return 0;
}
