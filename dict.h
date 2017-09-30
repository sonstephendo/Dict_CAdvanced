#include "../../lib/btree/btree.h"
#ifndef DICT_H
#define DICT_H

#define SIZE_WORD 150
#define SIZE_MEAN 15000
#define SIZE_LINE 256

void createSoundexT(BTA *Dict, BTA **soundexT);

void createDict(char *filetxt, BTA **root);

int soundEx(char *SoundEx,
			char *WordString,
			int   LengthOption,
			int   CensusOption);

#endif /* DICT_H */
