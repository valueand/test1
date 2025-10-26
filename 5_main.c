//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

int main() {
    int arr[5];
    int i;

    // 输入前四位
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    // 计算第五位（前四位之和）
    arr[4] = arr[0] + arr[1] + arr[2] + arr[3];

    // 输出数组，最后一位后无空格
    for (i = 0; i < 5; i++) {
        if (i > 0) {
            printf(" "); // 非首位前加空格
        }
        printf("%d", arr[i]);
    }

    return 0;
}
