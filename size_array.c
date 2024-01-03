#include <stdio.h>
int main(){
    int ar[5];
    //0(4byte)  1(4byte) 2(4byte)   3(4byte)    4(4byte)
    //4*5==20byte
    printf("%d\n",sizeof(ar));
    printf("%d\n",sizeof(int));
    printf("%d",sizeof(ar)/sizeof(int));
    return 0;
}