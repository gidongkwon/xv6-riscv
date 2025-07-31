#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  printf("%lu\n", getreadcount());
  exit(0);
}
