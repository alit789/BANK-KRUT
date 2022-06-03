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