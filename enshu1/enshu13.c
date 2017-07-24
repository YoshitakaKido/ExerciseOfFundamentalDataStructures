#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    double a, b, c;
    double D;
    double ans1, ans2;

    printf("ax^2 + bx +c =0のa b cを入力して下さい>>>");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = b * b - 4 * a * c;
    ans1 = (-b + sqrt(D)) / (2 * a);
    ans2 = (-b - sqrt(D)) / (2 * a);

    if(D == 0)
        printf("解は重解となり%lfです。\n", ans1);
    else if(D > 0)
        printf("解は%lfと%lfです。\n", ans1, ans2);
    else
        printf("虚数解となるため、実数解はありません。\n");

    return EXIT_SUCCESS;
}
