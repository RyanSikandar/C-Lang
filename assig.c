#include<stdio.h>
#include<string.h>
int main()
{
    char name[100]; //We define the array that it has 100 max characters 
   
    printf("Enter the string:\n");
    gets (name); //we take input in the string 
    int size = strlen(name); //to find the length of the string we do this and store the length size in variable size 
    for (int i = 0 ; i < size ; i ++) //we use for loop to separate each element 
    {
        char c = name[i]; //we use indexes for each element 
        int ascii = c; //to get the ascii value of each element 
        ascii=ascii-7; //we move the value to the left by 7 places 
        char from_ascii=ascii; //this is to covert the ascii value to character 
        name[i] = from_ascii; //store the each character in the array 
        
    }
    puts(name); //print the new array 
        for (int i = 0 ; i < size ; i ++)
    {
        char c = name[i];
        int ascii = c;
        ascii=ascii+7;
        char from_ascii=ascii;
        name[i] = from_ascii;
        
    }
    puts(name);
}