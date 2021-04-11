#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct Node {
	int data;
	struct Node* next;
}Node;

typedef struct Queue {
	Node* front;
	Node* rear;
	int dataNum;
}Queue;

void initQueue(Queue* q);
bool Empty(Queue* q);
void Push(Queue* q, int data);
int Pop(Queue* q);
void front(Queue* q);
void back(Queue* q);
void size(Queue* q);

int main() {
	Queue q;
	int loop;
	char order[6];
	initQueue(&q);
	scanf("%d", &loop);
	for (int i = 0; i < loop; i++) {
		scanf("%s", order);
		if (!strcmp(order, "pop")) {
			printf("%d\n",Pop(&q));
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
		else {
			int data;
			scanf("%d", &data);
			Push(&q, data);
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

void Push(Queue* q, int data) {
	Node* curr = (Node*)malloc(sizeof(Node));
	curr->data = data;
	curr->next = NULL;

	if (Empty(q)) {
		q->front = curr;
	}
	else {
		q->rear->next = curr;//연결고리
	}
	q->rear = curr;
	q->dataNum++;
}

int Pop(Queue* q) {
	int result = -1;
	Node* waste = (Node*)malloc(sizeof(Node));
	if (Empty(q)) {
		return result;
	}
	waste = q->front;
	result = waste->data;
	q->front = waste->next;
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
