#include "path_resolver.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("%s\n", get_absolute_path("./path_resolver.h"));
  return 0;
}
