/*------------------------------------------------------------------------------
| NuCTex	| items.h
| Author	| Benjamin A - Nullsrc
| Created	| 17 January, 2016
| Changed	| 17 January, 2016
|-------------------------------------------------------------------------------
| Overview	| Declare item structures used in the code
\-----------------------------------------------------------------------------*/
#ifndef NULLSRC_ITEMS_HEADER
#define NULLSRC_ITEMS_HEADER

typedef struct Item {
	char* name;
	char* description;
	int id;
	float size;
	float weight;

	int strength;
	int agility;
	int intelligence;
	int charisma;
} Item;

typedef struct Inventory {
	item[26];
} Inventory;

#endif /* NULLSRC_ITEMS_HEADER *?
