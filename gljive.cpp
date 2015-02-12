#include<bits/stdc++.h>
using namespace std;
main(){
	long t=10,x,n=0,temp=1000001,sum=0;
	while(t--){
		cin>>x;
		sum+=x;
		if(fabs(sum-100)<=temp){
			temp=fabs(sum-100);
			n=sum;				
		}
		else if(fabs(sum-100)>temp){
			sum=sum-x;
			sum=0;
		}
		else{
			continue;
		}
	}
	cout<<n;
}


