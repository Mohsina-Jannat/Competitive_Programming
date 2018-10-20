#include<iostream>
#include<cstdlib>
#include<pthread.h>

using namespace std;


void *PrintHello(void *threadid)
{
    int cnt=10000;
    while(1)
    {
        long tid;
        tid=(long) threadid;
    }
    pthread_exit(NULL);
}

int main()
{
    const int NUM_THREADS=1000;
    pthread_t threads(NUM_THREADS);
    int rc;
    int i;

    for(i=0;i<NUM_THREADS;i++)
    {
        rc=pthread_create(&threads[i],NULL,PrintHello,(void*)i);

        if(rc) {
            cout<< "Error:unable to create thread"<< rc<<endl;
            exit(-1);
        }
    }
    pthread_exit(NULL);
}
