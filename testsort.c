#include"sort.h"

int main()
{
    int a[N], i;
    srand(time(0));
    for(i=0; i<N; i++)
	a[i] = rand() % 100;
	printf("初始数据为: ");

	for(i=0; i<N; i++)
	    printf("%d ",a[i]);
	printf("\n");
	bubble1(a, N);
	//bubble2(a, N);
	//bubble2(a, N);
	printf("排序后数据: ");
	for(i=0; i<N; i++)
	    printf("%d ", a[i]);
	    printf("\n");
	return 0;
}

/*int main()
{
    int a[N], i;
    srand(time(0));
    for (i=0; i<N; i++)
	a[i] = rand() % 100;
    printf("初始数据为: ");
    for (i=0; i<N; i++)
	printf("%d ", a[i]);
    printf("\n");
    InsertSort(a, N);
    //selectSort(a, N);
    printf("2排序后数据: ");
    for (i=0; i<N; i++)
	printf("%d ", a[i]);
	printf("\n");
    return 0;
}

int main()
{
    int a[N];
    int i;
    srand(time(0));
    for(i=0; i<N; i++)
	a[i] = rand() % 100;
    printf("初始数据为: ");
    for(i=0; i<N; i++)
	printf("%d ", a[i]);
    printf("\n");
    QuickSort(a, N);
    //MergeSort(a, N);
    printf("3排序后数据: ");
    for(i=0; i<N; i++)	
	printf("%d ", a[i]);
	printf("\n");
    return 0;
}
*/
