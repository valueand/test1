//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

int main() {
    int arr[5];
    int count = 0;  // 记录已存入的偶数个数
    int num;

    // 循环输入，直到存满5个偶数
    while (count < 5) {
        scanf("%d", &num);  // 每次输入一个数（回车分隔）
        if (num % 2 == 0) {  // 判断是否为偶数
            arr[count] = num;
            count++;  // 偶数则存入数组，计数加1
        }
        // 奇数则不存入，继续输入
    }

    // 输出数组，最后一位无空格
    for (int i = 0; i < 5; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }

    return 0;
}
