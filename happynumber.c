#include<stdio.h>
int main(){
	long long num, result;
	scanf("%lld",&num);
	int flag=1,i;
	int unhappy[]={4, 16, 37, 58, 89, 145, 42, 20};
	static long long count=0;
	result=num;
	revalue=0;
	while(1){
		num=0;
		if(result<=145){
		for(i=0;unhappy[i]<=20;i++){
			if(unhappy[i]==result)
			{	flag=0;
				break;}
			else
				flag=1;
		}
		}
		if(flag==0){
	    	printf("-1\n");
	    	break;}
		while(result!=0){
			num+=(result%10)*(result%10);
			result=result/10;
		}
		result=num;
		count++;
		
		if(result==1){
	   	 	printf("%lld\n",count);
	    	break;
		}
		
	}
	return 0;
}
