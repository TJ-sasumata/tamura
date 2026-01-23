#include<stdio.h>

int keisan(int a,int b, int c)
{
    int D=0;
    
    D=(b*b)-4*a*c;
    
    return D;
}
    
int main()
{
	int a,b,c,n;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);

    if(a == 0 ){
        printf("When 'A' is '0' can't be calclated.\ntry again.");
        return 0;
    }else{
        n=keisan(a,b,c);
                if(n > 0){
        printf("two real solutions");
        }else if(n == 0){
        printf("one real solutions");
        }else{
        printf("zelo real solutions");
        }
    }

    return 0;
}

