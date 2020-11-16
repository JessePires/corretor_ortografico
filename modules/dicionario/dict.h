#pragma once
#include "../trie/trie.h"
#include "../lista/lista.h"

ASCIITrie* criarDicionario(char *dicionario);

ASCIITrie* CorrigirOrtografia(ASCIITrie* dicionario, char* texto);

LISTA* TRIE_ChavesQueCasam(ASCIITrie *dicionario, char* padrao, int n_extras);

void Preenche_Trie_Sugestoes(ASCIITrie** trie,LISTA* l);