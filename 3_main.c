//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

// 交换两个整数的函数，参数为指针
void swap(int *a, int *b) {
    int temp;  // 临时变量用于交换
    temp = *a;  // 保存*a的值
    *a = *b;    // 将*b的值赋给*a
    *b = temp;  // 将临时保存的原*a值赋给*b
}

int main() {
    int x, y;
    
    // 输入两个整数
    scanf("%d %d", &x, &y);
    
    // 调用swap函数交换两个数（传递地址）
    swap(&x, &y);
    
    // 打印交换后的结果
    printf("%d %d\n", x, y);
    
    return 0;
}
