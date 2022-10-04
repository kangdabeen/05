#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int sum=0;//0으로 초기화 누적이니까 
	int x; 
	int i; 
	
	printf("정수를 입력하시오.");
	scanf("%d", &x); 
	
	
	//for 문을 활용해서 1부터 x까지 sum에 더하는 코드 
    for (i=0;i<=x ;i++ ) //반복 (초기식; 조건식; 증감식;)
        sum=sum+ i;	//더하기  
	 
	printf("더하기 결과는  %i 입니다. \n", sum ); // 결과 출력 
	
	
	return 0;
}
