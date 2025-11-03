#include<stdio.h>
#define SIZE 10
#define PRIME 7

//to find the 1st index use this has function
int hash(int key) {
    return key%SIZE;
}

//to find second index use this hash function
int hash2(int key) {
    return PRIME - (key%PRIME);
}

//probe until we get the empty space using 2nd hash function
int probe(int H[], int key) {
    int index = hash(key);
    int index2 = hash2(key);
    int i=0;
    while(H[(index+(i*index2))%SIZE] != 0)
        i++;
    return (index+(i*index2))%SIZE;
}

void Insert(int H[], int key) {

    int index = hash(key);
    if(H[index] != 0)
        index = probe(H, key);
    H[index] = key;
}

int Search(int H[], int key) {

    int index = hash(key);
    int index2 = hash2(key);
    int i=0;
    while(H[(index+(i*index2))%10] != key)
        i++;
    return (index+(i*index2))%SIZE;
}

int main() {
    int HT[10]={0};

    Insert(HT, 5);
    Insert(HT, 25);
    Insert(HT, 15);
    Insert(HT, 35);
    Insert(HT, 95);

    printf("Key found at %d\n", Search(HT,35));
}