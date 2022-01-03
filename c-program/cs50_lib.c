#include <stdio.h>
#include <cs50.h> //The header file cs50.h is what you need to #include to use the CS50 Library. NOTE: The cs50 Library was built by the CS50 staff at Harvard University. Usage is free to cs50 users.

int main(void)
{
  string s = get_string("What is your name?  "); //The get_string() function is a way of requesting input from the user.
  printf("Hello, %s\n", s) //The ,s at the end of the printf() shows that you print a %s argument for the string s.
}
