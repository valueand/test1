//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

int main() {
    int matrix[3][3];
    
    // 读取3×3矩阵：自动忽略输入中的空格和\n，按顺序读取9个整数
    // 适配输入格式 "1 2 3\n4 5 6\n7 8 9"
    scanf("%d %d %d %d %d %d %d %d %d",
          &matrix[0][0], &matrix[0][1], &matrix[0][2],
          &matrix[1][0], &matrix[1][1], &matrix[1][2],
          &matrix[2][0], &matrix[2][1], &matrix[2][2]);
    
    // 原样输出：严格按 "元素1 元素2 元素3\n元素4...\n元素7..." 格式
    // 输出结果与输入字符串完全一致，包含\n作为行分隔符
    printf("%d %d %d\n%d %d %d\n%d %d %d",
           matrix[0][0], matrix[0][1], matrix[0][2],
           matrix[1][0], matrix[1][1], matrix[1][2],
           matrix[2][0], matrix[2][1], matrix[2][2]);
    
    return 0;
}
