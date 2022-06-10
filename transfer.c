float transfer (float saldo);
printf("\n\n      MASUKKAN NOMINAL MINIMAL Rp 50.000\n\n");
printf("                   Rp "); scanf("%llu",&nominal);
printf("\n\n     1. BENAR\n\n                  2.KELUAR\n\n                  3.KEMBALI KE MENU");
printf("\n\n\tPILIHAN : ");
switch (input) {
        case 1:
                if((nominal%50000 == 0) && saldo > nominal)
                {
                        temp(&tmp, nominal);
                        inputRekening();
                }
                else
                {
printf("\t\t                    MAAF");
                        cekSaldo();
break;
                }
                break;
        case 2:
                keluar();
default:
menu();
                break;
        }
