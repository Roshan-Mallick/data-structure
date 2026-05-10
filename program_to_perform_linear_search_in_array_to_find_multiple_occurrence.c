#include<stdio.h>

int main (){

    int n,i,num,found = 0;

    printf("Enter size of array : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter array elements : ");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter number to search : ");
    scanf("%d",&num);

    printf("number found at position : ");

    for (i=0;i<n;i++){
        if(arr[i]==num){
            printf("%d ",i);
            found = 1;
        }
    }

    if (found==0){
       printf("Not found");
    }

    printf("\n");




    return 0;
}
