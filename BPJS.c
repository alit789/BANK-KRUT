float BPJS(float Saldo){
	char KTP[16];
	char Nama[100];
	const float Bayar = 42000.00;

	printf("Menu Pembayaran BPJS \n\n");
	printf("Masukkan No KTP : "); fflush(stdin); gets(KTP);
	printf("Masukkan Nama : "); fflush(stdin); gets(Nama);

	printf("\nTotal Pembayaran Sebesar : Rp.%.f \n" , Bayar);
	printf("Sisa Saldo di rekening anda saat ini : Rp. %.2f\n" , Saldo);

	int pilihan;
    if(Saldo<42000){
        printf("Saldo Anda Tidak Cukup\n");
        exit(0);
    }
	printf("<1.ya/2.tidak> : ");
    fflush(stdin);
    scanf("%d" , &pilihan);


    if(pilihan == 1){
        Saldo = Saldo - Bayar;
    }
    printf("INGET BAYAR BIAR KAGA DENDA \n");
	printf("Sisa Saldo di rekening anda saat ini : Rp. %.2f\n" , Saldo);
	return Saldo;
}