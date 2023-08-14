#include<stdio.h>
int main()
{
    //Program to check vowel or consonants
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
   if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'
       || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
   {
       printf("%c is a vowel", ch);
   }
   else if((ch>='a') && (ch<='z') || (ch>='A') && (ch<='Z'))
   {
       printf("%c is a consonant",ch);
   }
   else{
    printf("Error");
   }
   return 0;
}
