
/*
 * Va"sa re"sitev prve naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 1 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga1.h"

int razdalja(Vozlisce* p, Vozlisce* q) {
	if(p==q){
		return 0;
	}
	int count = 0;
	while (p->naslednje != q ) {
		count++;
		p = p->naslednje;
		if (p->naslednje == NULL) {
			return 0;
		}
	}
	return count + 1;
}

int main() {
	// po "zelji dodajte kodo za ro"cno testiranje ...
	// add manual testing code if desired ...
	return 0;
}
