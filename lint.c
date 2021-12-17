#include <stdio.h>
#include <stdlib.h>

#define BUFF_SIZE 1024

int main (int argc, char *argv[]) {
  for (int i = 1; i < argc; ++i) { // Start at 1 to avoid executable

    char contents[BUFF_SIZE];
    FILE *file = fopen(argv[i], "r");

    while(fgets(contents, BUFF_SIZE, file) != NULL) {
      printf("%s", contents);
    }
    printf("\n");
    fclose(file);
  }
  return 0;
}