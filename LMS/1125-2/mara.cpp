#include <stdio.h>
char value;
char menuvalue;
int malatang_gram;
int malatang_spicy; 



int malatang(){
	printf("\n***�������� �����ϼ̽��ϴ�***\n");
	printf("\n������ �������� �׷��� �Է��ϼ��� (�� -> 1000) : -> ");
	scanf("%d",&malatang_gram);
	malatang_gram = malatang_gram/100;
	printf("\n---�ʱ⸦ �����ϼ���---\n");
	printf("0�ܰ� : ������ ������ ��� �� �ִ� ����� ��\n");
	printf("1�ܰ� : ����� �е��� ��� �� �ִ� �ణ �ſ� ��\n");
	printf("2�ܰ� : �ſ� �� �� ��ź� �е��� ���� �߰� �ſ� ��\n");
	printf("3�ܰ� : ���ϾƸ� ���� �ſ� ��\n");
	printf("4�ܰ� : ��ô� �ſ��� ��^^ ������ ��û �ſ� ��\n");
	printf("\n������ �������� �ʱ⸦ �����ϼ��� : -> ");
	scanf("%d",&malatang_spicy);
	return malatang_gram;
}


int malasanggwo(){
	printf("\n***�����Ÿ� �����ϼ̽��ϴ�***\n");
}

int kkwobalou_small(){
	printf("\n***��ٷο�(��)�� �����ϼ̽��ϴ�***\n");
}

int kkwobalou_big(){
	printf("\n***��ٷο츦(��) �����ϼ̽��ϴ�***\n");
}




int menu(){
	int a;
	printf(" ����������������������\n");
  printf(" ��  �޴��� ��  \n");
  printf("��������������������������������������������������������������������������������������������������������������������\n");
  printf("��                                                        ��\n");
  printf("��                                                        ��\n");
  printf("����������                                                    ��\n");
  printf("���� 1��   ������(100g) 3000��                            ��\n");
  printf("����������                                                    ��\n");
  printf("����������                                                    ��\n");
  printf("���� 2��   ������(100g) 2000��                              ��\n");
  printf("����������                                                    ��\n");
  printf("����������                                                    ��\n");
  printf("���� 3��   ��ٷο�(��) 10000��                             ��\n");
  printf("����������                                                    ��\n");
  printf("����������                                                    ��\n");
  printf("���� 4��   ��ٷο�(��) 16000 ��                            ��\n");
  printf("����������                                                    ��\n");
  printf("����������                                                    ��\n");
  printf("���� 5��   ������                                           ��\n");
  printf("����������                                                    ��\n");
  printf("��                                                        ��\n");
  printf("��                                                        ��\n");
  printf("��������������������������������������������������������������������������������������������������������������������\n");
  printf("�����ϼ��� -> ");
  getchar(); 
  scanf("%c",&menuvalue); 
  if(menuvalue=='1'){
  	a = malasanggwo();
  }
  else if(menuvalue=='2'){
  	a = malatang();
  }

  else if(menuvalue=='3'){
  	a = kkwobalou_small();
  }
  else if(menuvalue=='4'){
  	a = kkwobalou_big();
  }
  return a;
   
}









int main(){
	int a;
printf(" ����������������������\n");
  printf(" �� �Ҹ�������  \n");
  printf("��������������������������������������������������������������������������������������������������������������������\n");
  printf("��                                                        ��\n");
  printf("��                                                        ��\n");
  printf("����������                                                    ��\n");
  printf("���� 1��   �޴����                                         ��\n");
  printf("����������                                                    ��\n");
  printf("����������                                                    ��\n");
  printf("���� 2��   ���̵�޴� ����                                  ��\n");
  printf("����������                                                    ��\n");
  printf("����������                                                    ��\n");
  printf("���� 3��   �Ա��ϱ�                                         ��\n");
  printf("����������                                                    ��\n");
  printf("����������                                                    ��\n");
  printf("���� 4��   ������ ������                                    ��\n");
  printf("����������                                                    ��\n");
  printf("����������                                                    ��\n");
  printf("���� 5��   ������ ���                                      ��\n");
  printf("����������                                                    ��\n");
  printf("����������                                                    ��\n");
  printf("���� 6��   ������                                           ��\n");
  printf("����������                                                    ��\n");
  printf("��                                                        ��\n");
  printf("��                                                        ��\n");
  printf("��������������������������������������������������������������������������������������������������������������������\n");
  printf("�����ϼ��� : -> ");
  scanf("%c",&value); 
  if(value=='1'){
  	a = menu();
  }
  printf("%d", a);
  
	
}