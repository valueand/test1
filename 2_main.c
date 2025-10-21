//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

int main() {
    
    int score;
    // 输入成绩
    scanf("%d", &score);
    // 从高分到低分判断等级
    if (score >= 90 && score <= 100) {
        printf("A\n");
    } else if (score >= 80 && score <= 89) {
        printf("B\n");
    } else if (score >= 70 && score <= 79) {
        printf("C\n");
    } else if (score >= 60 && score <= 69) {
        printf("D\n");
    } else if (score >= 0 && score < 60) {
        printf("E\n");
    }
    return 0;
}
