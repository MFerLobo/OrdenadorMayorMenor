#include<stdio.h>

int main()
{
    int nummayor, nummenor, numaux=1, flag=1;

    printf("Ingrese un n%cmero:\n", 163);
    scanf("%d", &nummayor);

    while(numaux)
    {
        printf("Ingrese otro n%cmero:\n", 163);
        scanf("%d", &numaux);
        if(numaux)
          {
            if(flag)
            {
                nummayor = numaux;
                nummenor = numaux;
                flag=0;
            }else
                {if(numaux>nummayor)
                    nummayor = numaux;
                  else if(numaux<nummenor)
                    nummenor = numaux;
                }
           }
    }
    printf("El mayor n%cmero ingresado es: %d\n", 163, nummayor);
    printf("El menor n%cmero ingresado es: %d\n", 163, nummenor);

    return 0;
}
