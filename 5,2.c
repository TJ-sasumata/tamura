#include<stdio.h>

int main()
{
	int x,y,X,Y,n,m,sum=0;
	printf("講義の評価概算メーカー\n");
	printf("テストの割合:");
	scanf("%d", &n);
	
	printf("課題の割合:");
	scanf("%d", &m);

	printf("テストの点数=");
	scanf("%d", &x);
	
	printf("課題の点数=");
	scanf("%d", &y);
	
	X=(x*n)/10;
	Y=(y*m)/10;
	sum= X+Y;
	
	if(sum >= 90)
	{
		printf("評価:S\n");
	}else if(sum >= 80){
		printf("評価:A\n");
	}else if(sum >= 70){
		printf("評価:B\n");
	}else if(sum >= 60){
		printf("評価:C\n");
	}else{
		printf("評価:F\nもう一年！");
	}
	return 0;
}
	
