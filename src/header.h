#if !defined HEADER_H 
#define HEADER_H 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rand_ranged(int, int);
struct npc{
	int (*ai)(void);
};
struct item{
	int category; /* weapon = 0 food = 1 gem = 2 */
	int damage;
	int inventory; // how much space taken in inventory
	int spell;
};
struct room{
	char d1;
	char d2;
	char d3;
	char d4;
	struct item *items;
	struct npc npcs;
};














#endif

/*

tome: fireball cost: gems, gems determine elemental type of the spell


*/