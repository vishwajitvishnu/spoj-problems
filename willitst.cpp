#include<iostream>
using namespace std;
main(){
	long long n;
	cin>>n;
	if((n&n-1)==0)
		cout<<"TAK\n";
	else
		cout<<"NIE";
}
