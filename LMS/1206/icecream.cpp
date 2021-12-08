#include <stdio.h>
int value = 0;
char icecream [100001] ={};


int icecream_menu(){
	printf("\n***아이스크림 메뉴판***\n");
	printf("\n     1 : 죠스바\n");
	printf("     2 : 수박바\n");
	printf("     3 : 옥동자\n");
	printf("     4 : 매가톤\n");
	printf("     5 : 와일드바디\n");
	printf("     6 : 스크류바\n");
	printf("     7 : 보석바\n");
	printf("     8 : 돼지바\n");
	printf("     9 : 메로나\n");
	printf("    10 : 녹차바루\n");
	printf("    11 : 체리마루\n");
	printf("    12 : 쌍쌍바\n");
}




















int main(){
	printf(" ┏━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
  printf(" │ 소마 아이스크림 할인마트│  \n");
  printf("┌┗━━━━━━━━━━━━━━━━━━━━━━━━━┛─────────────────────────────┐\n");
  printf("│                                                        │\n");
  printf("│                                                        │\n");
  printf("│┌──┐                                                    │\n");
  printf("││ 1│   아이스크림 메뉴                                  │\n");
  printf("│└──┘                                                    │\n");
  printf("│┌──┐                                                    │\n");
  printf("││ 2│   할인혜택                                         │\n");
  printf("│└──┘                                                    │\n");
  printf("│┌──┐                                                    │\n");
  printf("││ 3│   결제하기                                         │\n");
  printf("│└──┘                                                    │\n");
  printf("│┌──┐                                                    │\n");
  printf("││ 4│   창고정리                                         │\n");
  printf("│└──┘                                                    │\n");
  printf("│┌──┐                                                    │\n");
  printf("││ 5│   영수증 출력                                      │\n");
  printf("│└──┘                                                    │\n");
  printf("│┌──┐                                                    │\n");
  printf("││ 6│   나가기                                           │\n");
  printf("│└──┘                                                    │\n");
  printf("│                                                        │\n");
  printf("│                                                        │\n");
  printf("└────────────────────────────────────────────────────────┘\n");
  printf("\n선택하세요 -> ");
  scanf("%c",&value); 
  if(value=='1'){
  	icecream_menu();
  }
}
