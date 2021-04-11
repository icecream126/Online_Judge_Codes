#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
}Node;

typedef struct Queue {
	Node* front;
	Node* rear;
	int dataNum;
}Queue;

void initQueue(Queue* q);
bool Empty(Queue* q);
void Push_front(Queue* q, int data);
void Push_rear(Queue* q, int data);
int Pop_front(Queue* q);
int Pop_rear(Queue* q);
void front(Queue* q);
void back(Queue* q);
void size(Queue* q);

int main() {
	Queue q;
	int loop;
	char order[11];
	initQueue(&q);
	scanf("%d", &loop);
	for (int i = 0; i < loop; i++) {
		scanf("%s", order);
		if (!strcmp(order, "pop_front")) {
			printf("%d\n", Pop_front(&q));
		}
		else if (!strcmp(order, "pop_back")) {
			printf("%d\n", Pop_rear(&q));
		}
		else if (!strcmp(order, "size")) {
			size(&q);
		}
		else if (!strcmp(order, "empty")) {
			if (Empty(&q))
				printf("1\n");
			else
				printf("0\n");
		}
		else if (!strcmp(order, "front")) {
			front(&q);
		}
		else if (!strcmp(order, "back")) {
			back(&q);
		}
		else if(!strcmp(order,"push_back")){
			int data;
			scanf("%d", &data);
			Push_rear(&q, data);
		}
		else {
			int data;
			scanf("%d", &data);
			Push_front(&q, data);
		}
	}
	return 0;
}

void initQueue(Queue* q) {
	q->front = NULL;
	q->rear = NULL;
	q->dataNum = 0;
}

bool Empty(Queue* q) {
	if (q->dataNum == 0) {
		return true;
	}
	else {
		return false;
	}
}

void Push_front(Queue* q, int data) {
	Node* curr = (Node*)malloc(sizeof(Node));
	if (Empty(q)) {
		q->front = curr;
		q->rear = curr;
		curr->data = data;
		curr->next = NULL;
		curr->prev = NULL;
		q->dataNum++;
		return;
	}
	q->front->prev = curr;//연결고리
	curr->next = q->front;
	q->front = curr;
	curr->data = data;
	curr->prev = NULL;
	q->dataNum++;
}


void Push_rear(Queue* q, int data) {
	Node* curr = (Node*)malloc(sizeof(Node));
	if (Empty(q)) {
		q->front = curr;
		q->rear = curr;
		curr->data = data;
		curr->next = NULL;
		curr->prev = NULL;
		q->dataNum++;
		return;
	}
	curr->data = data;
	q->rear->next = curr;//연결고리
	curr->prev = q->rear;
	q->rear = curr;
	curr->next = NULL;
	q->dataNum++;
}

int Pop_front(Queue* q) {
	int result = -1;
	Node* waste = (Node*)malloc(sizeof(Node));
	if (Empty(q)) {
		return result;
	}

	result = q->front->data;
	if(q->front->next!=NULL)//데이터가 1개만 있는 경우
		q->front->next->prev = NULL;
	waste = q->front;
	q->front = q->front->next;
	free(waste);
	q->dataNum--;
	return result;
}

int Pop_rear(Queue* q) {
	int result = -1;
	Node* waste = (Node*)malloc(sizeof(Node));
	if (Empty(q)) {
		return result;
	}
	result = q->rear->data;
	if(q->rear->prev!=NULL)//데이터가 1개만 있는 경우
		q->rear->prev->next = NULL;
	waste = q->rear;
	q->rear = q->rear->prev;
	free(waste);
	q->dataNum--;
	return result;
}

void front(Queue* q) {
	if (Empty(q)) {
		printf("-1\n");
	}
	else
		printf("%d\n", q->front->data);
}

void back(Queue* q) {
	if (Empty(q)) {
		printf("-1\n");
	}
	else
		printf("%d\n", q->rear->data);
}

void size(Queue* q) {
	printf("%d\n", q->dataNum);
}
