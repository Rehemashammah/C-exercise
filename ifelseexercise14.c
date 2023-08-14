#include<stdio.h>
int main()
{
  //Program to enter student marks and find percentage and grade
int phyc, chem, bio, math, comp;
float per;
printf("Enter marks for the 5 subjects:");
scanf("%d%d%d%d%d", &phyc,&chem,&bio,&math,&comp);

//Calculate the percentage
per=(phyc + chem + bio + math + comp) / 5.0;
printf("Percentage = %.2f\n"), per);

//Find grade according to the percentage
if ( per>=90%)
{
printf("Grade A");
}
else if ( per>=80%)
{
printf("Grade B");
}
else if( per>=70%)
{
printf("Grade C");
}
else if( per>=60%)
{
printf("Grade D");
}
else if ( per>=40%)
{
printf("Grade E");
}
else 
{
printf("Grade F");
}
return 0;
}
