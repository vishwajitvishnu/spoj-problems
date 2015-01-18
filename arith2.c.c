#include<stdio.h>
int main(){
	long long int res,t,num1,a;
	long long int sym;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&num1);
		res=num1;
		while((sym=getchar())!="\n"){
			if(sym=='=')
				break;
			else if(sym==' ')
				continue;
			else{
			scanf("%lld",&a);
				if(sym== '+')
					res+= a;
				else if(sym== '-')
					res-= a;
				else if(sym== '*')
					res*= a;
				else
					res/= a;
			}
		}
		printf("%lld\n",res);
	}
	return 0;
}
