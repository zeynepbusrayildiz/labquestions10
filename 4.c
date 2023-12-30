#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[10], i=0;
	for(i=0;i<10;i++){
		printf("Enter number:");
		scanf("%d",&arr[i]);
	}
	int j=i-1;
	for(j;j>=0;j--){
		printf("%d\t",arr[j]);
	}
	return 0;
}
