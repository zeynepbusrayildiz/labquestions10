#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, j, arr[5],i=0;
	while(n!=-1&&i<5){
		printf("Please enter a number, enter -1 to exit:");
		scanf("%d",&n);
		arr[i]=n;
		i++;
	}
	j=i-1;
	for(i=0;i<=j;i++){
		if(arr[i]!=-1)
		printf("%d\t",arr[i]);
	}
	return 0;
}

