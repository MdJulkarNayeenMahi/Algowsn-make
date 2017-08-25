#include <stdio.h>

/* global variable declaration */
int sendpacket = 3000;

int main () {

  /* local variable declaration in main function */
  int sendpacket = 1900;
  int getpacket = 1100;
  int sendsensor = 0;

  printf ("Data delivered as sendpacket  = %d\n",  sendpacket);
  sendsensor = sum( sendpacket, getpacket);
  printf ("Data delivered as sendsensor  = %d\n",  sendsensor);

  return 0;
}

/* function to add two integers */
int sum(int sendpacket, int getpacket) {

   printf ("Data of sendpacket in total  = %d\n",  sendpacket);
   printf ("Data of getpacket in total = %d\n",  getpacket);

   return sendpacket + getpacket;
}
