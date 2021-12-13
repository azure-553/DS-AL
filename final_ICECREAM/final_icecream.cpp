#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int cnt;

typedef struct listNode {
   char data[100];
   int price;
   struct listNode *link;
}listNode;

typedef struct {
   listNode *head;
}linkedList_h;

typedef struct basket {
   listNode *data;
   struct basket *link;
}basket;

linkedList_h* createLinkedList_h();
void printList(linkedList_h *L);
void freeLinkedList_h(linkedList_h* L);
listNode *searchNode(linkedList_h *L, char *x);
linkedList_h* insertFirstNode(linkedList_h *L, char *x, int price);
void insertMiddleNode( linkedList_h *L, listNode *pre, char *x, int price);
void insertLastNode( linkedList_h *L, char *x, int price);
void sort(linkedList_h *L);
void sortPrice(linkedList_h *L);
int getsize(linkedList_h* L) {
   listNode *p = L->head;
   int count = 0;
   while(p) {
      count++;
      p = p->link;
   }
   return count;
}

listNode* find(linkedList_h * L, int index) {
   listNode *p = L->head;
   int cnt = 0;
   while(cnt != index && p->link != NULL) {
      p = p->link;
      cnt ++;
   }
   return p;
}

void printBasket(int list[], linkedList_h *L) {
   listNode *p = L->head;
   int max = getsize(L);
   int i;
   for(i=0; i<max; i++) {
      if(list[i] != 0) {
         p = find(L, i);
         printf("****************************************************************************************************************************************************************************************************\n");
         printf("                                                                            %s %d * %d개 \n", p->data, p->price, list[i]);
         printf("****************************************************************************************************************************************************************************************************\n");
      }
   }
}

void Buying(int list[], linkedList_h *L, int *wallet) {
   listNode *p = L->head;
   int temp;
   int tempWallet = 0;
   int max = getsize(L);
   int i;
   for(i=0; i<max; i++) {
      if(list[i]>0) {
         p = find(L, i);
         temp = p->price;
         printf("**********************************************\n");
         printf("%s %d개 %d원\n", p->data, list[i], temp*list[i]); 
         tempWallet += temp*list[i];
      }
   }
   printf("\nTotal : %d원\n\n", tempWallet);
   if(*wallet < tempWallet) {
      printf("%d원의 ", tempWallet-*wallet);
      printf("자금이 부족하여 구매 할 수 없습니다!\n");
       printf("**********************************************\n");
   } 
   else {
      *wallet -= tempWallet;
      printf("Change : %d원\n\n", *wallet);
      printf("장바구니에 추가한 상품이 모두 구입되었습니다!\n");
      printf("\n^__^ 감사합니다 다음에도 이용해주세요! ^__^\n") ;
      printf("\n--- 계속구매하시려면 메뉴로 돌아가주세요. ---\n") ;
       printf("**********************************************\n");
}
}
int main() {
   linkedList_h *L;
   listNode *O;
   L = createLinkedList_h();
   L = insertFirstNode(L, "Chocolate :",3000);
   insertLastNode(L, "Jamoca_coffee :",2500);
   insertLastNode(L, "Strawberry :",3000);
   insertLastNode(L, "Rocky_Road :",3500);
   insertLastNode(L, "Vanilla :",3000);
   insertLastNode(L, "Chocolate_chip_cookie_dough :",1200);
   insertLastNode(L, "Mint_chip :",7500);
   insertLastNode(L, "Chcolate_chip :",1200);
   insertLastNode(L, "Praliness'n_cream :",3600);
   insertLastNode(L, "Rainbow_sherbet :",3200);
   insertLastNode(L, "Gold_medal_ribbon :",1000);
   insertLastNode(L, "Cotten_candy :",1000);
   insertLastNode(L, "Blaclc_currant :",3500);
   insertLastNode(L, "Tiramisa :",3000);
   insertLastNode(L, "Litchi_gold :",2500);
   insertLastNode(L, "Mississippi_Mud :",7000);
   insertLastNode(L, "Alphonso'N'cream :",1500);
   insertLastNode(L, "Papaya pineapple :",3000);
   insertLastNode(L, "Butterscrotch_ribbon :",1000);
   insertLastNode(L, "Puss_in_boots :",2500);
   sort(L);

   int wallet;
   printf("****************************************************************************************************************************************************************************************************\n");
   printf("*********************************************************************** 소마고 아이스크림 할인매장에 오신것을 환영합니다! **************************************************************************\n");
   printf("****************************************************************************************************************************************************************************************************\n");
   printf("\n                                                                           현금을 넣어주세요! (예 : 10000) : ");
   scanf("%d", &wallet);
   printf("\n                                                                                   %d원이 들어갔습니다.\n",wallet);
   printf("\n");
   printf("****************************************************************************************************************************************************************************************************\n");
   int check;
   int arr[1000] = {0};
   while(1) {
   	printf("\n");     
    printf("                                                                   ┏━━━━━━━━━┓\n");
  printf("                                                                   │  메뉴판 │  \n");
  printf("                                                                  ┌┗━━━━━━━━━┛─────────────────────────────────────────────┐\n");
  printf("                                                                  │                                                        │\n");
  printf("                                                                  │                                                        │\n");
  printf("                                                                  │┌──┐                                                    │\n");
  printf("                                                                  ││ 1│   아이스크림 선택하기                              │\n");
  printf("                                                                  │└──┘                                                    │\n");
  printf("                                                                  │┌──┐                                                    │\n");
  printf("                                                                  ││ 2│   잔액 확인하기                                    │\n");
  printf("                                                                  │└──┘                                                    │\n");
  printf("                                                                  │┌──┐                                                    │\n");
  printf("                                                                  ││ 3│   장바구니 확인                                    │\n");
  printf("                                                                  │└──┘                                                    │\n");
  printf("                                                                  │┌──┐                                                    │\n");
  printf("                                                                  ││ 4│   구매하기                                         │\n");
  printf("                                                                  │└──┘                                                    │\n");
  printf("                                                                  │┌──┐                                                    │\n");
  printf("                                                                  ││ 5│   장바구니 비우기                                  │\n");
  printf("                                                                  │└──┘                                                    │\n");
  printf("                                                                  │                                                        │\n");
  printf("                                                                  │                                                        │\n");
  printf("                                                                  └────────────────────────────────────────────────────────┘\n");
  printf("                                                                   선택하세요 -> ");
      scanf("%d", &check);
      if(check==1) {
         system("cls");
         int o;
         printList(L);
         scanf("%d", &o);
         if(o == 20 || o==21) {
            if(o==20) {
               sort(L);
            } else if(o==21) {
            	printf("\n*****************************************\n");
            	printf("        가격순으로 정렬되었습니다.\n");
            	printf("          메뉴로 돌아 갑니다!\n");
            	printf("*****************************************\n");
               sortPrice(L);
            }
            continue;
         } else {
            arr[o] += 1;
         }
         system("cls");
      }
      if(check==2) {
         system("cls");
         printf("****************************************************************************************************************************************************************************************************\n");
         printf("                                                                                          잔액 : %d원\n", wallet);
         printf("****************************************************************************************************************************************************************************************************\n");
      }
      if (check==3) {
         system("cls");
         printBasket(arr, L);
      }
      if (check==4) {
         system("cls");
         Buying(arr, L, &wallet);
      } if (check ==5) {
         system("cls");
         for(int i=0; i<getsize(L); i++) {
            arr[i]=0;
         }
      }
   }
   
   freeLinkedList_h(L);
   return 0;
}

