#include <stdio.h>
void print(int *arr,int length){
    for(int i=0;i<length;i++){
        printf("arr[%d] = %d\n",i,*(arr+i));
    }
    printf("\n");
}
int main(int argc, const char * argv[]) {
    int arr[]={1,2,3,4,5};
    int *arrptr=arr;
    int length = sizeof(arr)/sizeof(int);
    
    print(&arr, length);
    return 0;
}
