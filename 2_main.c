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
    // 输出转置矩阵（行列索引互换）
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}
