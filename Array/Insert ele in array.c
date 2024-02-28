/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int a[8]={10,20,30,40,50},n,i;
    // for(int i=7;i>=1;i--){
    //     a[i+1]=a[i];
    // }
    // a[1]=60;
    // n=n+1;
    n=7;
    i=n-1;
    while(i>=1){
        a[i+1]=a[i];
        i=i-1;
    }
    a[1]=60;
    for (int i=0;i<8;i++){
        printf("%d\t",a[i]);
    }
}