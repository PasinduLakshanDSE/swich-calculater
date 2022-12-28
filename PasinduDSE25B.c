#include<stdio.h>
void addition(int num1,int num2){
	int total=num1+num2;
	printf("Answer:%d\n",total);
}
void subraction(int num1,int num2){
	int sub=num1-num2;
	printf("Answer:%d\n",sub);
}
void multiplication(int num1,int num2){
	int mul=num1*num2;
	printf("Answer:%d\n",mul);
}
void divition(int num1,int num2){
	int divi=num1/num2;
	printf("Answer:%d\n",divi);
}
int main(){
	int num1;
	int num2;
	char opcode;
	printf("Enter the operater:");
	scanf("%c",&opcode);
	
	printf("Enter the num1:");
	scanf("%d",&num1);
	printf("Enter the num2:");
	scanf("%d",&num2);
	
	
	switch(opcode){
		case '+':
			addition(num1,num2);
			break;
		case '-':
			subraction(num1,num2);
			break;
		case '*':
			multiplication(num1,num2);
			break;
		case '/':
			divition(num1,num2);
			break;
		default:
			printf("Invalid methametical operater");
			break;
	}
	return 0;
}
	
