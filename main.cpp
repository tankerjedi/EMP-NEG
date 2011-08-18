#include <stdio.h>
#include <gmp.h>
#include <stdlib.h>

#include "main.h"

int main()
{

//Set GMP precision

mpf_set_default_prec(gmp_precision);

mpf_init(ber1);
mpf_init(ber2);
mpf_init(eredmeny);
 
mpf_set_str(ber1, "161432", 10);
mpf_set_str(ber2, "9486321",10);


printf("Under Construction!!!\n");

fuggveny(eredmeny,ber1,ber2);

gmp_printf("Az eredmény: %Ff\n",eredmeny);

return 0;
}

void fuggveny(mpf_t eredmeny, mpf_t a, mpf_t b)
{
mpf_mul(eredmeny,a,b);
}
