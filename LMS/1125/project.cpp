#include<stdio.h>
#include <string.h>
char value;
char putvalue;

void put()
{	char name[3][10];
    char tname[10];
    int i,j;
    int scores[3][3];
    int tscores;
	printf("\n������ ä��� �����Դϴ�.\n");
    for(i=0;i<3;i++){// ��ǰ�� �� ���� �Է�

        printf("\n��ǰ�� : ");

        scanf("%s",name[i]);

        

        printf("���� �Է� : ��) 1000\n");
        printf("--> ");
        scanf("%d", &scores[i][0],&scores[i][1],&scores[i][2]);

    }
    for(i=0;i<3;i++)//��ǰ������ �����ϱ�
    {
        for(j=i;j<3;j++)
        {
            if(strcmp(name[i],name[j]) > 0 )
            {
                strcpy(tname,name[j]);
                strcpy(name[j],name[i]);
                strcpy(name[i],tname);
                tscores=scores[j][0];
                scores[j][0]=scores[i][0];
                scores[i][0]=tscores;
                tscores=scores[j][1];
                scores[j][1]=scores[i][1];
                scores[i][1]=tscores;
                tscores=scores[j][2];
                scores[j][2]=scores[i][2];
                scores[i][2]=tscores;
            }
        }
    }
    printf("\n----------â�� ä�� ���-----------\n");
    printf("-------------------------------------\n");
    for(i=0;i<3;i++)
    {
        printf("%s %d\n", name[i],scores[i][0]);
    }
    printf("-------------------------------------\n");
    printf("-------------------------------------\n");
    printf("â�� �� á���ϴ� ������ �����Ͻ÷��� B�� �Է��ϼ���!\n");
	getchar();
	scanf("%c",&putvalue);
	if(putvalue=='B')
	{

	} 
    
}


void buy(char name[3][10], char scores[3][3])
{
	printf("\n������ �����ϴ� �����Դϴ�."); 
}


int main()
{
	printf("***�Ҹ����ϸ�Ʈ�� ���Ű��� ȯ���մϴ�.***\n\n");
	printf("â�� ����ֽ��ϴ�! ������ ä��÷��� F�� �����ּ���\n");
	printf("�Է� : -> ");
	scanf("%c",&value);
	if(value=='F')
	{
		put();
	}
	 
}
