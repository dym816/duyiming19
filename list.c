#include"list.h"

void InitList(SqList *l) {
	l->data = (dataType*)malloc(INIT_SIZE * sizeof(dataType));
	l->size = 0;
	l->maxSize = INIT_SIZE;
} 

void Insert(SqList *l, int k, dataType x) {
	if (k<1 || k>l->size+1) exit(1);
	if (l->size == l->maxSize) exit(1);
	for (int i=l->size; i>=k; i--)
	l->data[i] = l->data[i-1];
	l->data[k-1] = x;
	l->size++;
} 

void Delete(SqList *l, int k) {
	if (k<1 || k>l->size) exit(1);
	for (int i=k; i<l->size; i++)
	l->data[i-1] = l->data[i];
	l->size--;
} 

int Empty(SqList *l) {
	return l->size == 0;
} 

int Full(SqList *l) {
	return l->size == l->maxSize;
} 

dataType GetData(SqList *l, int i) {
	if (i<1 || i>l->size) exit(1);
	return l->data[i-1];
} 

int locate(SqList *l, dataType x) {
	for (int i=0; i<l->size; i++)
	if (l->data[i] == x)
	return i + 1;
	return 0;
} 

void Print(SqList *l) {
	for (int i=0; i<l->size; i++)
	printf("%d ", l->data[i]);
	printf("\n");
} 
