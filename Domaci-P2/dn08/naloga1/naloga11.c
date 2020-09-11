
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga1.h"

int poisciPO(Student* student, char* predmet) {
  for(int i=0; i<student->stPO; i++){
    if((strcmp(student->po[i].predmet, predmet)) == 0){
        return i;
  }
}
    return -1;
}


VO** opravili(Student** studentje, int stStudentov, char* predmet, int* stVO) {
    int br = 0;
    int count = 0;
    int iPredmeta = 0;
    VO** opravili = malloc(sizeof(VO));
    VO* studenti = malloc(20*sizeof(VO));
    for(int i=0; i<stStudentov; i++){
        Student* student = studentje[i];
        iPredmeta = poisciPO(student, predmet);
        if(student->po[iPredmeta].ocena >= 6){
            
           // studenti[count]->vo = malloc(sizeof(VO));
            //VO vo = (VO)malloc(sizeof(VO));
            //vo.vpisna = student->vpisna;
           // vo.ocena = student->po[iPredmeta];
            VO vo;
            vo.vpisna = student->vpisna;
            vo.ocena = student->po[iPredmeta].ocena;
            studenti[count] = vo;
            br++;
            count++;
            
        }
    }
    *opravili = studenti;
    *stVO = br;
    return opravili;
}

int main() {
    // koda za ro"cno testiranje (po "zelji)
    return 0;
}
