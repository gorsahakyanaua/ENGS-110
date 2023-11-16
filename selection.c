
#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void selection_sort(int* array, int n)
{
    for (int i = 0; i < n - 1; ++i) {
        int index = i;
        for (int j = i + 1; j < n; ++j) {
            if (array[j] < array[index]) {
                index = j;
            }
        }
        if (index != i) {
            swap(&(array[i]), &(array[index]));
        }
    }
}




int main()
{
        int a[] = {10, 4, 12, 5, 6, 25, 0};
        int s = sizeof(a) / sizeof(a[0]);
	selection_sort(a,s);
        printf("result:\n");
        for (int i = 0; i < s; ++i) {
        	printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}
