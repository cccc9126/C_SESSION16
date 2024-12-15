#include <stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main(int argc, const char * argv[]) {
    int a=1;
    int b=6;
    swap(&a,&b);
    printf("%d %d",a,b);
    
    return 0;
}
