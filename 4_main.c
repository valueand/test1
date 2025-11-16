//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

// 自定义函数：通过指针使长度为5的数组每个元素自增1
// 参数：指向数组首元素的指针
void incrementArray(int *arr) {
    // 利用指针遍历数组（长度固定为5）
    for (int i = 0; i < 5; i++) {
        *(arr + i) += 1;  // 指针访问元素并自增
    }
}

int main() {
    int arr[5];  // 定义长度为5的数组
    
    // 输入数组元素
    for (int i = 0; i < 5; i++) {
        scanf("%d", arr + i);  // 指针形式接收输入
    }
    
    // 调用函数实现元素自增
    incrementArray(arr);  // 传递数组首地址
    
    // 打印自增后的结果
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));  // 指针形式打印元素
    }
    printf("\n");
    
    return 0;
}
