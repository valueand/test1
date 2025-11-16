//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

int main() {
    int a;         // 定义整数变量a
    int *p = &a;   // 定义指针p，指向a

    // 输入a的初始值
    scanf("%d", &a);

    // 通过指针修改a的值（这里示例改为初始值加10，也可改为其他逻辑）
    *p = *p + 10;  // 等价于 a = a + 10

    // 打印结果
    printf("%d,%d", a,*p);

    return 0;
}
