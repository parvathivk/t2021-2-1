#include<stdio.h>
int main(){
    int arr[30],i,j,size,temp=0;
    printf("Size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements: ");
    for(i=0;i<10;i++){
        for(j=0;j<size;j++){
            if(arr[j]%i==0){
                temp++;
            }
        }
        printf("%d: %d\t",i,temp);
        temp=0;
    }
    return 0;
    }