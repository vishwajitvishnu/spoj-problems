#include<iostream>
using namespace std;
int main(){
	unsigned long x,y,z,temp,a,n,d,count,t;
	cin>>t;
	while(t--){
		cin>>x>>y>>z;
		n=(2*z)/(x+y);
		d=(y-x)/(n-5);
		a=x-(2*d);
		cout<<n<<endl;
		count=0;
	while(count++!=n){
		cout<<a<<" ";
		a=a+d;
	}
	cout<<endl;
}
	return 0;
}


