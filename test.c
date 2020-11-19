#include "list.c"

int main() {
	SqList list, *pList=&list;
	InitList(pList);
	Insert(pList, 1, 10);
	Insert(pList, 1, 20);
	Delete(pList, 2);
	Insert(pList, 1, 30);
	Insert(pList, 1, 40);
	Print(pList);
	printf("%d",GetData(pList, 2));
} 
