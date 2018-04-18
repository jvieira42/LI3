#ifndef _PERGUNTA_H_
#define _PERGUNTA_H_
//#include "datetime.h"
#include "../include/date.h"

typedef struct pergunta *Pergunta;



Pergunta initPergunta(long mainID, int dy, int mnth, int yr, int scr, long userID, char* ttl, 
	char* tgs, int favcnt, int anscnt, int cmmtCnt, GTree* resp);


long getIdp(Pergunta p);


//DateTime getCreationDate(Pergunta p);


int getScorep(Pergunta p);


long getOwnerUserIDp(Pergunta p);


void getTitle(Pergunta p, char* new);


void getTags(Pergunta p, char* new);

int getFavoriteCount(Pergunta p);


int getAnswerCount(Pergunta p);


int getcommentCount(Pergunta p);


int comparePerguntas(Pergunta p1, Pergunta p2);


//Pergunta copyPergunta(Pergunta p);

//Pergunta insertResposta(Pergunta p1, Resposta r1);

void freePergunta(Pergunta p);

#endif

