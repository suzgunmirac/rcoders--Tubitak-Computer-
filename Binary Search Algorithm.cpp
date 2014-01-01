//Binary Search Algorithm

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 100

void binary (int a[], int search, int size);

int main (void)
{
    int searchkey;
    int data [SIZE];

    srand (time(NULL));

    int i;

    for (i=0; i<SIZE; i++){
        data[i] = i;
    }

    scanf ("%d", &searchkey);

    binary (data, searchkey, SIZE);
}

void binary (int a[], int search, int size)
{
    int low, high, medium, temp;

    low = 0;
    high = size;


    while (low+1 < high){
        medium = (low+high)/2;

        if (a[medium] <= search){
            low = medium;
        }

        if (a[medium] > search){
            high = medium;
        }

    }

    if (a[low] == search){
        printf ("Your number %d is found in the %d element.", search, low);
    }
}