linkedList_h* createLinkedList_h() {
   linkedList_h *L;
   L = (linkedList_h*)malloc(sizeof(linkedList_h));
   L->head = NULL;
   return L;
}

void printList(linkedList_h *L) {
   cnt=0;
   listNode *p = L->head;
   printf("\n***************이름 : 가격***************\n"); 
   printf("*****************************************\n");
   while(p) {
      printf("%d. %s %d \n", cnt++, p->data, p->price);
      p= p->link;
   }
   printf("-----------------------------------------\n");
   printf("         20. 이름 순으로 정렬\n");
   printf("         21. 가격 순으로 정렬\n");
   printf("-----------------------------------------\n");
   printf("*****************************************\n");
   printf("\n선택하세요 -> ");
}

void freeLinkedList_h(linkedList_h* L) {
   listNode *p;
   while(L->head) {
      p=L->head;
      L->head = p->link;
      free(p);
   }
}

linkedList_h* insertFirstNode(linkedList_h *L, char* x, int price) {
   listNode *p;
   p = (listNode*)malloc(sizeof(listNode));
   strcpy(p->data, x);
   p->price = price;
   p->link = L->head;
   L->head = p;
   return L;
}

void insertMiddleNode( linkedList_h *L, listNode *pre, char *x, int price) {
   if(L) {
      listNode *p;
      p = (listNode*)malloc(sizeof(listNode));
      strcpy(p->data, x);
      p->price = price;
      p->link = pre->link;
      pre->link = p;
   }
}


void insertLastNode( linkedList_h *L, char *x, int price) {
   listNode *p = L->head;
   while(p) {
      if(p->link == NULL) break;
      p = p->link;
   }
   listNode *n;
   n = (listNode*)malloc(sizeof(listNode));
   strcpy(n->data, x);
   n->price = price;
   n->link = p->link;
   p->link = n;
}

void swap(listNode *n1, listNode *n2) {
   char temp[100];
   int tempi;
   strcpy(temp, n1->data);
   strcpy(n1->data, n2->data);
   strcpy(n2->data, temp);
   tempi = n1->price;
   n1->price = n2->price;
   n2->price = tempi;
}

void sort(linkedList_h *L) {
   int i;
   listNode *p = L->head;
   listNode *buf;
   int cnt = 0;
   int size = getsize(L);
   while(p) {
      buf = L->head;
      for(i=1; i<size-cnt; i++) {
         if(buf->data[0] > buf->link->data[0]) {
            swap(buf, buf->link);
         }
         buf = buf->link;
      }
      p = p->link;
      cnt++;
   }
}

void sortPrice(linkedList_h *L) {
   int i;
   listNode *p = L->head;
   listNode *buf;
   int cnt = 0;
   int size = getsize(L);
   while(p) {
      buf = L->head;
      for(i=1; i<size-cnt; i++) {
         if(buf->price > buf->link->price) {
            swap(buf, buf->link);
         }
         buf = buf->link;
      }
      p = p->link;
      cnt++;
   }
}
