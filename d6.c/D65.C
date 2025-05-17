#include <stdio.h>
int main()
{
    int arr[]={1,2,6,4,31,2,3,4,5};
    int brain=arr[0];
    int length=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",length);
    for(int i=0;i<=length-1;i++){
        if(brain<arr[i]) brain=arr[i];
    }
    printf("%d",brain);
   
    return 0;
}