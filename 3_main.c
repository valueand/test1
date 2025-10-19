//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>


int main() 
{
    int a, b;
    char op;  // 用于存储运算符

    // 输入两个整数和运算符（格式如：3 5 +）
    scanf("%d %d %c", &a, &b, &op);

    // 根据运算符进行计算
    if (op == '+') 
    {
        printf("%d\n", a + b);
    } 
    else if (op == '-') 
    {
        printf("%d\n", a - b);
    }
    else if (op == '*') 
    {
        printf("%d\n", a * b);
    } 
    else if (op == '/') 
    {
        
          if (b != 0) 
          {
                  printf("%d\n", a / b);  
          }
       
    }
    return 0;
}
