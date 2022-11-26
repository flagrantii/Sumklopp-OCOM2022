#include<bits/stdc++.h>
using namespace std;

main(){
	long long int n,sum=0;
	cin>>n;
	for(int i=2;i<=2*n;i+=2){
		for(int j=2;j<=i;j+=2){
			sum+=j;
		}
	}
	cout<<sum;
}
