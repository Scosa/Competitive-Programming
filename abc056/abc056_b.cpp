#include <stdio.h>

int main(){
    int a, b, w, answer;
    scanf("%d %d %d", &w, &a, &b);
    if((a < b && b < a + w) || (a < b + w && b < a) || (a == b)){
        printf("0\n");
    }else if(a < b){
        answer = b - a - w;
        printf("%d\n", answer);
    }else{
        answer = a - b - w;
        printf("%d\n", answer);
    }
    return 0;
}
