#include <stdio.h>
#include "list.h"

int main() {

  list_t *testList = list_alloc();
  for(int i = 0; i < 5; i++)
  {
    list_add_to_back(testList, i+10);
  }

  printf("Original List:\n");
  list_print(testList);

  printf("\n\nLength of list is %d", list_length(testList));

  printf("\n\nAdding 15 to the back:\n");
  list_add_to_back(testList, 15);
  list_print(testList);

  printf("\n\nLength of list is %d", list_length(testList));

  printf("\n\nAdding 9 to the front:\n");
  list_add_to_front(testList, 9);
  list_print(testList);

  printf("\n\nLength of list is %d", list_length(testList));

  printf("\n\nAdding 200 at index 3:\n");
  list_add_at_index(testList, 200, 3);
  list_print(testList);

  printf("\n\nLength of list is %d", list_length(testList));

  printf("\n\nRemoving element from the back:\n");
  list_remove_from_back(testList);
  list_print(testList);

  printf("\n\nLength of list is %d", list_length(testList));

  printf("\n\nRemoving element from the front:\n");
  list_remove_from_front(testList);
  list_print(testList);
  
  printf("\n\nLength of list is %d", list_length(testList));

  printf("\n\nRemoving element at index 3:\n");
  list_remove_at_index(testList, 3);
  list_print(testList);

  printf("\n\nLength of list is %d", list_length(testList));

  printf("\n\nChecking if 37 is in the list: %s\n", list_is_in(testList, 37) ? "true" : "false");

  printf("\n%d was found at index 2\n", list_get_elem_at(testList, 2));

  printf("\n14 was found at index %d", list_get_index_of(testList, 14));

  return 0;
}