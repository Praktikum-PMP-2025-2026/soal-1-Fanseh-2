//** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
// *   Modul               : 1
// *   Hari dan Tanggal    : Senin, 13 April 2026
// *   Nama (NIM)          : Hezkiel Tarutung Harianja (13224010)
// *   Nama File           : soal1_modul1.c
// *   Deskripsi           : Program main menjalankan function yang berisi syarat-syarat agar sebuah user bisa masuk melewati sebuah gerbang
// * 
// */

#include <stdio.h>

int izin;
int suhu;
int radiasi;
int jam;

int hasil(int izin, int suhu, int radiasi, int jam){
    if(radiasi >= 6){
        printf("TOLAK");
    } else if (suhu >= 390){
        printf("KARANTINA");
    } else if (izin == 1 && jam < 6 || jam > 20){
        printf("TOLAK");
    } else if (izin == 1){
        printf("MASUK");
    } else if(izin == 2 && radiasi <= 2 && 8<=jam<=18){
        printf("MASUK");
    } else if(izin ==2){
        printf("PEMERIKSAAN");
    } else if(izin == 3 && radiasi == 0 && suhu < 380){
        printf("MASUK");
    } else {
        printf("TOLAK");
    }
}

int main(){
    scanf("%d %d %d %d", &izin, &suhu, &radiasi, &jam);
    hasil( izin, suhu, radiasi, jam);

}
