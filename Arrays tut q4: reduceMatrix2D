// Online C compiler to run C program online
#include <stdio.h>
const int size = 4;
void reduceMatrix2D(int ar[4][size], int rowSize, int colSize);

int main() {
    int array[4][4] = {4,3,8,6,9,0,6,5,5,1,2,4,9,8,3,7};
    int i,j;
    reduceMatrix2D(array, 4, 4);
    for (i=0;i<4;i++){
        printf("\n");
        for (j=0;j<4;j++){
            printf("%d\t", array[i][j]);}}
    return 0;
}

void reduceMatrix2D(int ar[4][size], int rowSize, int colSize){
    int i,j;
    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            if (i < j){
                ar[i][i] += ar[j][i];
                ar[j][i] = 0;}}}
}
