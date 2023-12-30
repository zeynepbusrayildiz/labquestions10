#include <stdio.h>
#include <stdlib.h>

int main() {
	int i=0;
	float arr[8], sum=0.0, avg;
	for(i=0;i<8;i++){
		printf("Enter value:\n");
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	avg=sum/8;
	printf("%.3f",avg);
	return 0;
}
