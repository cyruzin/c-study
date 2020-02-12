#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

/*
    Use the flag -pthread to compile.

    gcc -pthread -o thread thread.c && ./thread
*/

void *exampleThread(void *vargp)
{
    sleep(1);
    printf("Hello from the thread! \n");
    return NULL;
}

int main()
{
    pthread_t threadID;

    printf("Before Thread\n");
    pthread_create(&threadID, NULL, exampleThread, NULL);
    pthread_join(threadID, NULL);
    printf("After Thread\n");

    exit(0);
}
