#include<iostream>
using namespace std;
main(){
	long n,output;
	while(1){
		cin>>n;
		output=0;
		if(n==0)
			break;
		while(n){
			output+=n*n;
			n--;
		}
		cout<<output<<endl;
	}
}
