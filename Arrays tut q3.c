


#include <stdio.h>
const int size = 4;
void t2d(int ar[4][size], int rowSize, int colSize);

int main() {
    int i,j;
    int ar[4][4] = {1,2,3,4, 5,1,2,2, 6,3,4,4, 7,5,6,7};
    t2d(ar[4][4], 4, 4);
    for (i=0;i<4;i++){
        printf("\n");
        for (j=0;j<4;j++){
            printf("%d", ar[j][i]);}}
    return 0;
}
void t2d(int ar[4][size], int rowSize, int colSize){
    int i,j;
    for (i=0;i<rowSize;i++){
        for (j=0;j<colSize;j++){
            ar[i][j] == ar[j][i];}
    }
}
// how to write code for ar[][4]??????
