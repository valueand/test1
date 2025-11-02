//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

// 反转数组元素位置的函数
void reverseArray(int *arr, int length) {
    // 循环交换对称位置的元素
    for (int i = 0; i < length / 2; i++) {
        // 交换第i个和第length-1-i个元素
        int temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
}

int main() {
    int arr[5];
    // 读取用户输入的5个整数
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 调用反转函数（传入数组首地址和长度5）
    reverseArray(arr, 5);
    
    // 输出反转后的数组（最后一个元素后无空格）
    for (int i = 0; i < 5; i++) {
        if (i == 4) {
            printf("%d", arr[i]);  // 最后一个元素单独输出，无空格
        } else {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    
    return 0;
}
