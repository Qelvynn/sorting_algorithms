#ifndef DECK_H
#define DECK_H

/**
 * enum kind_e - card kind
 * @SPADE: spade kind
 * @HEART: heart kind
 * @CLUB: club kind
 * @DIAMOND: diamond kind
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct cards
 *
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to card of the node
 * @prev: Pointer to previous node of list
 * @next: Pointer to next node of  list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);
#endif
