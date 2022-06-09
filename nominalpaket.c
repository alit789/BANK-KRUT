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
