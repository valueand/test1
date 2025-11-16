//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>
#include <stdlib.h>

int main() {
    // 动态申请存储5个整数的内存空间
    int *p = (int *)malloc(5 * sizeof(int));
    
    // 判断内存申请是否成功
    if (p == NULL) {
        printf("内存申请失败，无法继续执行\n");
        return 1; // 申请失败则退出程序
    }
    for (int i = 0; i < 5; i++) {
        // 通过指针接收键盘输入（等价于 &p[i]）
        scanf("%d", p + i);
    }
    for (int i = 0; i < 5; i++) {
        // 通过指针访问元素（等价于 p[i]）
        printf("%d ", *(p + i));
    }
    printf("\n");
    
    // 释放动态申请的内存
    free(p);
    p = NULL; // 避免野指针
    
    return 0;
}
