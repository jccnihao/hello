#include <stdio.h>
#include <string.h>
#define Result_true 1
#define Result_false 0 
#define QUERY 1
#define WITHDRORY 2
#define EXIT 3
#define PASSWORD "111"
int IsCard(){
	char cmd[3];
	printf("\n\"yes\" means you have inserted card and \"no\" means you have not inserted. please input yes and no.\n ");
	gets(cmd);
//	getchar();
	if( strcmp(cmd,"yes")==0) return 1;
	else return 0;
	
}
	
int main(){
	int pwd=0;
	int card=0;
//	char pass[3]; 
	while(1){
		printf("please insert card!\n");
		card=IsCard();
		if(card==Result_false)
		continue;
		
		int choice=0;
		while(!pwd){
			printf("please iuput password!\n");
			char pass[3]={'\0'};
			gets(pass);
		//	getchar();
			if (strcmp(pass,"111")==0) pwd=1;
			else pwd=0;
			if(pwd==Result_false){
		   	printf("password is false.if exit please input 1.else input other number and try again.\nchoice=");
		  	scanf("%d",&choice);
		 	 if(choice==1) break;
				}
			if(pwd==Result_true)
			break;
			}
		if(choice==1) continue;
		int item=0;
		printf("****************menu*****************\n\n");
		printf("Query.............1\n");
		printf("Withdrow..........2\n");
		printf("Exit..............3\n\n");
		printf("************************************\n");
		printf("\nplease select item: " );
		scanf("%d",&item);
		switch(item){
			case 1: printf("QUERY!\n\n\n");break;     //	Query();break;
			case 2: printf("WITHDROW\n\n\n");break;   //Withdrow();break;
			case 3: printf("Ouuput your card!\n\n\n");break;  //Exit();break;
			default: break;
		}
	}

}


