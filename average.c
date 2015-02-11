#include<stdio.h>

int main()
{
    int n, i, y,k, count=0;
    int number[1000];
    float average, Aabove;
    printf("%s", "Enter a value: ");
    scanf("%d", &n);


        while(n>0)
        {

            number[count] = n;
            count++;
            printf("%s", "Enter a value: ");
            scanf("%d", &n);


        }

        for(i=0; i<count; i++)

        {

            average+=number[i];

        }
            average=average/count;

        for (k = 0; k<count; k++)
        {
            if(number[k]>average)
            {
                Aabove+=number[k];
                y+=1;
            }
        }

            Aabove=Aabove/y;
            printf("Above Average= %f", Aabove);
            return 0;

}

