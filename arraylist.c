#include <stdio.h>
#include <stdlib.h>

// function prototypes
arraylist* create();
void* grow(arraylist* list);
void add(arraylist* list, void* value);
int delete(arraylist* list, int index);
int contains(arraylist* list, int value);
int get(arraylist* list, int index);
int size(arraylist* list);

// initial capacity
#define INITIAL_CAPACITY 5

// structs
typedef struct {
    void** buffer;
    unsigned int capacity;
    unsigned int length;
} arraylist;

// functions

/**
 * @brief 
 * Creates a new arraylist.
 * @return arraylist* 
 */
arraylist* create() {
    arraylist* new_list = malloc(sizeof(arraylist));
    new_list->length = 0;
    new_list->capacity = INITIAL_CAPACITY;
    new_list->buffer = malloc(sizeof(void*) * INITIAL_CAPACITY);
    
    return new_list;
}
