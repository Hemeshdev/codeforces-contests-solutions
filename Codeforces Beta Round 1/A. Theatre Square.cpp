#include <bits/stdc++.h>
using namespace std;

int main(){
	
	long long n,m,a;
	cin>>n>>m>>a;
	long long int x = ceil(static_cast<double>(n)/a);
	long long int y = ceil(static_cast<double>(m)/a);
	cout<<x*y;
	return 0;
}
