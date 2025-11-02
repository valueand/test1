//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

// 计算等差数列的和
// a1: 首项, an: 末项, step: 步长
int arithmeticSum(int a1, int an, int step) {
    // 计算项数：(末项 - 首项) / 步长 + 1
    int n = (an - a1) / step + 1;
    // 等差数列求和公式：和 = 项数 * (首项 + 末项) / 2
    return n * (a1 + an) / 2;
}

int main() {
    // 计算从1加到100（首项1，末项100，步长1的等差数列）
    int sum = arithmeticSum(1, 100, 1);
    printf("从1加到100的和为：%d\n", sum);
    return 0;
}
