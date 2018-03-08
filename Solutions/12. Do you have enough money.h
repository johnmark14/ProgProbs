#include <stdio.h>
 
int main ()
{
    int test_case;
    scanf ("%d", &test_case);
 
    while (test_case--) {
        double total_amount = 0;
        scanf ("%lf", &total_amount);
 
        double total_expense = 0;
 
        double value;
        scanf ("%lf", &value);
 
        while (value != -1) {
            total_expense += value;
            scanf ("%lf", &value);
        }
 
        total_expense = total_expense + (total_expense * 0.08);
 
        if (total_amount >= total_expense)
            printf("ENOUGH MONEY\n");
 
        else
            printf("$%.2lf SHORT\n", total_expense - total_amount);
    }
 
    return 0;
}