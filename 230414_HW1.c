#include <stdio.h>

void convert(int num, int base);

int main() {
    int num, base;

    printf("변환할 10진수 입력 : ");
    scanf_s("%d", &num);

    printf("변환할 진법 입력(2-16) : ");
    scanf_s("%d", &base);

    printf("%d의 %d진수 변환 값 : \n", num, base);
    convert(num, base);
    printf(" ");

    return 0;
}

void convert(int num, int base) {
    int k;
    if (num == 0) {
        return;
    }
    convert(num / base, base); 
    k = num % base;
    if (k < 10) { 
        printf("%d", k);
    }
    else { 
        printf("%c", 'A' + k - 10);
    }
}

