#include <stdio.h>
#include "fonctions.h"

int main()
{
	char c;
	float nb1,nb2,res;
    printf("Menu:\n \t+:somme\n \t-:soustraction\n \t*:Produit\n \t/:Division\n \ts:sin\n \tc:cos\n \t^:Pow\n \tq:quitter \n");
	do
	{
		printf("donner l'operation: ");
		scanf(" %c", &c);
		switch(c)
		{
			case '+':
      			case '-':
      			case '*':
      			case '/':
                case '^':
       				scanf ("%f%f", &nb1, &nb2);
				res = fcalc1(nb1, nb2, c);
        			break;
			case 's':
      			case 'c':
        			scanf ("%f", &nb1);
        			res = fcalc2(nb1, c);
        			break;
			case 'q':
        			continue;

      			default:
        			printf ("Unknown command: %c", c);
				do
				{
	  					scanf ("%c", &c);
	  					printf ("%c", c);
				} while (c != '\n');
        			continue;
    		}
    		printf ("%f\n", res);
  	} while (c != 'q');
return 0;
}
			
