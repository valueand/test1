//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

int main() {
    int matrix[3][3];
    int transposed[3][3];
    int i, j;

    // 输入3x3矩阵
    printf("请输入3x3矩阵（每行3个数字，用空格分隔）：\n");
    for (i = 0; i < 3; i++) {
        printf("第%d行：", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 计算转置矩阵：原矩阵的[i][j]对应转置矩阵的[j][i]
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            transposed[i][j] = matrix[j][i];
        }
    }

    // 输出转置矩阵
    printf("\n转置后的矩阵为：\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n"); // 每行结束后换行
    }

    return 0;
}
