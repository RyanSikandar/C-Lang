#include <stdio.h>

int main(){

    int flag[15] = {0};
    int arr[15] = {0};
    int greatest = 0;
    int freq = 0;

    for (int i = 0; i < 15;i++){
        scanf("%d", &arr[i]);
        for (int j = 0; j < 15 - i;j++){
            if(arr[j]==arr[i]){
                flag[i] = 0;
                break;
            }
            else{
                flag[i] = 1;
            }
        }
    }
    for (int i = 0; i < 15;i++){
        int count = 0;
        
        for (int j = 0; j < 15;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count>greatest){
            greatest = count;
            freq = arr[i];
        }
    }

    if(greatest > 1){
        printf("Greatest element is:%d\nNumber of times repeated that number has been repeated is:%d", freq, greatest);
    }
    else{
        printf("The array has atleast one duplicate number");
    }
     

return 0;
}
