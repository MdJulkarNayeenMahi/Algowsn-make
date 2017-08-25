
#include <stdio.h>

/* global variable declaration */
int receivepacket = 3000;
int receivesensor = 3000;

int main () {

  /* local variable declaration in main function */
  int receivepacket = 2200;
  int getpacket = 800;
  int getsensor = 0;

  printf ("Data delivered as receivepacket = %d\n",  receivepacket);
  getsensor = sum( receivepacket, getpacket);
  printf ("Data delivered as getsensor = %d\n",  getsensor);
  printf ("Estimation data of receivesensor = %d\n", receivesensor);
  receivesensor = sum(receivepacket);
  return 0;
}

/* function to add two integers */
int sum(int receivepacket, int getpacket) {

   printf ("Data of receivepacket in total = %d\n",  receivepacket);
   printf ("Data of getpacket in  total = %d\n",  getpacket);
   printf ("Total data get for receivesensor = %d\n", receivesensor);
   return receivepacket + getpacket;
}
