#include <stdio.h>
int main(){
	printf("\nThis is a sample menu!\n\n\n");
	printf("###################menu######################\n");
	printf("\nStart\t\t1\n");
	printf("Pause\t\t2\n");
	printf("\nEnd  \t\t3\n");
	printf("#############################################\n");
	printf("\nPlease make a choice:");
	int a;
	scanf("%d", &a);
	switch(a){
		case 1: printf("game start!"); break;
		case 2: printf("game pause!");break;
		case 3: printf("game over!");break;
		default: break;
	}
	return 1;
}
