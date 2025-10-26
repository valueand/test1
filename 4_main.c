//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

int main() {
    int num = 100;  // 从100开始遍历
    int hundreds, tens, units;
    int count = 0;  // 控制空格输出

    // while循环遍历100到999
    while (num <= 999) {
        // 拆分百位、十位、个位
        hundreds = num / 100;
        tens = (num / 10) % 10;
        units = num % 10;

        // 判断水仙花数（各位立方和等于自身）
        if (hundreds * hundreds * hundreds + 
            tens * tens * tens + 
            units * units * units == num) {
            
            // 控制空格：首个数字前无空格，后续加空格
            if (count > 0) {
                printf(" ");
            }
            printf("%d", num);
            count++;
        }

        num++;  // 循环变量自增
    }
    printf("\n");  // 结束后换行

    return 0;
}
