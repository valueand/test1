//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

// 函数：将数组元素后移一位，溢出丢弃，首位补0
void shiftRight(int *ptr_arr, int len) {
    if (len <= 1) {  // 处理长度为1的特殊情况（虽然本题len=5，但增加健壮性）
        *ptr_arr = 0;
        return;
    }
    // 从倒数第二个元素开始向前遍历，依次后移
    for (int i = len - 2; i >= 0; i--) {
        *(ptr_arr + i + 1) = *(ptr_arr + i);
    }
    *ptr_arr = 0;  // 首位补0
}

int main() {
    int arr[5];  // 定义长度为5的数组
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);  // 从键盘输入数组元素
    }

    shiftRight(arr, 5);  // 调用函数，数组名作为指针传递
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));  // 用指针方式输出
    }
    printf("\n");

    return 0;
}
