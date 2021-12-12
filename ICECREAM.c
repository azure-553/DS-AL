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
//listNode *searchNode(linkedList_h *L, char *x);
linkedList_h* insertFirstNode(linkedList_h *L, char *x, int price);
void insertMiddleNode( linkedList_h *L, listNode *pre, char *x, int price);
void insertLastNode( linkedList_h *L, char *x, int price);
void sort(linkedList_h *L);
int getsize(linkedList_h* L) {
	listNode *p = L->head;
	int count = 0;
	while(p) {
		count++;
		p = p->link;
	}
	return count;
}

void printPart(linkedList_h *L, int index, int j) {
	listNode *p = L->head;
	int cnt = 0;
	while(cnt != index && p->link != NULL) {
		p = p->link;
		cnt ++;
	}
	printf("%s %d * %d개\n", p->data, p->price, j);
}

void printBasket(int list[], linkedList_h *L) {
	int max = getsize(L);
	int i;
	for(i=0; i<max; i++) {
		if(list[i] != 0) {
			printPart(L, i, list[i]);
		}
	}
}

int main() {
	linkedList_h *L;
	listNode *O;
	L = createLinkedList_h();
	L = insertFirstNode(L, "Chocolate", 3000);
	L = insertFirstNode(L, "Jamoca_coffee", 2500);
	insertLastNode(L, "Strawberry", 3000);
	insertLastNode(L, "Rocky_Road", 3500);
	insertLastNode(L, "Vanilla", 3000);
	insertLastNode(L, "Chocolate_chip_cookie_dough", 1200);
	insertLastNode(L, "Mint_chip", 7500);
	insertLastNode(L, "Chcolate_chip", 1200);
	insertLastNode(L, "Praliness'n_cream", 3600);
	insertLastNode(L, "Rainbow_sherbet", 3200);
	insertLastNode(L, "Gold_medal_ribbon", 1000);
	insertLastNode(L, "Cotten_candy", 1000);
	insertLastNode(L, "Blaclc_currant", 3500);
	insertLastNode(L, "Tiramisa", 3000);
	insertLastNode(L, "Litchi_gold", 2500);
	insertLastNode(L, "Mississippi_Mud", 7000);
	insertLastNode(L, "Alphonso'N'cream", 1500);
	insertLastNode(L, "Papaya pineapple", 3000);
	insertLastNode(L, "Butterscrotch_ribbon", 1000);
	insertLastNode(L, "Puss_in_boots", 2500);
	sort(L);

	int wallet = 500000;
	int check;
	int arr[1000] = {0};
	while(1) {
		printf("\n");
		printf("1. 고르기\n2. 재산확인하기\n3.장바구니_확인\n4.구매완료하기\n");
		scanf("%d", &check);
		if(check==1) {
			system("cls");
			int o;
			printList(L);
			scanf("%d", &o);
			arr[o] += 1;
			system("cls");
		}
		if(check==2) {
			system("cls");
			printf("재산 : %d원", wallet);
		}
		if (check==3) {
			system("cls");
			printBasket(arr, L);
		}
		if (check==4) {
			system("cls");
			printf("making");
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
	printf("\n이름 가격\n"); 
	while(p) {
		printf("%d. %s %d \n", cnt++, p->data, p->price);
		p= p->link;
	}
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
	strcpy(temp, n1->data);
	strcpy(n1->data, n2->data);
	strcpy(n2->data, temp);
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
