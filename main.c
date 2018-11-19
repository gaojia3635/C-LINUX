#include <stdio.h>
#include"unistd.h"
#include"zhs.h"
#include<stdlib.h>
#include<fcntl.h>
#include"sys/types.h"

int main()
{
int i,j,k;
printf("输入第一个数:\n");
scanf("%d",&i);

printf("输入第二个数:\n");
scanf("%d",&j);

k=min(i,j);
printf("输出最小数:%d\n",k);
min();
pid();
link3();
link2();
return 0;
}
