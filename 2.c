#include <stdio.h>
#include <stdlib.h>

int main() {
	int i=0, n, arr[10];
	printf("Please enter a number, enter -1 to exit:");
	scanf("%d",&n);
	if(n!=-1){
		arr[i]=n;
		i++;
	} 
	while(n!=-1&&i<10){
		printf("Please enter a number, enter -1 to exit:");
		scanf("%d",&n);
		arr[i]=n;
		i++;
	}
	int j=i-1;
	for(i=0;i<j;i++){
		int sq=arr[i]*arr[i];
		printf("%d\n",sq);
	}
		
	return 0;
}
