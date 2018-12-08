#include <stdio.h>
#include <string.h>
void main()
{
	int i;
	char user[40]={0};
    char password[40]={0};
	for (i=1;i<=3;i++)
	{
		printf("please input your username:");
		scanf("%s",user);
        printf("please input your password:");
		scanf("%s",password);
		if(strcmp(user,"admin"))
		{
		    if(strcmp(password,"123456"))
		    {
			    continue;
		    }
		}
        break;
	}
	if (i<=3)
	{
		printf("login successfully!!!\n");

	}
	else
		printf("ingin failure!\n");
}
