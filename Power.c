 #include<stdio.h>
    int main()
    {
    	int num, exp,i=0;
    	float pow=1.0;
    	printf("Enter a number:");
    	scanf("%d", &num);
    	printf("Enter the exponent:");
    	scanf("%d", &exp);
    	while ( exp !=0)
    	{   
    	    
    		pow *= num ;
    	    exp--;
    	}
    
    	printf("%.0f", pow);
    	return 0;
    }
