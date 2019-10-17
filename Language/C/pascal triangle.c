 //This program show the pascal triangle that we have learned in our previous classes just by entering the number of rows
 #include <stdio.h>
void main()
{
    int array[15][15], i, j, rows, num = 25, k;

    printf("\n enter the number of rows:");
    scanf("%d", &rows);                     //Enter The number of rows
    for (i = 0; i < rows; i++)
    {
        for (k = num - 2 * i; k >= 0; k--)
            printf(" ");
	    for (j = 0; j <= i; j++)
	    {
            if (j == 0 || i == j)
            {
                array[i][j] = 1;
            }
            else
            {
                array[i][j] = array[i - 1][j - 1] + array[i - 1][j];                //calculating the middle elements of the pascal triangle
            }
            printf("%4d", array[i][j]);
        }
        printf("\n");
    }
}
