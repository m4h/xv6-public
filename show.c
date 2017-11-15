#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  int i;
  int len = 3;
  char *say[len];
  say[0] = "- show room dummies\n";
  say[1] = "- walking models\n";
  say[2] = "- life is a light\n";

  for (i = 0; i < len; i++) {
    printf(1, say[i]);
  }
  exit();
}
