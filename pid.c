#include"stdio.h"
#include"unistd.h"
int pid()

{
printf("PID:%d\n",getpid());
printf("PPID:%d\n",getppid());
return 0;
}