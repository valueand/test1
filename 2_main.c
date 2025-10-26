//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

int main()
{
    int num, hundreds, tens, units;
    int count = 0;  // 用于控制空格输出

    // 遍历100到999的所有整数
    for (num = 100; num <= 999; num++) 
    {
        // 拆分百位、十位、个位
        hundreds = num / 100;          // 百位数字
        tens = (num / 10) % 10;        // 十位数字
        units = num % 10;              // 个位数字

        // 判断是否为水仙花数（各位立方和等于自身）
        if (hundreds * hundreds * hundreds + tens * tens * tens + units * units * units == num) 
        {
            
            // 控制输出格式：首个数字前无空格，后续数字前加空格
            if (count > 0) 
            {
                printf(" ");
            }
            printf("%d", num);
            count++;
        }
    }
    printf("\n");  // 输出结束后换行

    return 0;
}
