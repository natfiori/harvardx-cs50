#include <cs50.h>
#include <stdio.h>

//validateHeight function ask for the height of pyramid and validate if the number is between 1 and 8
int validateHeight()
{
    int height;
    //while the number is not between 1 and 8 repeat
    do
    {
        height = get_int("Please, input the height: ");
    }
    while (height < 1 || height > 8);

    return height;
}

//makePyramid function print the pyramid
void makePyramid(int height)
{

    //Repeat this loop for all lines (height size)
    for (int i = 0; i < height; i++)
    {
        //print spaces before the #'s, the number is given by height minus 1
        for (int space = 0; space < height - (i + 1); space ++)
        {
            printf(" ");
        }

        //print the #'s, the amount of #'s is given by the number of line times two
        for (float width = 0; width < (i + 1) * 2; width++)
        {
            printf("#");

            //if the loop print the half of #'s, print the middle spaces
            if ((width + 1) == (i + 1))
            {
                printf("  ");
            }
        }

        printf("\n");
    }
}

int main(void)
{
    int height = validateHeight();
    makePyramid(height);
}
