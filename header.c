//�Ķ������ ��� ���ο� ���� �Լ� �̸��� 1,2�� �����Ͽ����ϴ�. 
// ����ߴٸ� 1��, ������� �ʾҴٸ� 2�� �ٿ����ϴ�. ���� ���,
//lcm1 : �Ķ���͸� ����Ͽ� �ּҰ������ ���ϴ� �Լ�.
//gcd2 : �Ķ���͸� ������� �ʰ� �ִ������� ���ϴ� �Լ�.
//primeDis(criminate)1 : �Ķ���͸� ����Ͽ� �Ҽ����� �Ǻ��ϴ� �Լ�.

#include <stdio.h>

int lcm1(int num1, int num2) {
    int maxNum = (num1 > num2) ? num1 : num2;
    while (1) {
        if (maxNum % num1 == 0 && maxNum % num2 == 0) {
            printf("�� ���� �ּҰ������ %d�Դϴ�.", maxNum);
            return maxNum;
        }
        ++maxNum;
    }
}

int lcm2() {
    int num1, num2, maxNum, lcm;

    printf("ù ��° ���� �Է��ϼ���: ");
    scanf_s("%d", &num1);
    printf("�� ��° ���� �Է��ϼ���: ");
    scanf_s("%d", &num2);

    maxNum = (num1 > num2) ? num1 : num2;

    while (1) {
        if (maxNum % num1 == 0 && maxNum % num2 == 0) {
            lcm = maxNum;
            break;
        }
        ++maxNum;
    }

    printf("�� ���� �ּҰ������ %d�Դϴ�.", lcm);
    return lcm;
}

int gcd1(int num1, int num2) {
    int result = 1;
    for (int i = 2; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            result = i;
        }
    }
    printf("�� ���� �ִ������� %d�Դϴ�.", result);
    return result;
}

int gcd2() {
    int num1, num2, result = 1;

    printf("ù ��° ���� �Է��ϼ���: ");
    scanf_s("%d", &num1);
    printf("�� ��° ���� �Է��ϼ���: ");
    scanf_s("%d", &num2);

    for (int i = 2; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            result = i;
        }
    }

    printf("�� ���� �ִ������� %d�Դϴ�.", result);
    return result;
}

int primeDis1(int num) {
    int i;
    if (num <= 1) {
        printf("false", num);
        return 0;
    }
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            printf("false", num);
            return 0;
        }
    }
    printf("true", num);
    return 1;
}

int primeDis2() {
    int num, i, x = 0;
    printf("���ڸ� �Է��ϼ���: ");
    scanf_s("%d", &num);
    if (num <= 1) {
        printf("false\n", num);
        return 0;
    }
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            printf("false\n", num);
            x = 1;
            break;
        }
    }
    if (x == 0) {
        printf("true\n", num);
        return 1;
    }
    else {
        return 0;
    }
}
