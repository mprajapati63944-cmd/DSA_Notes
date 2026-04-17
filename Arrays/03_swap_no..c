// swap no. without declare new variable
#include <stdio.h>
int main(){
    int a=5 ;
    int b=6 ;
    printf("before swap : a is %d & b is %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap : a is %d & b is %d ",a,b);
}