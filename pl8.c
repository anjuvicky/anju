#include<stdio.h>

int findDup( int* data, int N, int* timeCounter )
{
    *timeCounter = 0;
    bool done=false;
    int i=0;
    while( i<N && !done ){
       
                break;
            }else{ // swap the data[i] and data[data[i]-1]
                int temp = data[data[i]-1];
                data[data[i]-1] = data[i];
                data[i] = temp;
                ++(*timeCounter);
            }
        }
    }
