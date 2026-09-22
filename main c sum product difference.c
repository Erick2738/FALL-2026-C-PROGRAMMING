#include <stdio.h>
int main(){
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d,&x,&y");
    printf("sum=%d\n",x+y);
    printf("Difference=%d\n",x-y);
    printf("Product=%d\n,x*y");
    if (y !=0)
        printf("Quotient=%.2f\n");
    else
        printf("Quotient=undefined");
    return 0;
}