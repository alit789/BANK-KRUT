#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

//Functions
int Menu(void);
float CekSaldo(float Saldo);
float Depo(float Saldo);
float Tarik(float Saldo);
float belipulsadanpaket(float Saldo);
int MenuKeluar(void);
int Eror(void);

int Menu() {

    printf("----------------> Hai! <----------------\n");
    printf("--> Selamat Datang Di Layanan ATM Kami <--\n\n");
    printf("Silahkan Di Pilih Salah Satu Menu Di Bawah\n\n");
    printf("< 1 >  Cek Saldo\n");
    printf("< 2 >  Tabung\n");
    printf("< 3 >  Tarik\n");
    printf("< 4 >  Beli Pulsa dan Paket Data\n");
    printf("< 5 >  Exit\n\n");
    return 6;

}



float CekSaldo(float Saldo) {
    printf("Kamu Memilih Untuk Melihat Jumalah Saldo\n");
    printf("Saldo Di Rekening Anda Saat Ini adalah Rp.%.2f \n",Saldo);
    return Saldo;

}



float Depo(float Saldo) {
    float deposit;
    printf("Kamu Memilih Untuk Melakukan Deposit\n");
    printf("Saldo Di Rekening Anda Saat Ini adalah Rp.%.2f \n",Saldo);
    printf("Masukan Jumlah Yang Anda Akan Deposit kan >> ");
    scanf("%f", &deposit);


    Saldo += deposit;

    printf("Saldo Mu Sekarang Adalah :Rp.%.2f \n",Saldo);
    return Saldo;

}




int Eror() 
{
    printf("Kamu Salah Memilih Nomor\n");
    return 9;
}




int MenuKeluar() {
    printf("-----Terima Kasih Telah Menggunakan Layanan Kami!!!-----\n");
    return 5;
}




float Tarik(float Saldo) {
    float withdraw;
    bool back = true;

    printf("Kamu Memilih Untuk Menarik Sejumlah Uang\n");
    printf("Saldo Di Rekening Anda Saat Ini adalah Rp.%.2f \n",Saldo);
    

    while (back) {
    printf("Masukan Jumlah Nominal Yang Ingin Di Tarik >> ");
    scanf("%f", &withdraw);


    if (withdraw < Saldo) {
        back = false;
        Saldo -= withdraw;
        printf("\nKamu Menarik Uang Sebesar :Rp.%.2f\n", withdraw);
        printf("Saldomu Saat Ini adalah :Rp.%.2f\n\n", Saldo);

    }

        else  {

        printf("+++Kamu Tidak Memiliki Cukup Uang+++\n");
        printf("Silahkan Hubungi Pihak Bank Untuk info Lebih Lanjut\n");
        printf("Saldomu Saat Ini adalah:  Rp.%.2f\n\n", Saldo);
        break;
        }
    }
    return Saldo;


}

float belipulsadanpaket(float Saldo){
    float belipulsa;
    int pilih;
    int pilihpulsa;
    bool back=true;
    printf("Kamu Memilih Menu Untuk Membeli Pulsa Atau Paket Data\n");
    printf("Masukan Pilihan Yang Ingin Di Pilih :\n");
    printf("1.Pulsa\n2.Paket Data\n");
    printf("Masukan Pilihan >> ");
    scanf("%d",&pilih);
    if (pilih == 1){
        printf("Anda Memilih Menu Pembelian Pulsa\n");
        printf("Pulsa Yang Tersedia : \n");
        printf("1.Telkomsel\n2.XL\n3.IM3\n4.Three\n");
        printf("Masukan Jenis Pulsa Yang Ingin Di Beli >> ");
        scanf("%d",&pilihpulsa);
        switch (pilihpulsa)
        {
        case 1:
            printf("Saldo Di Rekening Anda Saat Ini adalah Rp.%.2f \n",Saldo);
            printf("Masukan Jumlah Nominal Pulsa Yang Ingin Di Beli >> Rp.");
            scanf("%f",&belipulsa);
            Saldo -= belipulsa;
            printf("Sisa Saldo Anda Adalah : Rp. %.2f \n",Saldo);
            

            
        default:
            break;
        }

        printf("Saldo Di Rekening Anda Saat Ini adalah Rp.%.2f \n",Saldo);
    }
    
}


int main() 
{
    char pin[10];
    char pinuser[10] = "121212";
    char user[100] = "alit";
    char username[100];
    int salah = 1;
    printf("Bank Krut\n");
    printf("Klik Enter Untuk Melanjutkan\n");
    system("pause");
    back:
    for (int i = 0; i < 100; i++)
    {
        printf("Loading - %d",i);
        system("cls");
    }
    
    printf("Masukan Username >> ");
    scanf("%s",&username);
    printf("Masukan PIN ATM >> ");
    scanf("%s",&pin);
    
    if (strcmp(user,username)==0 && strcmp(pinuser,pin)==0)
    {
        printf("Selamat Datang Alit\n");
    }else{

        printf("Pin atau Username Salah\n");
        salah++;
        system("pause");
        system("cls");
        goto back;
    }
    system("cls");
    if(salah == 3){
        printf("Akun Anda Terblokir Seumur Hidup Anda");
        exit(0);
    }
    int option;
    float Saldo = 1500000.00;
    int choose;

    bool again = true;

    while (again) {
    Menu();

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Masukan Pilihan MU >> \t");
    scanf("%d", &option);


        switch (option) {
            case 1:
            	system("CLS");
                CekSaldo(Saldo);
                break;
            case 2:
            	system("CLS");
                Saldo = Depo(Saldo);
                break;
            case 3:
            	system("CLS");
                Saldo = Tarik(Saldo);
                break;

            case 4:
            	system("CLS");
                belipulsadanpaket(Saldo);
                return 0;

            case 5:
                system("CLS");
                Eror();

            default:
                Eror();
                break;
        }

        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Apakah Kamu Ingin Melakukan Transaksi yang lain ?\n");
        printf("1 > Iya\n");
        printf("2 > Tidak\n");
        printf("Masukan Pilihan >> ");
        scanf("%d", &choose);

        system("CLS");



        if (choose == 2) {
            again = false;
            MenuKeluar();

        }

}


    return 0;
}