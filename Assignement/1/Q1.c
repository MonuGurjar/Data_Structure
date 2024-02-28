#include<stdio.h>
int main(){
    int a[100],target,n;
    printf("Enter the number of terms in array : ");
    scanf("%d",&n);
    printf("Enter the target number : ");
    scanf("%d",&target);
    for (int i=0;i<n;i++){
        printf("element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if(a[i]+a[j]==target){
                printf("[%d,%d]",i,j);
                break;
            }
        }
    }
}