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