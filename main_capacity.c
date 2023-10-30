#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

struct array
{
   int* data;
   unsigned int size;
   unsigned int capacity;
};

void array_init(struct array* a)
{
    a->capacity = 8;
    a->data = (int*)malloc(sizeof(int) * (a->capacity + 1));
    a->size = 0;
}

unsigned int array_size(const struct array* a)
{
    return a->size;
}

void array_push_back(struct array* a, int value)
{
    if (a->size < a->capacity) {
        a->data[a->size] = value;
        a->size = a->size + 1;
    } else {
        assert(a->size == a->capacity);
        int* tmp = malloc(sizeof(int) * 2 * a->capacity);
        if (a->size > 0) {
            for (int i = 0; i < a->size; ++i) {
                tmp[i] = a->data[i];
            }
            free(a->data);
        }
        a->data = tmp;
        a->data[a->size] = value;
        a->size = a->size + 1;
        a->capacity = 2 * a->capacity;
    }
}

void array_pop_back(struct array* a)
{
    assert(array_size(a) > 0);
    a->size = a->size - 1;
}

int array_back(const struct array* a)
{
    assert(array_size(a) > 0);
    return a->data[a->size - 1];
}

void array_insert(struct array* a, unsigned int pos, int value)
{
    assert(pos <= array_size(a));
    if (a->size == a->capacity) {
        a->capacity = 2 * a->capacity;
        int* tmp = malloc(sizeof(int) * a->capacity);
        for (int i = 0; i < a->size; ++i) {
            tmp[i] = a->data[i];
        }
        free(a->data);
        a->data = tmp;
    }

    for (int i = a->size; i > pos; --i) {
        a->data[i] = a->data[i - 1]; 
    }

    a->data[pos] = value;    
    a->size = a->size + 1; 
}

void array_remove(struct array* a, unsigned int pos)
{
    assert(pos < array_size(a)); 

    for (int i = pos; i < a->size - 1; ++i) {
        a->data[i] = a->data[i + 1]; 
    }

    a->size = a->size - 1; 
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
    for (int i = 0; i < 10; ++i) {
        array_push_back(&a, i);
    }
   array_print(&a);

    array_insert(&a, 3, 10);
    array_print(&a);
    array_remove(&a, 5);  
    array_print(&a);

    return 0;

}
