# include <stdio.h>
int main() 
{
  int p, t, r,si,ci;
  p=r=t=100;
  si=p*t*r/100;
  printf("Simple Interest = %d \n",si);
  ci=p*(1+r/100)*t;
  printf("compound interest: %d\n",ci);
}



