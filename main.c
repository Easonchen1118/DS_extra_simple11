#include <stdio.h>
//矩陣反轉https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30760
int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int inpt[row][col];
    int oupt[col][row];
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            scanf("%d", &inpt[i][j]);
            oupt[j][i] = inpt[i][j];
        }
    }
    for (int i=0; i<col; i++) {
        for (int j=0; j<row; j++) {
            printf("%d", oupt[i][j]);
            if (j != row -1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
