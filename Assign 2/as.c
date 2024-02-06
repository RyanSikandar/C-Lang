// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num,e;
    float f;
    printf("Enter a number:");
    scanf("%d",&e);
    for(f=e;f>=0;)           
            { 
                if(f*f!=0) 
                f-=0.01 ;
            }
            printf("%.2f", f);
            
    return 0;
}