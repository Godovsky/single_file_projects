#include <stdio.h>
#include <inttypes.h>
#include <unistd.h>

int main (int argc, char * argv[])
{
  uint8_t arr[3] = {0,0,5};
  while (1)
  {
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < sizeof(char)*8; j++)
      {
        printf ("%s", (arr[i] & (128>>j) ? "1" : "0"));
      }
      printf (" ");
    }
    printf ("\n");

    uint8_t tmp = (arr[0] & 128) >> 7;
    for (int i = 1; i < 3; i++)
    {
      arr[i-1] <<= 1;
      arr[i-1] |= (arr[i] & 128) >> 7;
    }
    arr[2] <<= 1;
    arr[2] |= tmp;

    usleep (500000);
  }

  return 0;
}
