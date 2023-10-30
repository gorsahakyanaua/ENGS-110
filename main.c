
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

struct array
{
   int* data;
   unsigned int size;
};

void array_init(struct array* a)
{
    a->data = 0;
    a->size = 0;
}

unsigned int array_size(const struct array* a)
{
    return a->size;
}

void array_push_back(struct array* a, int value)
{
    unsigned int s = a->size;
    int* tmp = malloc(sizeof(int) * (s + 1));
    if (s > 0) {
        for (int i = 0; i < s; ++i) {
            tmp[i] = a->data[i];
        }
        free(a->data);
    }
    a->data = tmp;
    a->data[s] = value;
    a->size = a->size + 1;
}

void array_pop_back(struct array* a)
{
    assert(array_size(a) > 0);
    unsigned int s = a->size;
    int* tmp = malloc(sizeof(int) * (s - 1));
    if (s - 1 > 0) {
        for (int i = 0; i < s - 1; ++i) {
            tmp[i] = a->data[i];
        }
        free(a->data);
    }
    a->data = tmp;
    a->size = a->size - 1;

}

int array_back(const struct array* a)
{
    return a->data[a->size - 1];
}

void array_print(const struct array* a)
{
    printf("array elements:\n");
    for (int i = 0; i < a->size; ++i) {
        printf("array[%d] = %d\n", i, a->data[i]);
    }
}

int main()
{
    struct array a;
    array_init(&a);
    assert(0 == array_size(&a));
    array_push_back(&a, 5);
    assert(1 == array_size(&a));
    array_print(&a);
    assert(5 == array_back(&a));
    array_push_back(&a, 6);
    assert(2 == array_size(&a));
    assert(6 == array_back(&a));
    array_print(&a);
    array_pop_back(&a);
    assert(1 == array_size(&a));
    assert(5 == array_back(&a));
    array_pop_back(&a);
    assert(0 == array_size(&a));
    for (int i = 0; i < 1000000; ++i) {
        array_push_back(&a, i);
    }
    return 0;
}
