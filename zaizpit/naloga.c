
#include <stdio.h>
#include <stdlib.h>


typedef struct _Vozlisce {
	int podatek;
	struct _Vozlisce* naslednje;
} Vozlisce;


void push(struct Node** head_ref, int new_data) {

	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}


Vozlisce* odstrani(Vozlisce* osnova, Vozlisce* indeksi) {



}





int main() {

	return 0;
}
