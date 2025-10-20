//202310114112
//751127773@qq.com
//张博阳
#include <stdio.h>
int main()
{
	//三角形判定
	printf("请输入三个整数\n");
	int x,y,z;
	scanf ("%d %d %d",&x,&y,&z);
	if (x+y <= z || x+z <= y || y+z <= x ){
		printf("不能组成三角形\n");
	}
	else{
		printf("可以组成三角形");
	}
	return 0;
	//三角形判定
}
