#include<stdio.h>
int main(){
    int count=0;
    int n;
    printf("Range: ");
    scanf("%d",&n);
    for (int i = 1; i<=100; i++)
    {
        if(i%2!=0){
            printf("\n%d",i);
            count+=1;
        }
        if (count==n)
        break;
        
    }
    
}