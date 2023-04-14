#include <stdio.h>

void convert(int num, int base);

int main() {
    int num, base;

    printf("��ȯ�� 10���� �Է� : ");
    scanf_s("%d", &num);

    printf("��ȯ�� ���� �Է�(2-16) : ");
    scanf_s("%d", &base);

    printf("%d�� %d���� ��ȯ �� : \n", num, base);
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

