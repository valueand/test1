//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

// 计算a的b次幂的函数
double power(int a, int b) {
    double result = 1.0;
    // 处理b为0的情况（任何数的0次幂为1）
    if (b == 0) {
        return 1;
    }
    // 计算正整数次幂
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int main() {
    int sum = 0;
    // 计算1² + 2² + 3² + 4² + 5²
    for (int i = 1; i <= 5; i++) {
        sum += power(i, 2);  // 调用幂函数计算平方
    }
    printf("1² + 2² + 3² + 4² + 5² = %d\n", sum);
    return 0;
}
