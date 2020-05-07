#if !defined HEADER_H 
#define HEADER_H 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int32_t DOOR_UP = 0x01;
int32_t DOOR_DOWN = 0x02;
int32_t DOOR_LEFT = 0x04;
int32_t DOOR_RIGHT = 0x08;

int32_t rand_ranged(int32_t, int32_t);
struct npc{
	int32_t (*ai)(void);
};
enum item_category {weapon,food,gem}; /* weapon = 0 food = 1 gem = 2 */
struct item{
	int32_t category; /* uses enum item_category */
	int32_t magnitude; /* determines the strength of the object; damage for weapons, healing for food, ?? for gems (ask daniel) */
	int32_t inventory; // how much space taken in inventory
	int32_t spell; /* what spell is held by item (if it is a tome?) */
};
struct room{
	int32_t doors; /* bitmask for how many doors and what direction they are: use DOOR_UP, DOOR_DOWN, DOOR_LEFT, DOOR_RIGHT bit flags */
	struct item *items; /* pointer to list of items in this room */
	int32_t item_count; /* how many items are in the room */
	struct npc npcs; /* pointer to list of npcs in this room */
	int32_t npc_count; /* how many npcs are in this room */
};














#endif

/*

tome: fireball cost: gems, gems determine elemental type of the spell


*/