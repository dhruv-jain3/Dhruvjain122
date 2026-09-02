#include <stdio.h>
#include <conio.h>

void main()
{
    float gs, a, d, ns;

    clrscr();

    printf("Enter Gross Salary:");
    scanf("%f", &gs);

    if (gs > 10000)
    {
        a = gs * 10 / 100;
        d = gs * 3 / 100;
    }
    else if (gs > 5000)
    {
        a = gs * 7 / 100;
        d = gs * 2 / 100;
    }
    else
    {
        a = 0;
        d = 0;
    }

    ns = gs + a - d;

    printf("%.2f %.2f %.2f %.2f\n", gs, a, d, ns);

    getch();
}
