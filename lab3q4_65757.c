#include<stdio.h>
int main(){
	int input = 0;
	int cnt = 0,sum = 0;
	float avg = 0;
	do{
	    printf("Enter number: ");
	    scanf("%d",&input);
	    if(input <= 0) break;
	    sum += input;
	    cnt++;
	}while(1);
	avg = (float)sum/cnt;
	printf("sum = %d\n",sum);
	printf("average = %.2f\n",avg);
	return 0;
}
