#include <stdio.h>

int main(){
    char a, b;
    scanf("%c %c", &a, &b);
    if(a == 'H'){
        printf("%c\n", b);
    }else{
        if(b == 'H'){
            printf("%c\n", a);
        }else{
            a = 'H';
            printf("%c\n", a);
        }
    }
    return 0;
}
