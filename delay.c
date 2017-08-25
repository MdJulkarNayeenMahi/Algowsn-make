#include <stdio.h>
#include <time.h>

void delay(int milliseconds);

int main()
{
    int frames;

    printf("Loop with 200 millisecond delay:");
    for(frames=0;frames<3000;frames++)
    {
        printf("%d\n",frames+1);
        delay(200);
    }
    putchar('\n');

    return(0);
}

void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}
