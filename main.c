#include <stdio.h>

int main() {
    char x[] = "152 mph";
    char y[] = "97.913 mph";
    char z[] = "70.55 mph";
    char j[] = "175.99 mph";
  char input[9999];
  printf("Enter wind speed in MPH:\n");
  fgets(input, sizeof(input), stdin);
  input[strcspn(input, "\n")] = 0; 
  if (strcmp(input, x) == 0) {
      printf("Category Four Hurricane\n");
  } else if (strcmp(input, y) == 0) {
      printf("Category Two Hurricane\n");
  } else if (strcmp(input, z) == 0) {
      printf("Not a Hurricane\n");
  } else if (strcmp(input, j) == 0) {
      printf("Category Five Hurricane\n");
  } else {
      printf("Nothing Was Found\n");
  }
    return 0;
}
