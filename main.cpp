#include <iostream>
#include <gmp.h>
#include <cstdlib>
#include <string>

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

mpf_init(zeta[i]);
mpf_set_str(zeta[i],"0.7",10);
mpf_init(munkasok[i]);
mpf_set_str(munkasok[i],"20",10);
}

mpf_init(alfa);
mpf_set_str(alfa,"3",10);
mpf_init(beta);
mpf_set_str(beta,"2",10);
mpf_init(mu);
mpf_set_str(mu,"0.6",10);
mpf_init(sigma);
mpf_set_str(sigma,"2",10);

for(i=0;i<7;i++)
{
  for(j=0;j<7;j++)
  {
  mpf_init(tau[i][j]);
  mpf_set_str(tau[i][j],tau_szoveg[i][j],10);
  }
}

mpf_init(ber1);
mpf_init(ber2);
mpf_init(eredmeny);
 
mpf_set_str(ber1, "161432", 10);
mpf_set_str(ber2, "9486321",10);


printf("Under Construction!!!\n");

fuggveny(eredmeny,ber1,ber2);

printf("Az eredmény: %s\n",tau_szoveg[0][1]);

aktualis_ertek();

return 0;
}

void fuggveny(mpf_t eredmeny, mpf_t a, mpf_t b)
{
mpf_mul(eredmeny,a,b);
}


//Egyenletek

void arindex_f(mpf_t eredmeny, mpf_t arindex_p [regiok_szama], mpf_t ber_p [regiok_szama] )
{

}
;

//Érték kiíratás

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


