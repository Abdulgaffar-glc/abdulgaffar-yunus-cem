#include <stdio.h>
void matris_top(int *adr1,int *adr2){
    printf("toplam dizisi = ");
    int toplam[2][3];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d,",toplam [i][j]= *(adr1+i*3+j)+*(adr2+i*3+j));

        }

    }
}
int main() {
int matris1 [2][3] = {1,2,3,4,5,7};
int matris2 [2][3] = {5,6,7,8,9,10} ;
    matris_top(&matris1,&matris2);
    return 0;
}
