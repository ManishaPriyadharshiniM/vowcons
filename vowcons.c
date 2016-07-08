# vowcons
#include<stdio.h>
void main()
{
char x;
printf("enter the character");
scanf("%c",x);
if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
{
printf("the character is a vowel");
else
printf("the character is a consonant");
}
return 0;
}
