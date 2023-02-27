//#include "discos.h"

struct DiscoVoador
{
    char modelo[50];
    int velocidade, aceleracao, autonomia;
};


void insere_disco(struct DiscoVoador novo_disco, struct DiscoVoador discos[], int n_discos) {
    for (int i = 0; i < n_discos; i++)
    {
        if (novo_disco.velocidade<discos[i].velocidade)
        {
            for (int j = n_discos; j >= i; j--)
            {
                discos[j+1]=discos[j];
            }
            discos[i]=novo_disco;break;
        }
        if (novo_disco.velocidade=discos[i].velocidade)
        {
            if (novo_disco.aceleracao<discos[i].aceleracao)
            {
                for (int j = n_discos; j >= i; j--)
                {
                    discos[j+1]=discos[j];
                }
                discos[i]=novo_disco;break;
            }
            if (novo_disco.aceleracao=discos[i].aceleracao)
            {
                if (novo_disco.autonomia<discos[i].autonomia)
                {
                    for (int j = n_discos; j >= i; j--)
                    {
                        discos[j+1]=discos[j];
                    }
                    discos[i]=novo_disco;break;
                }
            }
        }
        
    }
}