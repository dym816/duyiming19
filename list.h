#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#define INIT_SIZE 100
typedef int dataType;
typedef struct {
	dataType *data;
	int size;
	int maxSize;
} SqList;

void InitList(SqList *l);
void Insert(SqList *l, int k, dataType x);
void Delete(SqList *l, int k);
int Empty(SqList *l);
int Full(SqList *l);
dataType GetData(SqList *l, int i);
int locate(SqList *l, dataType x);
void Print(SqList *l);
