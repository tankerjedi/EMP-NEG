//Parameters

#define regiok_szama 7

int gmp_precision = 1 * 1024;

mpf_t ber1, ber2, eredmeny;

mpf_t ber [regiok_szama];
mpf_t arindex [regiok_szama];

//Függvények

void fuggveny(mpf_t eredmeny, mpf_t a, mpf_t b);

void arindex_f(mpf_t eredmeny, mpf_t arindex_p [regiok_szama], mpf_t ber_p [regiok_szama] );

void ber_f(mpf_t eredmeny, mpf_t arindex_p [regiok_szama], mpf_t ber_p [regiok_szama] );

