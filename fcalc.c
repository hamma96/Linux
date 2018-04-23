#include <stdio.h>
#include <math.h>
#include "fonctions.h"

float fcalc1(float f, float g, char c)
{					
   switch(c)
   {
      case '+':				
         return (f+g);			
      case '-':
	 return (f-g);				
      case '*':
         return (f*g);
      case '/':
         return (f/g);
      case '^':
         return (pow(f,g));
   }
}


float fcalc2(float f, char c)
{
   switch(c)
   {
      case 'c':
         return (cos(f));
      case 's':
         return (sin(f));
   }

}
