//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>
int main() 
{
    int arr[5];  // 定义包含5个整数的数组
    int *p = arr;  // 指针指向数组首元素
    int n = 5;  // 数组元素个数

    // 从键盘输入数组元素
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);  // 通过指针接收输入（等价于 &arr[i]）
    }
    // 通过指针将所有元素乘以2
    for (int i = 0; i < n; i++)
    {
        *(p + i) *= 2;  // 通过指针修改元素
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    return 0;
}
