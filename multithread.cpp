#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;

#define NUM_THREADS 5

void *plus_one(void *i)
{
    int *x;
    x = (int *)i;

    while (*x != 1)
        *x -= 1;

    return NULL;
}

int main()
{
    int x[NUM_THREADS] = {10, 20, 1000, 10, 10};
    pthread_t threads[NUM_THREADS];
    int i;

    // create threads
    for (i = 0; i < NUM_THREADS; i++)
    {
        pthread_create(&threads[i], NULL, &plus_one, (void *)&x[i]);
    }

    // wait until all threads are done (also called sync)
    for (int i = 0; i < NUM_THREADS; i++)
        pthread_join(threads[i], NULL);

    // print out
    for (int j : x)
        std::cout << j << " ";

std:
    cout << endl;
}
