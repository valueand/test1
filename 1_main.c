//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>
int main()
{
    int n, is_prime = 1;
    // 接收用户输入
    scanf("%d", &n);
    
    // 判断是否为质数（小于2直接非质数）
    if (n < 2) 
    {
        is_prime = 0;
    } 
    else
    {
        // 遍历2到n-1，判断是否能整除
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0) 
            {
                is_prime = 0;
                break;
            }
        }
    }
    
    // 输出结果
    if (is_prime) 
    {
        printf("密钥安全，密码设置成功\n");
    }
    else 
    {
        printf("密钥不安全，请重新输入\n");
    }
    
    return 0;
}
