#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	int num=0; //count 
	
	printf("���ڿ��� �Է��ϼ��� . ");
	
	while ( (c=getchar()) != '\n')//�Է� ���ڰ� �������ڰ� ���Ë����� �ݺ� 
	{
		if( c >= '0' && c<= '9')
	     //�Էµ� ����(c)�� �����ΰ�? 
	    num=num+1;	// �׷��ٸ� �ϳ��� ����.  
	}
	
	
	printf("������ ������  %i�� �Դϴ�. \n", num );//���  
	
	
	
	return 0;
}
