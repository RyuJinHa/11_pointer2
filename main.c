#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int sum(int a, int b)
	{
		return a+b;
	}
	int sub(int a, int b)
	{
		return a-b;
	}
	int mul(int a, int b)
	{
		return a*b;
	}
	
	int divide(int a, int b)
	{
		return a/b;
	}

int main(int argc, char *argv[]) {
	
	int a,b;
	char op;
	int(*calcfunc)(int,int);
	int output;


	printf("숫자와 연산자를 입력하세요\n");
	scanf(" %d %c %d",&a,&op, &b);
	
	
	
	switch(op)
	{
		case'+':
			calcfunc=sum;
			break;
		
		case'-':
			calcfunc=sub;
			break;
		case'*':
			calcfunc=mul;
			break;
		case'/':
			calcfunc=divide;
			break;
		
	}

printf("result: %i",calcfunc(a,b));
	
	
	return 0;
}
