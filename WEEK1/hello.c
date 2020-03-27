#include <stdio.h>
#include <cs50.h>

//main function of the program
int main(void)
{
    //declare the variable name getting the value by input
    string name = get_string("What is your name?\n");
    //print hello + 
    printf("hello, %s\n", name);

}