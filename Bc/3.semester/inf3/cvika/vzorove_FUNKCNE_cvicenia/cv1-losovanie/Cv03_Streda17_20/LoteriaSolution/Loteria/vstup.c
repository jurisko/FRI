#include <string.h>

#include "vstup.h"
#include "data.h"

void pripravZreby()
{
	int i = 0;
	int pocet = POCET_ZREBOV - 1;

	zreby[i].cislo = i + 1;
	strcpy(zreby[i].majitel, "A");

	i++;
	if (i > pocet)
		return;
	zreby[i].cislo = i + 1;
	strcpy(zreby[i].majitel, "B");

	i++;
	if (i > pocet)
		return;
	zreby[i].cislo = i + 1;
	strcpy(zreby[i].majitel, "C");

	i++;
	if (i > pocet)
		return;
	zreby[i].cislo = i + 1;
	strcpy(zreby[i].majitel, "D");

	i++;
	if (i > pocet)
		return;
	zreby[i].cislo = i + 1;
	strcpy(zreby[i].majitel, "E");

	i++;
	if (i > pocet)
		return;
	zreby[i].cislo = i + 1;
	strcpy(zreby[i].majitel, "F");

	i++;
	if (i > pocet)
		return;
	zreby[i].cislo = i + 1;
	strcpy(zreby[i].majitel, "G");

	i++;
	if (i > pocet)
		return;
	zreby[i].cislo = i + 1;
	strcpy(zreby[i].majitel, "H");

	i++;
	if (i > pocet)
		return;
	zreby[i].cislo = i + 1;
	strcpy(zreby[i].majitel, "I");

	i++;
	if (i > pocet)
		return;
	zreby[i].cislo = i + 1;
	strcpy(zreby[i].majitel, "J");

	i++;
	if (i > pocet)
		return;
	zreby[i].cislo = i + 1;
	strcpy(zreby[i].majitel, "K");

	i++;
	if (i > pocet)
		return;
	zreby[i].cislo = i + 1;
	strcpy(zreby[i].majitel, "L");

	i++;
	if (i > pocet)
		return;
	zreby[i].cislo = i + 1;
	strcpy(zreby[i].majitel, "L");

	i++;
	if (i > pocet)
		return;
	zreby[i].cislo = i + 1;
	strcpy(zreby[i].majitel, "M");

	i++;
	if (i > pocet)
		return;
	zreby[i].cislo = i + 1;
	strcpy(zreby[i].majitel, "N");

	i++;
	if (i > pocet)
		return;
	zreby[i].cislo = i + 1;
	strcpy(zreby[i].majitel, "O");
}