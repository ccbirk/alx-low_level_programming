#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int num1, num2, result;

  // Check if the number of arguments is correct.
  if (argc != 3) {
    printf("Error\n");
    exit(98);
  }

  // Check if the two arguments are composed of digits only.
  int i;
  for (i = 0; argv[1][i] != '\0'; i++) {
    if (!isdigit(argv[1][i])) {
      printf("Error\n");
      exit(98);
    }
  }

  for (i = 0; argv[2][i] != '\0'; i++) {
    if (!isdigit(argv[2][i])) {
      printf("Error\n");
      exit(98);
    }
  }

  // Convert the two arguments to integers.
  num1 = atoi(argv[1]);
  num2 = atoi(argv[2]);

  // Multiply the two integers and store the result in a variable.
  result = (long)num1 * num2;

  // Check if the result is greater than the maximum value of an integer.
  // If it is, print an error message and exit.
  if (result > INT_MAX) {
    printf("Error\n");
    exit(98);
  }

  // Print the result.
  printf("%d\n", result);

  return 0;
}
