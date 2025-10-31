//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

int main()
{
    int n;
    int is_prime = 1;

    printf("请输入一个小于50的正整数作为密钥:");
    if (scanf("%d", &n) != 1) return 0;

    if (n <= 0 || n >= 50) {
        printf("密钥不安全，请重新输入\n");
        return 0;
    }

    if (n == 1) is_prime = 0;
    else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("密钥安全，密码设置成功\n");
    } else {
        printf("密钥不安全，请重新输入\n");
    }

    return 0;
}
