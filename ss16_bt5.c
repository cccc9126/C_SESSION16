#include <stdio.h>
void update(int *arr,int number,int index){
    *(arr+index) = number;
}
int main(int argc, const char * argv[]) {
    int arr[]={1,2,3,4,5,6,7};
    int length=sizeof(arr)/sizeof(int);
    int *arrptr=arr;
    update(arr, 100, 2);
    for(int i =0;i<length;i++){
        printf("%d\n",arr[i]);
    }
    
    return 0;
}
