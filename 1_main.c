//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

#include <stdio.h>

int main() {
    int matrix[3][3];
    
    // 读取3×3矩阵（输入可为"1 2 3\n4 5 6\n7 8 9"形式）
    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d", &matrix[i][0], &matrix[i][1], &matrix[i][2]);
    }
    
    // 输出格式：每行元素用空格分隔，行与行之间用\n分隔，整体为一个连续字符串
    // 第1行后加\n，第2行后加\n，第3行结尾加（匹配多余换行）
    printf("%d %d %d\n%d %d %d\n%d %d %d", 
           matrix[0][0], matrix[0][1], matrix[0][2],
           matrix[1][0], matrix[1][1], matrix[1][2],
           matrix[2][0], matrix[2][1], matrix[2][2]);
    
    return 0;
}
