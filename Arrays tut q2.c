#include <stdio.h>
#include <stdlib.h>

void counter(int nums[], int numsize, int freq[], int freqsize);
void histogram(int freq[], int size);

int main() {
    int i, n; 
    int freq[10];
    printf("Choose how many numbers to compute: ");
    scanf("%d", &n);
    int ar1[n];
    for (i = 0; i < n; i++){
    ar1[i] = (rand() % 100)/10;}
    counter(ar1, n, freq, 10);
    histogram(freq, 10);
    return 0;
}
void counter(int nums[], int numsize, int freq[], int freqsize){
    int j, k; 
    for (j = 0; j<10; j++){
        int b = 0;
        for (k=0;k<numsize;k++){
        if (nums[k] == j)
           b++;
        freq[j] = b;}
}
}

void histogram(int freq[], int size){
    int a, c;
    for (a=0;a<10;a++){
        printf("%d-%d|", a*10, (a+1)*10-1);
        for (c = 0; c<freq[a]; c++){
            printf("*");}
        printf("\n");}
        }
