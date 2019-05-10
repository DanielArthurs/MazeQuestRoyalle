#if !defined HEADER_H 
#define HEADER_H 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rand_4(void);
typedef struct npc{
	(int ai)(void)
}
typedef struct item(
	int category; /* weapon = 0 food = 1 gem = 2 */
	int damage;
	int inventory; // how much space taken in inventory
	int spell;
)
typedef struct room{
	char d1;
	char d2;
	char d3;
	char d4;
	item *items;
	npc npcs;
}














#endif

/*

tome: fireball cost: gems, gems determine elemental type of the spell


*/