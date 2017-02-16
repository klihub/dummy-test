#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <pwd.h>
#include <sys/types.h>


int main(int argc, char *argv[])
{
  const char    *base  = strrchr(argv[0], '/');
  const char    *argv0 = base ? base + 1 : argv[0];
  const char    *tag   = argc > 1 ? argv[1] : argv0;
  uid_t          uid   = geteuid();
  struct passwd *pw    = getpwuid(uid);
  int            i     = 0;

  while (1) {
    printf("<%s (%s): user %d/%s> iteration #%d\n",
	   tag, argv0, uid, pw ? pw->pw_name : "unknown", i++);
    fflush(stdout);

    sleep(30);
  }

  return 0;
}
