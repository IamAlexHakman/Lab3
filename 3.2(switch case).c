#include <stdio.h>
#include <string.h>

int main()
{
    int n = 0;
        printf("Введіть число співпадающий з кольором веселки.\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            printf("Червоний\n\n");
            break;
            case 2:
            printf("Помаранчевий\n\n");
            break;
            case 3:
            printf("Жовтий\n\n");
            break;
            case 4:
            printf("Зелений\n\n");
            break;
            case 5:
            printf("Блакитний\n\n");
            break;
            case 6:
            printf("Синій\n\n");
            break;
            case 7:
            printf("Фіолетовий\n\n");
            break;
            default:
            printf("Ви ввели число більше 7, такого кольору у веселки немає\n");
            return 0;
            
        }
    }