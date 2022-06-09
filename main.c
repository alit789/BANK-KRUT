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
float nominal_pulsa(float Saldo);
float nominal_paket(float Saldo);
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

float nominal_paket(float Saldo){
            char yakin;
            int pilihpaket;
            printf("Anda Memilih Menu Pembelian Paket Data\n");
            printf("Paket Data Yang Tersedia : \n");
            printf("1.Giga Net\n2.Seru Seharian\n3.Pagi Asik\n4.Max Stream\n");
            printf("Masukan Jenis Paket Data Yang Ingin Di Beli >> ");
            scanf("%d",&pilihpaket);
            switch (pilihpaket)
            {
                case 1:
                        printf("Anda Ingin Membeli Paket Giga Net dengan Nominal Rp.40.000\n");
                        printf("Apakah Anda Yakin Untuk Membeli?[y/t]\n");
                        printf("Masukan Pilihan Anda >> ");
                        getchar();
                        scanf("%c",&yakin);
                        if(yakin == 'y' || yakin == 'Y'){
                            Saldo -= 40000;   
                        }
                        printf("Sisa Saldo Anda Adalah : Rp.%.2f \n",Saldo);
                            break;
                case 2:
                        printf("Anda Ingin Membeli Paket Seru Seharian dengan Nominal Rp.20.000\n");
                        printf("Apakah Anda Yakin Untuk Membeli?[y/t]\n");
                        printf("Masukan Pilihan Anda >> ");
                        getchar();
                        scanf("%c",&yakin);
                        if(yakin == 'y' || yakin == 'Y'){
                            Saldo -= 20000;   
                        }
                        printf("Sisa Saldo Anda Adalah : Rp.%.2f \n",Saldo);
                            break;
                case 3:
                        printf("Anda Ingin Membeli Paket Pagi Asik dengan Nominal Rp.10.000\n");
                        printf("Apakah Anda Yakin Untuk Membeli?[y/t]\n");
                        printf("Masukan Pilihan Anda >> ");
                        getchar();
                        scanf("%c",&yakin);
                        if(yakin == 'y' || yakin == 'Y'){
                            Saldo -= 10000;   
                        }
                        printf("Sisa Saldo Anda Adalah : Rp.%.2f \n",Saldo);
                            break;
                case 4:
                        printf("Anda Ingin Membeli Paket Max Stream dengan Nominal Rp.20.000\n");
                        printf("Apakah Anda Yakin Untuk Membeli?[y/t]\n");
                        printf("Masukan Pilihan Anda >> ");
                        getchar();
                        scanf("%c",&yakin);
                        if(yakin == 'y' || yakin == 'Y'){
                            Saldo -= 20000;   
                        }
                        printf("Sisa Saldo Anda Adalah : Rp.%.2f \n",Saldo);
                            break;
                        }
            system("cls");
            return Saldo;
}



float nominal_pulsa(float Saldo){
            int nom_pulsa;
            char yakin;
            printf("Pilih Nominal :\n1.Rp.10.000         2.Rp.15.000\n3.Rp.20.000            4.Rp.50.000\n");
            printf("Masuan Pilihan Anda : ");
            scanf("%d",&nom_pulsa);
            switch (nom_pulsa)
            {
            case 1:

                printf("Anda Ingin Membeli Pulsa dengan Nominal Rp.10.000\n");
                printf("Apakah Anda Yakin Untuk Membeli?[y/t]\n");
                printf("Masukan Pilihan Anda >> ");
                getchar();
                scanf("%c",&yakin);
                if(yakin == 'y' || yakin == 'Y'){
                    Saldo -= 10000;   
                }
                printf("Sisa Saldo Anda Adalah : Rp.%.2f \n",Saldo);
                break;

            case 2:

                printf("Anda Ingin Membeli Pulsa dengan Nominal Rp.15.000\n");
                printf("Apakah Anda Yakin Untuk Membeli?[y/t]\n");
                printf("Masukan Pilihan Anda >> ");
                getchar();
                scanf("%c",&yakin);
                if(yakin == 'y' || yakin == 'Y'){
                    Saldo -= 15000;   
                }
                printf("Sisa Saldo Anda Adalah : Rp.%.2f \n",Saldo);
                break;


            case 3:

                printf("Anda Ingin Membeli Pulsa dengan Nominal Rp.20.000\n");
                printf("Apakah Anda Yakin Untuk Membeli?[y/t]\n");
                printf("Masukan Pilihan Anda >> ");
                getchar();
                scanf("%c",&yakin);
                if(yakin == 'y' || yakin == 'Y'){
                    Saldo -= 20000;   
                }
                printf("Sisa Saldo Anda Adalah : Rp.%.2f \n",Saldo);
                break;

            case 4:

                printf("Anda Ingin Membeli Pulsa dengan Nominal Rp.40.000\n");
                printf("Apakah Anda Yakin Untuk Membeli?[y/t]\n");
                printf("Masukan Pilihan Anda >> ");
                getchar();
                scanf("%c",&yakin);
                if(yakin == 'y' || yakin == 'Y'){
                    Saldo -= 50000;   
                }
                printf("Sisa Saldo Anda Adalah : Rp.%.2f \n",Saldo);
                break;
            }
            system("cls");
            return Saldo;
}

int main() 
{
    int pilih;
    int pilihpulsa;
    int pilihpaket;
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
                            Saldo = nominal_pulsa(Saldo);
                            break;
                        case 2:
                            Saldo = nominal_pulsa(Saldo);
                            break;
                        case 3:
                            Saldo = nominal_pulsa(Saldo);
                            break;
                        case 4:
                            Saldo = nominal_pulsa(Saldo);
                            break;
                        }
                    }else if(pilih == 2){

                       Saldo = nominal_paket(Saldo);

                    }
                    break;

            case 5:
                system("CLS");
                Eror();
                break;

            default:
                Eror();
                break;
    

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


    }
    return 0;
}