#include <stdio.h>
#include <stdlib.h>

// structs
typedef struct arraylist {
    void** buffer;
    unsigned int capacity;
    unsigned int length;
} arraylist;

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

/**
 * @brief 
 * Increase the capacity of the arraylist.
 * @param list the arraylist
 * @return void* 
 */
void* grow(arraylist* list) {
    list->capacity += (10 >> 1)
    return realloc(list->buffer, list->capacity);
}

/**
 * @brief 
 * Adds an element to the end of the arraylist.
 * @param list the arraylist
 * @param value the element to be added
 */
void add(arraylist* list, void* value) {
    if(list->length + 1 > list->capacity) {
        grow(arr);
        list->length++;
        list->buffer[list->length] = value;
    } else {
        list->length++;
        list->buffer[list->length] = value;
    }
}

int main(void) {
    arraylist* list = create();
    add(list, 5);
    printf("%d\n", list->&(buffer)[0]);
    return 0;
}