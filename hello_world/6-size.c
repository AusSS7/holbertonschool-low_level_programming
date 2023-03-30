#include<stdio.h>
/**
 * main - Entry point
 * datatypes declaration
 * Return: Always 0
 */
int main(void)
{
char charType;
int intType;
float floatType;
long int longintType;
long long int longlongintType;
printf("Size of a char:", sizeof(charType));
printf("Size of an int:", sizeof(intType));
printf("Size of a long int:", sizeof(longintType));
printf("Size of a long long int:", sizeof(longlongintType));
printf("Size of a float", sizeof(floatType));
return (0);
}
