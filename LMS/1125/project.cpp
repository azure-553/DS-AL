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
	printf("\n물건을 채우는 공간입니다.\n");
    for(i=0;i<3;i++){// 상품명 및 가격 입력

        printf("\n상품명 : ");

        scanf("%s",name[i]);

        

        printf("가격 입력 : 예) 1000\n");
        printf("--> ");
        scanf("%d", &scores[i][0],&scores[i][1],&scores[i][2]);

    }
    for(i=0;i<3;i++)//상품명으로 정렬하기
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
    printf("\n----------창고에 채운 목록-----------\n");
    printf("-------------------------------------\n");
    for(i=0;i<3;i++)
    {
        printf("%s %d\n", name[i],scores[i][0]);
    }
    printf("-------------------------------------\n");
    printf("-------------------------------------\n");
    printf("창고가 꽉 찼습니다 물건을 구매하시려면 B를 입력하세요!\n");
	getchar();
	scanf("%c",&putvalue);
	if(putvalue=='B')
	{

	} 
    
}


void buy(char name[3][10], char scores[3][3])
{
	printf("\n물건을 구매하는 공간입니다."); 
}


int main()
{
	printf("***소마할일마트에 오신것을 환영합니다.***\n\n");
	printf("창고가 비어있습니다! 물건을 채우시려면 F를 눌러주세요\n");
	printf("입력 : -> ");
	scanf("%c",&value);
	if(value=='F')
	{
		put();
	}
	 
}
