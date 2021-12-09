#include <stdio.h>
char value;
char menuvalue;
int malatang_gram;
int malatang_spicy; 



int malatang(){
	printf("\n***마라탕을 선택하셨습니다***\n");
	printf("\n먹으실 마라탕의 그램을 입력하세요 (예 -> 1000) : -> ");
	scanf("%d",&malatang_gram);
	malatang_gram = malatang_gram/100;
	printf("\n---맵기를 선택하세요---\n");
	printf("0단계 : 남녀노소 누구나 즐길 수 있는 담백한 맛\n");
	printf("1단계 : 평범한 분들이 즐길 수 있는 약간 매운 맛\n");
	printf("2단계 : 매운 것 좀 드셔본 분들이 즐기는 중간 매운 맛\n");
	printf("3단계 : 마니아를 위한 매운 맛\n");
	printf("4단계 : 드시다 매워서 욕^^ 나오는 엄청 매운 맛\n");
	printf("\n먹으실 마라탕의 맵기를 선택하세요 : -> ");
	scanf("%d",&malatang_spicy);
	printf("\n---마라탕의 재료를 선택하세요---\n");
	printf("1 : 청경채 (10g)\n");
	printf("2 : 중국당면 (10g)\n");
	printf("3 : 옥수수면 (10g)\n");
	printf("4 : 배추 (10g)\n");
	printf("5 : 푸주 (10g)\n");
	printf("6 : 숙주 (10g)\n");
	printf("7 : 햄/소세지 (10g)\n");
	printf("8 : 소고기 (10g)\n");
	return malatang_gram;
	
}


int malasanggwo(){
	printf("\n***마라상궈를 선택하셨습니다***\n");
}

int kkwobalou_small(){
	printf("\n***꿔바로우(소)를 선택하셨습니다***\n");
}

int kkwobalou_big(){
	printf("\n***꿔바로우를(대) 선택하셨습니다***\n");
}




int menu(){
	int a;
	printf(" ┏━━━━━━━━━┓\n");
  printf(" │  메뉴판 │  \n");
  printf("┌┗━━━━━━━━━┛─────────────────────────────────────────────┐\n");
  printf("│                                                        │\n");
  printf("│                                                        │\n");
  printf("│┌──┐                                                    │\n");
  printf("││ 1│   마라상궈(100g) 3000원                            │\n");
  printf("│└──┘                                                    │\n");
  printf("│┌──┐                                                    │\n");
  printf("││ 2│   마라탕(100g) 2000원                              │\n");
  printf("│└──┘                                                    │\n");
  printf("│┌──┐                                                    │\n");
  printf("││ 3│   꿔바로우(소) 10000원                             │\n");
  printf("│└──┘                                                    │\n");
  printf("│┌──┐                                                    │\n");
  printf("││ 4│   꿔바로우(대) 16000 원                            │\n");
  printf("│└──┘                                                    │\n");
  printf("│┌──┐                                                    │\n");
  printf("││ 5│   나가기                                           │\n");
  printf("│└──┘                                                    │\n");
  printf("│                                                        │\n");
  printf("│                                                        │\n");
  printf("└────────────────────────────────────────────────────────┘\n");
  printf("선택하세요 -> ");
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
printf(" ┏━━━━━━━━━┓\n");
  printf(" │ 소마라탕│  \n");
  printf("┌┗━━━━━━━━━┛─────────────────────────────────────────────┐\n");
  printf("│                                                        │\n");
  printf("│                                                        │\n");
  printf("│┌──┐                                                    │\n");
  printf("││ 1│   메뉴출력                                         │\n");
  printf("│└──┘                                                    │\n");
  printf("│┌──┐                                                    │\n");
  printf("││ 2│   사이드메뉴 구매                                  │\n");
  printf("│└──┘                                                    │\n");
  printf("│┌──┐                                                    │\n");
  printf("││ 3│   입금하기                                         │\n");
  printf("│└──┘                                                    │\n");
  printf("│┌──┐                                                    │\n");
  printf("││ 4│   나만의 마라탕                                    │\n");
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
  printf("선택하세요 : -> ");
  scanf("%c",&value); 
  if(value=='1'){
  	a = menu();
  }
  printf("%d", a);
  
	
}
