#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int link3()
{
    pid_t result;
    int ret;
    result=fork();
    int newret;
    if(result<0)
        {
            perror("创建子进程失败");
            exit(1);
        }
        else if(result==0)
            {
                raise(SIGSTOP);
                exit(0);
            }
        else
            {
                printf("子进程的进程号（PID）是:%d\n",result);
                if((waitpid(result,NULL,WNOHANG))==0)
                {
                    if(ret=kill(result,SIGKILL)==0)
                    printf("用kill函数返回值是：%d，发出的SIGKILL信号结束的进程进程号：%d\n",ret,result);
                    else
                    {
                        perror("kill函数结束子进程失败");
                    }
                }
            }
}