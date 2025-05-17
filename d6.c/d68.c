#include <stdio.h>
int main()
{
    int size,sum;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<=size-1;i++){
        scanf("%d",&arr[i]);
         int sum = 0;
         sum += arr[i];
    }
    for(int i=0;i<size;i++){
        arr[i]=sum-arr[i];
        printf("%d",arr[i]);
    }
    
    
    
    return 0;
}