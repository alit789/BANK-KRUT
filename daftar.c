#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE*DataUser;

    if((DataUser = fopen("DataAkun.txt ", " r"))== NULL){
        printf("Harap Isi Data Terlebih Dahulu\n");
        system("pause");
        system("cls");
    }
    printf("Daftar Akun Bank Krut\n");
    printf("Username : ");
    char Nama[100];
    DataUser = fopen("DataAkun.txt","a");
    gets(Nama);
    fprintf(DataUser,Nama);
    fclose(DataUser);

    printf("\nData Berhasil Di Buat");
    printf("\nAnda Bisa Login Sekarang");
    return 0;
}
