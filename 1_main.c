//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

int main() 
{
    float celsius  = 0;  // 已知输入的摄氏温度为30度
    float fahrenheit;    // 用于存储转换后的华氏温度
    scanf("%f",&celsius);
    // 应用转换公式：华氏温度 = 摄氏温度 × 9/5 + 32
    fahrenheit = celsius * 9 / 5 + 32;
    printf("%.1f\n", fahrenheit);
    return 0;
}
