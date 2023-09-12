#include <stdio.h>
/**
* main - main function to start the programm
*
* Prints: _putchar, followed by a new line
*
* Retrun: nothing if it's successfull
*/
int main(void)
{
       char output[] = "_putchar\n";
       int i;

       for (i = 0; output[i] != '\0'; i++)
       {
              _putchar(output[i]);
       }
       
       return (0);
}