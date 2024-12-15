#include <stdio.h>
void search(int *arr,int number,int length){
    for(int i=0;i<length;i++){
        if(arr[i]==number){
            printf("vị trí của phần tử %d là %d : ", number , i);
        }
    }
}
int main(int argc, const char * argv[]) {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int length =sizeof(arr)/sizeof(int);
    int *arrptr = arr;
    search(arr, 9, length);
    
    return 0;
}
