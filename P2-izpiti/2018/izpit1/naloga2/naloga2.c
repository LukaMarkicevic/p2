
/*
 * Va"sa re"sitev druge naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 2 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include "naloga2.h"

uchar* preberi(char* imeDat, int* sirina, int* visina, int* stBajtov) {

	FILE* fp = fopen(imeDat, "rb");

	char* Pnepo = malloc(10 * sizeof(char));
	//P6
	fgets(Pnepo, 10, fp);

	// Sirina i visina
	fscanf(fp, "%d %d", sirina, visina);

	// nov line
	fgetc(fp);

	//255
	fgets(Pnepo, 10, fp);

	*stBajtov = 3 * *sirina * *visina;
	unsigned char* niz = malloc(3 * *sirina * *visina * sizeof(unsigned char));

	fread(niz, sizeof(unsigned char), 3 * *sirina * *visina, fp);
	fclose(fp);
	return niz;
}

int sivina(uchar* pike, int sirina, int visina, int vrstica, int stolpec) {
	int sivinska;
	int indeks = 3 * (sirina * vrstica + stolpec);
	sivinska = (pike[indeks] + pike[indeks + 1] + pike[indeks + 2]) / 3;

	return sivinska;
}

int main() {
	// int sirina, visina, stBajtov;
	// preberi("a.ppm", &sirina, &visina, &stBajtov);
	// printf("%d %d\n", sirina, visina);

	// exit(0);
	// return 0;
}
