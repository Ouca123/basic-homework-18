#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10000
int main(void)
{
	char *str=(char*)malloc(sizeof(char)*MAX);
    int x,len,num[128]={0};
    printf("�п�J�@�r��");
    scanf("%s",str);

    len=strlen(str);

    for(x=0;x<len;x++)
	{
    	num[(int)str[x]]++;
	}
    for(x=0;x<128;x++)
	{

    	if(num[x]!=0)
		{

    	  printf("�r��%c�X�{%d��\n",(char)x,num[x]);

		}

	}
    return 0;
   

}
