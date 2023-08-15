// Online C compiler to run C program online
#include <stdio.h>
#include <limits.h>
int main() {
    // Write C code here
    int n,p;
    scanf("%d %d",&n,&p);
    int advance=0;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int passs=arr[p-1];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=passs && arr[i]>0){
            advance++;
        }
    }
    
    printf("%d",advance);

    return 0;
}

