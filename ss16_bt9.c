//Khai báo và gán giá trị cho mảng bất kỳ, xây dựng hàm thêm mới phần tử có 3 tham số gồm 1 mảng, giá trị mới và vị trí cần thêm. Gọi hàm với mảng đã khai báo và in mảng mới để kiểm tra kết quả.
#include <stdio.h>
void addItem(int *arr,int addNumber, int addIndex, int length){
    for(int i = length -1;i>addIndex;i--){
        arr[i]=arr[i-1];
    }
    arr[addIndex]=addNumber;
}
int main(int argc, const char * argv[]) {
    int a[8]={1,2,3,4,5,6,7};
    int length = sizeof(a)/sizeof(int);
    addItem(a, 8, 3, length);
    for(int i = 0;i<length;i++){
        printf("%d\n",a[i]);
    }
    
}
