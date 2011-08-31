//Parameters

#define regiok_szama 7

int gmp_precision = 1 * 1024;
int i,j = 0;

mpf_t ber1, ber2, eredmeny;

mpf_t ber [regiok_szama];
mpf_t arindex [regiok_szama];

mpf_t alfa; //fixköltség
mpf_t beta; //határköltség
mpf_t mu; //közbenső termékek megoszlása a CD termelési függvényben
mpf_t sigma; //helyettesítési rugalmasság a termékváltozatok között

mpf_t zeta [regiok_szama]; //egy régió hány százaléka dolgozik az iparban
mpf_t munkasok [regiok_szama]; //régióban élő munkások

mpf_t tau [regiok_szama][regiok_szama]; //távolság mátrix

//Függvények

void fuggveny(mpf_t eredmeny, mpf_t a, mpf_t b);

void arindex_f(mpf_t eredmeny, mpf_t arindex_p [regiok_szama], mpf_t ber_p [regiok_szama] );

void ber_f(mpf_t eredmeny, mpf_t arindex_p [regiok_szama], mpf_t ber_p [regiok_szama] );


//A változók aktuális értéke
void aktualis_ertek();
