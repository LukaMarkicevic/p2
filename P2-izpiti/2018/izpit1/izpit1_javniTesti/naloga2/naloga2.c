
/*
 * Va"sa re"sitev druge naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 2 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include "naloga2.h"

uchar* preberi(char* imeDatoteke, int* sirina, int* visina, int* stBajtov) {
	char nebitno[20];

	FILE* fp = fopen(imeDatoteke, "rb");

	fgets(nebitno, 20, fp);
	fscanf(fp, "%d %d\n", sirina, visina);
	fgets(nebitno, 20, fp);
	*stBajtov = *sirina * *visina * 3;
	unsigned char* pike = malloc(*sirina * *visina * 3 * (sizeof(unsigned char)));
	fread(pike, (sizeof(char)), *sirina * *visina * 3, fp);

	fclose(fp);

	return pike;
}

int sivina(uchar* pike, int sirina, int visina, int vrstica, int stolpec) {
	int indeks = 3 * (sirina * vrstica + stolpec);

	int broj = (pike[indeks] + pike[indeks + 1] + pike[indeks + 2]) / 3;

	return broj;

}

int main() {
	// po "zelji dodajte kodo za ro"cno testiranje ...
	// add manual testing code if desired ...
	return 0;
}
