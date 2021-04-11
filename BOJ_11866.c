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

int main() {
	Queue q;
	int N,K,index=0;
	int answer[1000];
	initQueue(&q);
	scanf("%d %d", &N, &K);
	for (int i = 1; i <= N; i++) {
		Push(&q, i);
	}
	while (!Empty(&q)) {
		for (int i = 0; i < K - 1; i++) {
			Push(&q, Pop(&q));//뽑은 데이터 다시 Push
		}
		answer[index] = Pop(&q);
		index++;
	}
	printf("<");
	for (int i = 0; i < N-1; i++) {
		printf("%d, ", answer[i]);
	}
	printf("%d>\n", answer[N-1]);
	
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
