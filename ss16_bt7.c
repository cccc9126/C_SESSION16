#include <stdio.h>
void sort(int *arr,int length){
    for(int i=0;i<length;i++){
        for(int j = 0;j<length-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
        }
    }
}
int main(int argc, const char * argv[]) {
    int arr[]={5,7,2,4,9,1};
    int length =sizeof(arr)/sizeof(int);
    sort(arr, length);
    for(int j = 0;j<length;j++){
        printf("%d",arr[j]);
    }
    return 0;
}
