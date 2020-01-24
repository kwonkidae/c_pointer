#include <stdio.h>

int main()
{
  int num, *ptr1, *ptr2;

  ptr1 = &num;
  ptr2 = ptr1 + 2;

  printf("%ld\n", ptr2 - ptr1);
  printf("%lu\n", sizeof(int));
  printf("%p\n", ptr1);
  printf("%p\n", ptr2);
  return (0);
}
