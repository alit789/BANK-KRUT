#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE*DataUser;

    if((DataUser = fopen("DataPuki.txt ", " r"))== NULL){
        printf("Harap Isi Data Terlebih Dahulu\n");
        system("pause");
        system("cls");
    }
    printf("Daftar Akun\n");
    printf("Username : ");
    char Nama[100];
    DataUser = fopen("DataPuki.txt","w");
    gets(Nama);
    fprintf(DataUser,Nama);
    fclose(DataUser);

    printf("Password : ");
    FILE*Datapin;
    char pin[100];
    Datapin = fopen("DataPass.txt","w");
    gets(pin);
    fprintf(Datapin,pin);
    fclose(Datapin);

    printf("\nData Berhasil Di Buat");
    printf("\nAnda Bisa Login Sekarang");
    return 0;
}
