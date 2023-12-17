#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/time.h>

int input[];

void getArgs(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        char *ac = argv[i];
        int n = atoi(ac);
        input[i - 1] = n;
    }
}

// use for command line arguments
int main(int argc, char *argv[])
{
    struct timeval main_stop, main_start;
    struct timeval stop, start;
    gettimeofday(&main_start, NULL);


    gettimeofday(&start, NULL);
    system("./zad1 49 123 > /dev/null");
    gettimeofday(&stop, NULL);
    printf("Zad1 ended in: %ld milis\n", (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec);

    gettimeofday(&start, NULL);
    system("./zad2 14 20 > /dev/null");
    gettimeofday(&stop, NULL);
    printf("Zad2 ended in: %ld milis\n", (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec);

    gettimeofday(&start, NULL);
    system("./zad3 27 > /dev/null");
    gettimeofday(&stop, NULL);
    printf("Zad3 ended in: %ld milis\n", (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec);

    gettimeofday(&start, NULL);
    system("./zad4 > /dev/null");
    gettimeofday(&stop, NULL);
    printf("Zad4 ended in: %ld milis\n", (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec);


// TODO: zad5
/*  gettimeofday(&start, NULL);
    system("./zad5");
    gettimeofday(&stop, NULL);
    printf("Zad5 ended in: %ld milis\n", (stop.tv_sec - start.tv_sec) * 1000000 + stop.tv_usec - start.tv_usec);
*/
    gettimeofday(&main_stop, NULL);    
    printf("Main script (Zad6) ended in: %ld milis\n", (main_stop.tv_sec - main_start.tv_sec) * 1000000 + main_stop.tv_usec - main_start.tv_usec);

}