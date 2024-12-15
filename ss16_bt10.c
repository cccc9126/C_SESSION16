#include <stdio.h>
void deleteItem(int a[],int *length,int deleteIndex){
    for(int i=deleteIndex;i<10;i++){
        a[i]=a[i+1];
    }
    
    (*length)--;
}
int main(int argc, const char * argv[]) {
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    int length =10;
    deleteItem(&a, &length, 7);
    for(int i=0;i<length;i++){
        printf("%d", a[i]);
    }
    return 0;
}
