#include <stdio.h>

int modulo(int a,int b){
    while(a>0) {
        if (a >= b)
            a = a - b;
        else return a;
    }
    return a;
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",modulo(a,b));
    return 0;
}
