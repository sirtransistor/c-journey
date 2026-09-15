#include <stdio.h>

int main() {
    printf("deneme yazisi\n"); // \n sayesinde alt satıra geçeceğiz
    printf("bundan sonraki yazi bir tab boslugunda olacak\t"); // \t sayesinde tab boşluğu eklenir
    printf("bundan sonraki ise iki tab boslugu\t\t"); // yani kullanılan kaçış dizisi sayısı kadar etkisi olur
    printf("deneme yazisi3\b"); // \b sayesinde bir karakter silinir
    return 0;
}