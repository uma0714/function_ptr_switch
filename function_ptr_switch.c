#include<stdio.h>
#include<stdlib.h>
void add(int num1,int num2){
	printf("add:%d\n",num1+num2);
}
void sub(int num1,int num2){
	printf("sub:%d\n",num1-num2);
}
void mul(int num1,int num2){
	printf("mul:%d\n",num1*num2);
}
int main(){
	void (*fptr[])(int,int) = {add,sub,mul};
	int mode;
	int num1,num2;
	printf("Enter Choice:0->add,1->subtract,2->multiply\n");
	scanf("%d",&mode);
	if(mode>2){
		return 0;
	}
	else{
		printf("Enter \"num1\"-\"num2\"\n");
		scanf("%d-%d",&num1,&num2);
		fptr[mode](num1,num2);
		return 0;
	}
}
