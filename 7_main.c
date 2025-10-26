//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

int main() {
    int arr[5];
    int i;

    // 输入当前记录的前4位学号
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    // 数组元素整体后移一位（原第4位→第5位）
    arr[4] = arr[3];  // 第4位移到第5位
    arr[3] = arr[2];  // 第3位移到第4位
    arr[2] = arr[1];  // 第2位移到第3位
    arr[1] = arr[0];  // 第1位移到第2位

    // 首位补0
    arr[0] = 0;

    // 输出更新后的数组，最后一位无空格
    for (i = 0; i < 5; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }

    return 0;
}
