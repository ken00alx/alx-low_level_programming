#include <stdio.h>
#include <stdlib.h>
#include "main1.h"

void connect()
{
printf("Connected to C extension...\n");
}

//return random value in range of 0-50
int randNum()
{
int nRand = rand() % 50; 
return nRand;
}

//add two number and return value
int addNum(int a, int b)
{
int nAdd = a + b;
return nAdd;
}

int subNum(int a, int b)
{
int nSub = a - b;
return nSub;
}
int mulNum(int a, int b)
{
int nMul = a * b;
return nMul;
}

int divNum(int a, int b)
{
int ndiv = a / b;
return ndiv;
}
int modNum(int a, int b)
{
int nmod = a % b;
return nmod;
}
