//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

int main() 
{
    int a, b, c;  // 存储三条线段的长度

    // 通过scanf获取输入的三个整数
    scanf("%d %d %d", &a, &b, &c);

    // 判断条件：任意两边之和大于第三边（使用&&连接三个条件）
    if (a + b > c && a + c > b && b + c > a) {
        printf("可以组成三角形\n");
    } else {
        printf("不能组成三角形\n");
    }

    return 0;
}
