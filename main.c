#include <stdio.h>

int main(void) {
    int n = 3;
    float E;
    float num_1;
    int i = 1;
    float sum_1;
    //Вводим переменные отвечающие за последующие действия

    num_1 = (float)5 / (3 * (n+2) * (n+2) +1);
    // Вводим num_1 и num_2

    printf("write error(write less 1 please):\n");
    scanf("%f", &E);
    printf("%f\n", E);
    // Вводим погрешность

    if(E >= 1){
        printf("!!!ERROR!!!\n");
        return 1;
    }

    sum_1 = num_1;
    printf("%f\n", sum_1);
    //Вводим переменный отвечающие за сумму рядов текущей(sum_1) и предыдущей итерации(sum_2)

    int z = 0;

    while(z == 0){
        float sum_2;
        i += 1 ;
        n += 1;
        num_1 = (float)5 / (3 * (n+2) * (n+2) +1);
        sum_2 = sum_1;
        sum_1 += num_1;


        if ((sum_1 - sum_2) < E){
            z=1;
            
        }
    //Проверяем условие задачи
    }
    printf("i, for which the sum of the infinitely convergent series will be less than the given E =%d\n", i);
    return 0;
}

