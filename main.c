#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
			int answer = 30; 
	
	//do ����; //������ ������ ���� �ѹ�
// while ( ���ǽ� );
	do {
		printf(" guess the answer : ");
		scanf_s("%d", &answer); 
		
		if(answer < 30){
			printf("up!\n");
		}
		else if(answer=30) {
			printf("congratulation!!\n");
	      }
	    else if(answer > 30){
	    	printf("down!\n");
		}
	  }
	while(answer != 30);	
         

return 0;
}
	
	

