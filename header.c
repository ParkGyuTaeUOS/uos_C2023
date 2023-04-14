//파라미터의 사용 여부에 따라 함수 이름을 1,2로 구분하였습니다. 
// 사용했다면 1을, 사용하지 않았다면 2를 붙였습니다. 예를 들어,
//lcm1 : 파라미터를 사용하여 최소공배수를 구하는 함수.
//gcd2 : 파라미터를 사용하지 않고 최대공약수를 구하는 함수.
//primeDis(criminate)1 : 파라미터를 사용하여 소수인지 판별하는 함수.

#include <stdio.h>

int lcm1(int num1, int num2) {
    int maxNum = (num1 > num2) ? num1 : num2;
    while (1) {
        if (maxNum % num1 == 0 && maxNum % num2 == 0) {
            printf("두 수의 최소공배수는 %d입니다.", maxNum);
            return maxNum;
        }
        ++maxNum;
    }
}

int lcm2() {
    int num1, num2, maxNum, lcm;

    printf("첫 번째 수를 입력하세요: ");
    scanf_s("%d", &num1);
    printf("두 번째 수를 입력하세요: ");
    scanf_s("%d", &num2);

    maxNum = (num1 > num2) ? num1 : num2;

    while (1) {
        if (maxNum % num1 == 0 && maxNum % num2 == 0) {
            lcm = maxNum;
            break;
        }
        ++maxNum;
    }

    printf("두 수의 최소공배수는 %d입니다.", lcm);
    return lcm;
}

int gcd1(int num1, int num2) {
    int result = 1;
    for (int i = 2; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            result = i;
        }
    }
    printf("두 수의 최대공약수는 %d입니다.", result);
    return result;
}

int gcd2() {
    int num1, num2, result = 1;

    printf("첫 번째 수를 입력하세요: ");
    scanf_s("%d", &num1);
    printf("두 번째 수를 입력하세요: ");
    scanf_s("%d", &num2);

    for (int i = 2; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            result = i;
        }
    }

    printf("두 수의 최대공약수는 %d입니다.", result);
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
    printf("숫자를 입력하세요: ");
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
