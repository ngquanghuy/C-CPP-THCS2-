#include<stdio.h>
#include<math.h>

int main(){
	int n, sum;
	scanf("%d", &n);
	sum = 0;
	for(int i=1; i<n; i++){
		if(n%i==0)
			sum+=i;
	}
	if(sum==n)	printf("1");
	else printf("0");
}
