#include<stdio.h>
void tower(int n, char from, char to, char help);
int main()
{
    int n;
    printf("Enter the number of disk: ");
    scanf("%d",&n);
    tower(n, 'A', 'B', 'C');
    return 0;
}
void tower(int n, char from, char to, char help){
    if(n==1){
        printf("%c to %c \n",from, to);
    }
    else{
        tower(n-1, from, help, to);
        printf("%c to %c \n",from, to);
        tower(n-1, help, to, from);
    }
}
