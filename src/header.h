#if !defined HEADER_H 
#define HEADER_H 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rand_ranged(int, int);
struct npc{
	int (*ai)(void);
};
enum item_category {weapon,food,gem}; /* weapon = 0 food = 1 gem = 2 */
struct item{
	int category; /* uses enum item_category */
	int magnitude; /* determines the strength of the object; damage for weapons, healing for food, ?? for gems (ask daniel) */
	int inventory; // how much space taken in inventory
	int spell; /* what spell is held by item (if it is a tome?) */
};
struct room{
	int doors; /* bitmask for how many doors and what direction they are: use DOOR_UP, DOOR_DOWN, DOOR_LEFT, DOOR_RIGHT bit flags */
	struct item *items; /* pointer to list of items in this room */
	int item_count; /* how many items are in the room */
	struct npc npcs; /* pointer to list of npcs in this room */
	int npc_count; /* how many npcs are in this room */
};














#endif

/*

tome: fireball cost: gems, gems determine elemental type of the spell


*/