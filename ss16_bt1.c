#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a=100;
    int *aptr=&a;
    printf("giá trị của a là : %d\n",a);
    printf("địa chỉ của a là : %lu\n",&a);
    printf("giá trị của a là : %lu\n",*aptr);
    printf("địa chỉ của a là : %lu\n",aptr);
    return 0;
}
