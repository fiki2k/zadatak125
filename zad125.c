// Program treba naci sumu donje trokutaste matrice.

#include <stdio.h>

int main()
{
    int A[10][10],i,j,m,n;
    int redak, stupac, suma = 0;

    printf("Unesi broj redaka: ");
        scanf("%d", &m);
        printf("\nUnesi broj stupaca: ");
        scanf("%d",&n);
        printf("\nUnesi vrijednosti matrice: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nUnesi element A[%d][%d] : ",i,j);
                 scanf("%d", &A[i][j]);
        }
    }

    printf("\nDana matrica je: \n\n");

        for (i = 0; i < m; ++i)
        {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", A[i][j]);
        }
        printf("\n\n");
    }

    /*
     Racuna sumu gornjeg trokuta matrice
     */
    for(redak=0; redak<m; redak++)
    {
        for(stupac=0; stupac<n; stupac++)
        {
            if(stupac<redak)
            {
                suma += A[redak][stupac];
            }
        }
    }

    printf("\nSuma gronjeg trokuta matrice je = %d \n\n", suma);

    return 0;
}
