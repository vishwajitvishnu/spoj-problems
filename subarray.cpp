#include<iostream>
using namespace std;
main(){
	long n,k,i,j,max;
	cin>>n;
	long arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>k;
	for(i=0;i<n-k+1;i++){
		max=arr[i];
		for(j=i;j<i+k;j++){
			if(max<arr[j])
				max=arr[j];
		}
		cout<<max<<" ";
	}
}
