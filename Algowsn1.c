#include<stdio.h>
#include<conio.h>
void quickSort( int sensor[], int l, int r)
{
   int j;

   if( l < r )
   {
   	// divide and conquer
        j = partition( sensor, l, r);
       quickSort( sensor, l, j-1);
       quickSort( sensor, j+1, r);
   }

}



int partition( int sensor[], int l, int r) {
   int pivot, i, j, m;
   pivot = sensor[l];
   i = l; j = r+1;

   while( 1)
   {
   	do ++i; while( sensor[i] <= pivot && i <= r );
   	do --j; while( sensor[j] > pivot );
   	if( i >= j ) break;
   	m = sensor[i]; sensor[i] = sensor[j]; sensor[j] = m;
   }
   m = sensor[l]; sensor[l] = sensor[j]; sensor[j] = m;
   return j;
}

int pwm(unsigned t, unsigned  dc)
{
  static unsigned acc=0;
  int retval=0;
  acc+=dc;
  // set output to carry
  if (acc>=256) retval=1;
  // simulate byte operation here
  acc=acc&0xFF;
  return retval;

}


int main(int argc, char *argv[])
{
  unsigned t;
  unsigned dc=8;

  int sensor[] = { 7, 9, 10, 1, 3, 2, 5, 4, 6, 8};

  int i;
	printf("\n\n Unsorted sensor is:  ");
	for(i = 0; i < 10; ++i)
		printf(" %d ", sensor[i]);

	quickSort( sensor, 0, 9);

	printf("\n\n Sorted sensor is:  ");
	for(i = 0; i < 10; ++i)
		printf(" %d ", sensor[i]);

  if (argc==1)
    {
      fprintf(stderr,"PWM duty cycle\n"
        "Next time, specify duty cycle (0-255)\n"
              "\n This time, using 8\n \n");
    }
  else
    dc=(unsigned)atoi(argv[1]);
  dc&=0xFF;  // force to byte
  for (t=0;t<512;t++)
    {
      printf("%c",pwm(t,dc)?'-':'t');
    }
  putchar('\n');
  return 0;
}

