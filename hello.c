#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
  //printf(1, "hello world\n");

  printf(1, "forking\n");
  if (fork() == 0) {
    printf(1, "hello, I am child (pid:%d)\n", (int) getpid());
  }
  else {
    printf(1, "Wait returned with %d\n", wait(0));
    printf(1, "Hello from parent (pid:%d)\n", (int) getpid());
  }

  //printf(1,"Wait returned with %d\n",wait(0));

  exit(0);
}
