#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

// Use enum constants for clarity
typedef enum {
    UP,
    DOWN
} comparison_direction_t;

// Use more descriptive type names
typedef struct list_node_s {
    const int value;
    struct list_node_s *prev;
    struct list_node_s *next;
} list_node_t;

// Function prototypes with clear descriptions
void print_array(const int *array, size_t size);
void print_list(const list_node_t *list);

// Consider using `size_t` instead of `int` for array size
void bubble_sort(int *array, size_t size);
void insertion_sort_list(list_node_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(list_node_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif /* SORT_H */

