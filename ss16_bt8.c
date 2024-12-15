
#include <stdio.h>
#include <string.h>
void reverse(char *a,int length){
    for(int i=0;i<length/2;i++){
        char temp = a[i];
        a[i]=a[length-1-i];
        a[length-1-i]=temp;
    }
}
int main(int argc, const char * argv[]) {
    char inputString[]="hello world";
    long long length = strlen(inputString);
    char reverseString[length+1];
    strcpy(reverseString, inputString);
    reverse(reverseString, length);
    printf("%s %s",inputString,reverseString);
    return 0;
}
