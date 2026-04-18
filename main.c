#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op;
    do
    {
    printf("Menu\n1] Suma\n2] Resta\n3] Multiplicacion\n4] Division\n5] Salir\nSeleccione una opcion: ");
    scanf("%d", &op);

    switch(op)
    {
        case 1:
            {
            int a, b, c;
            printf("\nIntroduzca el valor de A: ");
            scanf("%d", &a);
            printf("Introduzca el valor de B: ");
            scanf("%d", &b);
            c=a+b;
            printf("\nA + B = %d\n", c);
            system("PAUSE");
            break;
            }
        case 2:
            {
            int a, b, c;
            printf("\nIntroduzca el valor de A: ");
            scanf("%d", &a);
            printf("Introduzca el valor de B: ");
            scanf("%d", &b);
            c=a-b;
            printf("\nA - B = %d\n", c);
            system("PAUSE");
            break;
            }
        case 3:
            {
            int a, b, c;
            printf("\nIntroduzca el valor de A: ");
            scanf("%d", &a);
            printf("Introduzca el valor de B: ");
            scanf("%d", &b);
            c=a*b;
            printf("\nA x B = %d\n", c);
            system("PAUSE");
            break;
            }
        case 4:
            {
            float a, b, c;
            printf("\nIntroduzca el valor de A: ");
            scanf("%d", &a);
            printf("Introduzca el valor de B: ");
            scanf("%d", &b);
            c=a/b;
            printf("\nA / B = %f\n", c);
            system("PAUSE");
            break;
            }
        case 5:
            {
            break;
            }
        default:
            printf("\nOpcion no valida\n\n");
            system("PAUSE");
    }
    system("CLS");
    }
    while(op!=5);
}
