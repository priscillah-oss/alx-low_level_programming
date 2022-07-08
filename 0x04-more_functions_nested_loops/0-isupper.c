#include <stdio.h>
#include <ctype.h>
/*
 * int isupper(character)
 * return --->non zero -->character isuppercase
 * return ---> zero ---> character is not uppercase
 */
int main()
{
char str = 'a';
if(isupper(str) ==0) {printf("not uppercase");
}
else
{printf("Uppercase");}

return 0;
}
