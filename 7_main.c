//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

// 冒泡排序函数：使用指针操作实现从小到大排序
void bubbleSort(int *arr, int len) {
    // 外层循环控制排序轮次（共len-1轮）
    for (int i = 0; i < len - 1; i++) {
        // 内层循环控制每轮比较次数（每轮减少一次比较）
        for (int j = 0; j < len - 1 - i; j++) {
            // 通过指针访问相邻元素并比较
            if (*(arr + j) > *(arr + j + 1)) {
                // 交换相邻元素（通过指针操作）
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int nums[10];
    int len = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < len; i++) {
        scanf("%d", nums + i); // 指针方式接收输入
    }

    // 调用冒泡排序函数（传递数组首地址和长度）
    bubbleSort(nums, len);

    // 打印排序结果
    for (int i = 0; i < len; i++) {
        printf("%d ", *(nums + i)); // 指针方式访问元素
    }

    return 0;
}
