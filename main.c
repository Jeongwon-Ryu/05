#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char op;
	int x, y;
	int result;
	
	printf("enter the calculation: ");
    scanf("%d %c %d", &x, &op, &y);	
    
    //�����ڿ� ���� ������� ��� (result�� ����) 
    if (op=='+') 
        result=x+y;
    else if (op=='-')
        result=x-y;
    else if (op=='*')
        result=x*y;
    else
       result=x/y;
    
    printf("= %i ",result);
	return 0;
}
