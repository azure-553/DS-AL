#include<stdio.h>
#include <string.h>
char value;


void put()
{
	printf("\n������ ä��� �����Դϴ�.\n");
	char name[3][10];
    char tname[10];
    int i,j;
    int scores[3][3];
    int tscores;
    for(i=0;i<3;i++){// �̸� �� ���� �Է�

        printf("��ǰ�� : ");

        scanf("%s",name[i]);

        

        printf("���� �Է� : ��) 1000\n");

        scanf("%d", &scores[i][0],&scores[i][1],&scores[i][2]);

    }
    for(i=0;i<3;i++)//�̸������� �����ϱ�
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
}
void buy()
{
	printf("\n������ �����ϴ� �����Դϴ�."); 
}


int main()
{
	printf("***�Ҹ����ϸ�Ʈ�� ���Ű��� ȯ���մϴ�.***\n\n");
	printf("������ ä��÷��� F�� �����ּ���\n");
	printf("��ǰ�� �����Ͻ÷��� B�� �����ּ���\n\n");
	printf("�Է� : -> ");
	scanf("%c",&value);
	if(value=='F')
	{
		put();
	}
	else if(value=='B')
	{
		buy();
	}
	 
}
