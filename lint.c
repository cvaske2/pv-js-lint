#include <stdio.h>
#include <stdlib.h>

// This funciton was taken from a code snippet on codegrepper and then expanded upon to include error handling.
// Unfortunately, I have lost the original link so I am unable to credit the original author.
char *read_file_contents(char const *path) {
  char *contents;
  int file_size;
  FILE *file = fopen(path, "r");
  if (!file) {
    printf("%s%s%s\n", "The file '", path, "' could not be found.");
    return "";
  }
  fseek(file, 0L, SEEK_END); // Find the end of the file
  file_size = ftell(file);
  rewind(file); // Sets pointer to beginning of file

  contents = malloc(file_size + 1);
  fread(contents, 1, file_size, file); // Read contents of entire file to the end (file_size) of the file.
  contents[file_size] = '\0';
  fclose(file);

  return contents;
}

int main (int argc, char *argv[]) {
  if (argc == 1) {
    printf("Please supply one or more paths to files for linting.\n");
    return -1;
  }
  for (int i = 1; i < argc; ++i) { // Start at 1 to avoid executable
    printf("%s\n", read_file_contents(argv[i]));
  }
  return 0;
}