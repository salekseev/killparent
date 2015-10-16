#include <stdio.h>
#include <unistd.h>

int main()
{
  kill (getppid(), 9);
}
