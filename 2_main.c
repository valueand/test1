//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

int main() {
    int matrix[3][3];
    // 读取3×3矩阵
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // 输出转置矩阵（控制行尾无多余空格，匹配示例格式）
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                printf("%d", matrix[j][i]); // 第一个元素无前置空格
            } else {
                printf(" %d", matrix[j][i]); // 后续元素前加空格
            }
        }
        printf("\n"); // 每行结束换行
    }
    return 0;
}
