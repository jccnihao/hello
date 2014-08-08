#include <stdio.h>
int main (){
	printf("nihao\n");
	printf("**********************************");
	printf("\nFinish sort in the following!\n");
	printf("**********************************\n");
	int a[20];
	printf("Please input 20 numbers\n");
	int i,j,temp;
	for( j=0; j<=19; j++){
		scanf("%d",&a[j]);
	}
	int max;
	for(i=0; i<19;i++){
		 max=i;
		j=i+1;
		for(;j<20;j++)
			if(a[j]>a[max])
			max=j;
		if( i!=max){
			temp=a[i];
			a[i]=a[max];
			a[max]=temp;
		}
				
	}
	printf("The sequence after sorting is:\n ");
	i=0;
	while(i<20){
		printf("%5d",a[i]);
		if (i==9)
		putchar('\n');
		i++;
	}
	return 1;
}
