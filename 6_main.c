//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

// 计算数组元素之和
int getSum(int *arr, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}

// 计算数组元素之积
int getProduct(int *arr, int length) {
    int product = 1;
    for (int i = 0; i < length; i++) {
        product *= arr[i];
    }
    return product;
}

int main() {
    int arr[5];
    // 读取用户输入的5个整数
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 调用函数计算和与积（传入数组首地址和长度5）
    int sum = getSum(arr, 5);
    int product = getProduct(arr, 5);
    
    // 输出结果
    printf("%d %d\n", sum, product);
    return 0;
}
