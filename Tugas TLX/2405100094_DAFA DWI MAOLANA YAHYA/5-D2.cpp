// 2.Berapa buah bintang yang dicetak oleh potongan program berikut?

for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= i; j++) {
        if (j % 2 == 0) {
            cout << "*";
            break;
        }
    }
}

// Program ini menggunakan dua loop for bersarang. Loop luar berjalan dari 1 hingga 4, dan loop dalam berjalan dari 1 hingga nilai i. Di dalam loop dalam, terdapat kondisi if yang memeriksa apakah j adalah bilangan genap (j % 2 == 0). Jika iya, program mencetak satu bintang * dan keluar dari loop dalam dengan break.

// Saat i = 1: Loop dalam berjalan 1 kali. j = 1 bukan bilangan genap, jadi tidak mencetak bintang.
// Saat i = 2: Loop dalam berjalan 2 kali. j = 2 adalah bilangan genap, jadi mencetak satu bintang dan keluar dari loop dalam.
// Saat i = 3: Loop dalam berjalan 3 kali. j = 2 adalah bilangan genap, jadi mencetak satu bintang dan keluar dari loop dalam.
// Saat i = 4: Loop dalam berjalan 4 kali. j = 2 adalah bilangan genap, jadi mencetak satu bintang dan keluar dari loop dalam.

// Total bintang yang dicetak: 1 (untuk i = 2) + 1 (untuk i = 3) + 1 (untuk i = 4) = 3 bintang

// Jadi, potongan program tersebut mencetak 3 bintang.
