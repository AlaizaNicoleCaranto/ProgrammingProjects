#include <stdio.h>

int main() {
    char arr[] = {'2', '0', '2', '4', '0', '0', '2', '4', '4'};  // Student number digits
    int size = sizeof(arr) / sizeof(arr[0]); // Get array size
    char transform[size];

  for (int i = 0; i < size; ++i)
  {
      transform[i] = arr[i] + 16;
  }
  printf("Original: ");
  for(int i = 0; i < size; ++i)
  {
      printf("%c", arr[i]);
  }

  printf("\nModified: ");
  for(int i = 0; i < size; ++i)
  {
      printf("%c", transform[i]);
  }
  printf("\n");
    return 0;
}
