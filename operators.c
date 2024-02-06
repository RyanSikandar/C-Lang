// if you want to divide an integer with an integer but get a float value youll have to do either of the two functions available 
#include <stdio.h>
int main()
 {   
int x=3;
int y=4;
float z= x / (float) y;
// or convert y into float and then print answer
printf("%f",z);
return 0;
 }