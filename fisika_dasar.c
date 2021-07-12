#include <stdio.h>
#include <math.h>
#define PI 3.141592654
main()
{
    char opsi;
    int milih_menu;
    // variable vektor usaha
    int f, cosinus, s;
    // variable Vektor Luas Jajaran Genjang
    int panjang, lebar, sinus;
    // variable dot product
    float ai, aj, ak, bi, bj, bk;
    // variable energi potensial
    float m, g, h;
    // variable energi kinetik
    float v;
    float w, luas, dot_product, cross_product, a_titik_b, a_kali_b, a, b, ep, ek;

    menu_utama:
    system("cls");
    printf("Selamat Datang\n");
    printf("------------------------------------------------\n");
    printf("Pilih Menu Rumus Fisika :\n");
    printf("------------------------------------------------\n");
    printf("1. Vektor\n");
    printf("2. Energi\n");
    printf("0. Untuk keluar program\n");
    printf("------------------------------------------------\n");
    printf("Masukkan angka untuk memilih rumus: ");
    scanf("%d", &milih_menu);

    switch(milih_menu)
    {
    case 1:
        sub_menu_1:
        system("cls");
        printf("------------------------------------------------\n");
        printf("Pilih Menu Rumus Vektor :\n");
        printf("------------------------------------------------\n");
        printf("1. Vektor Usaha\n");
        printf("2. Vektor Luas Jajaran Genjang\n");
        printf("3. Vektor Dot Product\n");
        printf("4. Vektor Cross Product\n");
        printf("0. Kembali ke menu utama\n");
        printf("------------------------------------------------\n");
        printf("Masukkan angka untuk memilih rumus Vektor: ");
        scanf("%d", &milih_menu);
        printf("------------------------------------------------\n");
        switch(milih_menu)
        {
            case 1:
                do
                {
                    printf("Rumus: W = F . cos . s\n");
                    printf("------------------------------------------------\n");
                    printf("Masukkan Nilai F : ");
                    scanf("%d", &f);
                    printf("Masukkan Nilai cos : ");
                    scanf("%d", &cosinus);
                    printf("Masukkan Nilai s : ");
                    scanf("%d", &s);
                    // Rumus
                    w = f * cos((cosinus * PI) / 180) * s;
                    printf("W = %f N\n", w);
                    printf("------------------------------------------------\n");
                    printf("Apakah ingin menghitung lagi? y/n\n>");
                    scanf(" %c",&opsi);
                    printf("------------------------------------------------\n");
                } while(opsi=='y' || opsi=='Y');
                goto sub_menu_1;
                break;
            case 2:
                do
                {
                    printf("Rumus: L = p . l . sin sudut vektor\n");
                    printf("------------------------------------------------\n");
                    printf("Masukkan Nilai panjang : ");
                    scanf("%d", &panjang);
                    printf("Masukkan Nilai lebar : ");
                    scanf("%d", &lebar);
                    printf("Masukkan Nilai sin : ");
                    scanf("%d", &sinus);
                    // Rumus
                    luas = panjang * lebar * sin(sinus * (PI / 180));
                    printf("L = %f cm 2\n", luas);
                    printf("------------------------------------------------\n");
                    printf("Apakah ingin menghitung lagi? y/n\n>");
                    scanf(" %c",&opsi);
                    printf("------------------------------------------------\n");
                } while(opsi=='y' || opsi=='Y');
                goto sub_menu_1;
                break;
            case 3:
                do
                {
                    printf("Rumus: cos theta = a . b / a b\n");
                    printf("------------------------------------------------\n");
                    printf("Masukkan Nilai ai : ");
                    scanf("%f", &ai);
                    printf("Masukkan Nilai aj : ");
                    scanf("%f", &aj);
                    printf("Masukkan Nilai ak : ");
                    scanf("%f", &ak);

                    printf("Masukkan Nilai bi : ");
                    scanf("%f", &bi);
                    printf("Masukkan Nilai bj : ");
                    scanf("%f", &bj);
                    printf("Masukkan Nilai bk : ");
                    scanf("%f", &bk);
                    // Rumus
                    a_titik_b = (ai * bi) + (aj * bj) + (ak * bk);
                    a = sqrt(((ai * ai) + (aj * aj) + (ak * ak)));
                    b = sqrt(((bi * bi) + (bj * bj) + (bk * bk)));
                    a_kali_b = a * b;
                    dot_product = acos(a_titik_b / a_kali_b) * 180 / PI;
                    printf("dot product = %f degrees\n", dot_product);
                    printf("------------------------------------------------\n");
                    printf("Apakah ingin menghitung lagi? y/n\n>");
                    scanf(" %c",&opsi);
                    printf("------------------------------------------------\n");
                } while(opsi=='y' || opsi=='Y');
                goto sub_menu_1;
                break;
            case 4: 
                do
                {
                    printf("Rumus: sin theta = a . b / a b\n");
                    printf("------------------------------------------------\n");
                    printf("Masukkan Nilai ai : ");
                    scanf("%f", &ai);
                    printf("Masukkan Nilai aj : ");
                    scanf("%f", &aj);
                    printf("Masukkan Nilai ak : ");
                    scanf("%f", &ak);

                    printf("Masukkan Nilai bi : ");
                    scanf("%f", &bi);
                    printf("Masukkan Nilai bj : ");
                    scanf("%f", &bj);
                    printf("Masukkan Nilai bk : ");
                    scanf("%f", &bk);
                    // Rumus
                    a_titik_b = (ai * bi) + (aj * bj) + (ak * bk);
                    a = sqrt(((ai * ai) + (aj * aj) + (ak * ak)));
                    b = sqrt(((bi * bi) + (bj * bj) + (bk * bk)));
                    a_kali_b = a * b;
                    cross_product = asin(a_titik_b / a_kali_b) * 180 / PI;
                    printf("dot product = %f degrees\n", cross_product);
                    printf("------------------------------------------------\n");
                    printf("Apakah ingin menghitung lagi? y/n\n>");
                    scanf(" %c",&opsi);
                    printf("------------------------------------------------\n");
                } while(opsi=='y' || opsi=='Y');
                goto sub_menu_1;
                break;
            case 0:
                goto menu_utama;
            default:
                goto menu_utama;
        }
        break;
    case 2:
        sub_menu_2:
        system("cls");
        printf("------------------------------------------------\n");
        printf("Pilih Menu Rumus Energi :\n");
        printf("------------------------------------------------\n");
        printf("1. Energi Potensial\n");
        printf("2. Energi Kinetik\n");
        printf("0. Kembali ke menu utama\n");
        printf("------------------------------------------------\n");
        printf("Masukkan angka untuk memilih rumus Energi: ");
        scanf("%d", &milih_menu);
        printf("------------------------------------------------\n");
        switch(milih_menu)
        {
            case 1:
                do
                {
                    printf("Rumus: Ep = m . g . h\n");
                    printf("------------------------------------------------\n");
                    printf("Masukkan Nilai m : ");
                    scanf("%f", &m);
                    printf("Masukkan Nilai g : ");
                    scanf("%f", &g);
                    printf("Masukkan Nilai h : ");
                    scanf("%f", &h);
                    // Rumus
                    ep = m * g * h;
                    printf("Ep = %f J\n", ep);
                    printf("------------------------------------------------\n");
                    printf("Apakah ingin menghitung lagi? y/n\n>");
                    scanf(" %c",&opsi);
                    printf("------------------------------------------------\n");
                } while(opsi=='y' || opsi=='Y');
                goto sub_menu_2;
                break;
            case 2:
                do
                {
                    printf("Rumus: Ek = 1/2 . m . v^2\n");
                    printf("------------------------------------------------\n");
                    printf("Masukkan Nilai m : ");
                    scanf("%f", &m);
                    printf("Masukkan Nilai v : ");
                    scanf("%f", &v);
                    // Rumus
                    ek = m * v * v / 2;
                    printf("Ek = %f J\n", ek);
                    printf("------------------------------------------------\n");
                    printf("Apakah ingin menghitung lagi? y/n\n>");
                    scanf(" %c",&opsi);
                    printf("------------------------------------------------\n");
                } while(opsi=='y' || opsi=='Y');
                goto sub_menu_2;
                break;
            case 0:
                goto menu_utama;
            default:
                goto menu_utama;
        }
        break;
    case 0:
        printf("\nTerimakasih sudah menggunakan program\n");
        break;
    default:
        printf("\nAnda Memasukkan angka yang salah\n");
        break;
    }
}
