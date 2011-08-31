#include <stdio.h>
#include <gmp.h>
#include <stdlib.h>

#include "main.h"

int main()
{

//Set GMP precision

mpf_set_default_prec(gmp_precision);

//inicializálás, kezdőértékek

for(i=0;i<regiok_szama;i++)
{
mpf_init(ber[i]);
mpf_set_str(ber[i],"1.1",10);
mpf_init(arindex[i]);
mpf_set_str(arindex[i],"1.1",10);
}

mpf_init(ber1);
mpf_init(ber2);
mpf_init(eredmeny);
 
mpf_set_str(ber1, "161432", 10);
mpf_set_str(ber2, "9486321",10);


printf("Under Construction!!!\n");

fuggveny(eredmeny,ber1,ber2);

//gmp_printf("Az eredmény: %Ff\n",eredmeny);

aktualis_ertek();

return 0;
}

void fuggveny(mpf_t eredmeny, mpf_t a, mpf_t b)
{
mpf_mul(eredmeny,a,b);
}

void aktualis_ertek()
{

printf("****************************************\nAz aktuális értékek:\n");
printf("régió | bér | árindex |\n");

for (i=0; i < regiok_szama; i++)
{
gmp_printf("%d | %Ff | %Ff  |\n",i+1,ber[i],arindex[i]);
}

printf("****************************************\n");
}
