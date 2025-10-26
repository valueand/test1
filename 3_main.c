//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>

int main() {
    int n, i = 2;
    int is_prime = 1;  // 假设是质数
    
    // 接收输入
    scanf("%d", &n);
    
    // 判断是否为质数（用while循环）
    if (n <= 1) {
        is_prime = 0;  // 1及以下不是质数
    } else {
        // while循环检查从2到n-1是否有因子
        while (i < n) {
            if (n % i == 0) {
                is_prime = 0;
                break;  // 找到因子，跳出循环
            }
            i++;
        }
    }
    
    // 输出结果
    if (is_prime) {
        printf("密钥安全，密码设置成功\n");
    } else {
        printf("密钥不安全，请重新输入\n");
    }
    
    return 0;
}
