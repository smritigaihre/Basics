/*An electricity board charges according to the following rates

    For the first 100 units-- ------Rs 40 per unit.
    For the next 200 units-- ------Rs 50 per unit.
    For the beyond 300 units-- ------Rs 60 per unit.

    All users are also charge meter charge,which is equal to Rs.50.
    Write a program to read number of units consumed and print out the total charges.*/

#include <stdio.h>
int main()
{
    float unit, bill, total;
    int charge = 50;
    printf("Enter the number of unit:\n");
    scanf("%f", &unit);

    if (unit <= 100)
    {

        bill = unit * 40;
    }

    else if (unit <= 200)
    {
        bill = 4000 + ((unit - 100) * 50);
    }
    else if (unit >= 300)
    {
        bill = 4000 + 5000 + ((unit - 200) * 60);
    }
    total = bill + charge;
    printf("The bill is %.3f", (total));

    return 0;
}