# include <stdio.h>

/* 原本是错误版，但是修改了，与02_05代码相同 */
int main(void){

    int n, n2, n3;

    n = 5;
    n2 = n * n;
    n3 = n2 * n2;
    printf("n = %d, n squared = %d, n cube = %d\n", n, n2, n3);

    return 0;
}