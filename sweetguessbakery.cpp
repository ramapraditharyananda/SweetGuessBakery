#include <iostream>
using namespace std;

void tampilkanDaftarHarga(string jenis, string kue[], int ukuran[], int harga[], int jumlah) {
    cout << "===== " << jenis << " =====" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << kue[i] << " (" << ukuran[i] << " servings) - Rp " << harga[i] << endl;
    }
    cout << "============================" << endl;
}

// Fungsi untuk menampilkan menu dan meminta input pengguna
void tampilkanMenuKue() {
    int pilihan;

    string goldSeries[] = {"Magnifique", "Gold Opera"};
    int ukuranGold[] = {8, 12, 24, 32, 48};
    int hargaGold[] = {420000, 620000, 1280000, 1710000, 2490000};

    string cakeSeries[] = {
        "Regal Chocolate", "Blueberry Cheesecake", "Red Velvet", "Mix Fruit Cheesecake", 
        "Strawberry Shortcake", "Mango Mousse", "Lemon Tart", "Carrot Cake"
    };
    int ukuranCake[] = {8, 12, 12, 24, 8, 12, 12, 12};
    int hargaCake[] = {355000, 520000, 620000, 1430000, 450000, 550000, 500000, 600000};

    string premiereSeries[] = {"Chocomaltine Cheesecake", "Dark Storm", "Coffee Crunch"};
    int ukuranPremiere[] = {4, 8, 12, 24, 32};
    int hargaPremiere[] = {205000, 420000, 520000, 1060000, 1430000};

    string operaCollection[] = {
        "Milk Chocolate", "Black Forest", "Vanilla Fruit", "Classic Opera", "Matcha Opera",
        "Tiramisu", "Triple Chocolate"
    };
    int ukuranOpera[] = {8, 8, 12, 12, 12, 12, 12};
    int hargaOpera[] = {315000, 450000, 560000, 910000, 1180000, 700000, 800000};

    string signatureCollection[] = {
        "Chocolate Signature", "Cheesecake Signature", "Deluxe Mix Signature",
        "Festive Mix Signature", "Classic Mix Signature", "Twin Cake Signature"
    };
    int ukuranSignature[] = {8, 8, 12, 24, 32, 48};
    int hargaSignature[] = {315000, 355000, 450000, 910000, 1180000, 1800000};

    cout << "====== SWEET GUESS BAKERY ======" << endl;
    cout << "1. Gold Series" << endl;
    cout << "2. Cake Series" << endl;
    cout << "3. Premiere Series" << endl;
    cout << "4. Opera Collection" << endl;
    cout << "5. Signature Collection" << endl;
    cout << "======================" << endl;
    cout << "Masukkan pilihan Anda (1-5): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            tampilkanDaftarHarga("Gold Series", goldSeries, ukuranGold, hargaGold, 2);
            break;
        case 2:
            tampilkanDaftarHarga("Cake Series", cakeSeries, ukuranCake, hargaCake, 8);
            break;
        case 3:
            tampilkanDaftarHarga("Premiere Series", premiereSeries, ukuranPremiere, hargaPremiere, 3);
            break;
        case 4:
            tampilkanDaftarHarga("Opera Collection", operaCollection, ukuranOpera, hargaOpera, 7);
            break;
        case 5:
            tampilkanDaftarHarga("Signature Collection", signatureCollection, ukuranSignature, hargaSignature, 6);
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
    }
}

void mainMenu();

void pilihGameKue() {
    srand(time(0));  // Inisialisasi angka acak dengan menggunakan waktu saat ini

    int pilihan; 
    cout << "SELAMAT DATANG DI SWEET GUESS" << endl;
    cout << " ⋆｡‧˚ʚ🍒 ɞ˚ ˚🍰｡˚ ᡣ𐭩 ⋆" << endl;
    cout << "Apakah Anda siap bermain game?" << endl;
    cout << "Ketik 1 untuk Ya" << endl;
    cout << "Ketik 2 untuk Tidak" << endl;
    cout << "Masukkan pilihan anda : ";
    cin >> pilihan;
    
    if (pilihan == 2) {
        cout << "Game Sweet Guess telah terlupakan well 🤟" << endl;
        mainMenu();  // Kembali ke menu utama jika pengguna memilih 'Tidak'
        return;
    } else if (pilihan != 1) {
        cout << "Selamat, Anda dapat bermain, well 🤟" << endl;
        return;
    }
    
    int pilihanAngka;

    while (true) {
        int kue = rand() % 9 + 1;  // Menghasilkan angka acak antara 1 dan 9

        cout << "===================" << endl;
        cout << "|  1  |  2  |  3  |" << endl;
        cout << "|  4  |  5  |  6  |" << endl;
        cout << "|  7  |  8  |  9  |" << endl;
        cout << "===================" << endl;

        cout << "Silahkan pilih salah satu angka di atas untuk mencari sweet cake: ";
        cin >> pilihanAngka;
        
        if (pilihanAngka == kue) {
            cout << "Yey, Anda mendapatkan SWEET CAKE! 🍰🤟" << endl;
        } else {
            cout << "Salah, sweet cake berada di angka nomor " << kue << endl;
        }

        char lanjut;
        cout << "Apakah Anda ingin bermain lagi? (y/n): ";
        cin >> lanjut;

        if (lanjut != 'y') {
            cout << "Terima kasih telah bermain game kami! 🎉" << endl;
            mainMenu();  // Kembali ke menu utama setelah selesai bermain
            break;
        }
    }
}

void mainMenu() {
    int pilihanUtama;
    cout << "===== SWEET GUESS BAKERY ======" << endl;
    cout << "1. Menu Kue Sweet Guess" << endl;
    cout << "2. Game Kue by Sweet Guess" << endl;
    cout << "========================" << endl;
    cout << "Masukkan pilihan Anda (1 atau 2): ";
    cin >> pilihanUtama;

    switch (pilihanUtama) {
        case 1:
            tampilkanMenuKue();  // Menampilkan menu kue
            break;
        case 2:
            pilihGameKue();  // Memulai game kue
            break;
        default:
            cout << "Pilihan tidak valid. Kembali ke menu utama." << endl;
            mainMenu();  // Kembali ke menu utama jika pilihan tidak valid
            break;
    }
}

int main() {
    mainMenu();  // Menampilkan menu utama saat program dijalankan
    return 0;
}
