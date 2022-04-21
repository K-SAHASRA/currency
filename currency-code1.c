#include <stdio.h>
int main(){
    float rupees,dollar,euro,pounds,dirham;
    scanf("%f",&rupees);
    printf("the amount in rupees is %f \n",rupees);
    dollar=rupees/76.18;
    euro=rupees/82.85;
    pounds=rupees/99.5;
    dirham=rupees/20.74;
    printf("the amount in dollars is %f\n",dollar);
    printf("the amount in euro is %f\n",euro);
    printf("the amount in pounds is %f\n",pounds);
    printf("the amount in dirham is %f\n",dirham);
    return 0;
}
