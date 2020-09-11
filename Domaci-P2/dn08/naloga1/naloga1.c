
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga1.h"

bool promeni(VO* prvi, VO* drugi) {

	if (drugi->ocena > prvi->ocena) {
		return true;
	}
	if (drugi->ocena == prvi->ocena) {
		// narascajoce ocene
		if (drugi->vpisna < prvi->vpisna) {
			return true;
		}
	}
	return false;
}
VO** opravili(Student** studentje, int stStudentov, char* predmet, int* stVO) {
	VO** tab = malloc(stStudentov * sizeof(VO));
	int a = 0;
	for (int i = 0; i < stStudentov; i++) {
		for (int j = 0; j < studentje[i]->stPO; j++) {
			if (studentje[i]->po[j].ocena >= 6 && !strcmp(studentje[i]->po[j].predmet, predmet)) {
				VO* noviVO = malloc(sizeof(VO));
				noviVO->vpisna = studentje[i]->vpisna;
				noviVO->ocena = studentje[i]->po[j].ocena;
				tab[a] = noviVO;
				a++;
			}

		}

	}
	//bubble sort najlaksi
	for (int i = 0; i < a-1; i++) {
		for (int j = i+1; j < a; j++) {
			if(promeni(tab[i],tab[j])){
				VO* promena=tab[i];
				tab[i]=tab[j];
				tab[j]=promena;
			}
		}
	}

	*stVO = a;
	return  tab;
}

int main() {
	return 0;
}
