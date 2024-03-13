#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--){
    int n;
    string str;
    cin>>n;
    cin>>str;
    int count =0;
    for(int i=0;i<n-2;i++){
      string temp = str.substr(i,3);
      if(temp=="pie" || temp=="map"){
        count++;
      }
    }
    for(int i=0;i<n-4;i++){
      string temp= str.substr(i,5);
      if(temp == "mapie") count--;
    }
    cout<<count<<endl;
  }
  
  
  return 0;
}
