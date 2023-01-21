#include <stdio.h>
#include <stdlib.h>
void rever(int*arr,int num){
    for(int i =0;i<num/2;i++){
        swap(2,3);
    }
    
}
void swap(int a,int b){
        int temp;
        temp = a;
        a = b;
        b = temp;
}
int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}