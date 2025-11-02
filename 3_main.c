//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

int main() {
    int arr[10];
    int i, j, temp;

    // 输入10个数
    printf("请输入10个整数：\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // 冒泡排序（从小到大）
    // 外层循环控制排序轮数，共需要n-1轮（n为元素个数）
    for (i = 0; i < 9; i++) {
        // 内层循环控制每轮比较次数，每轮减少一次比较（已排好的元素无需再比较）
        for (j = 0; j < 9 - i; j++) {
            // 如果前一个数大于后一个数，则交换它们
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // 输出排序结果
    printf("排序后的结果为：\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
