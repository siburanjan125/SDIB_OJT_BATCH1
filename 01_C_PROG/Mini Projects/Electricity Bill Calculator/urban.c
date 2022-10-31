#include <stdio.h>

void urban()
{
    int unit;
    float amt, total_amt, sur_charge;

    /* Input unit consumed from user */
    printf("Enter total units consumed: ");
    scanf("%d", &unit);


    /* Calculate electricity bill according to given conditions */
    if(unit <= 50)
    {
        amt = unit * 0.75;
    }
    else if(unit <= 150)
    {
        amt = 38 + ((unit-50) * 1.0);
    }
    else if(unit <= 250)
    {
        amt = 138 + ((unit-150) * 1.5);
    }
    else
    {
        amt = 288 + ((unit-250) * 1.75);
    }

    /*
     * Calculate total electricity bill
     * after adding surcharge
     */
    sur_charge = amt * 0.40;
    total_amt  = amt + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total_amt);

}