#include iostream
#include string
using namespace std;

int tarif(char kode_buku) {
    if (kode_buku == 'C') {
        return 500;
    }
    else if (kode_buku == 'K') {
        return 700;
    }
    else if (kode_buku == 'N') {
        return 100;
    }
    else {
        return 0;
    }
}

int main() {
    string nama_penyewa;
    char kode_buku;
    int banyak_pinjam;

    cout  Perpustakaan Kecil-Kecilan  endl;
    cout  -------------------------------------------  endl;
    cout  Nama Penyewa Buku ;
    getline(cin, nama_penyewa);
    cout  Kode Buku [CKN] ;
    cin  kode_buku;
    cout  Banyak Pinjam ;
    cin  banyak_pinjam;

    int tarif_sewa = tarif(kode_buku);
    int jumlah_bayar = tarif_sewa  banyak_pinjam;

    cout  endl;
    cout  Tarif Sewa Rp.   tarif_sewa  endl;
    if (kode_buku == 'C') {
        cout  Jenis Buku  CERPEN  endl;
    }
    else if (kode_buku == 'K') {
        cout  Jenis Buku  KOMIK  endl;
    }
    else if (kode_buku == 'N') {
        cout  Jenis Buku  NOVEL  endl;
    }
    else {
        cout  Jenis Buku  Tidak Diketahui  endl;
    }
    cout  Penyewa dengan Nama   nama_penyewa  endl;
    cout  Jumlah Bayar Penyewaan Sebesar Rp.   jumlah_bayar  endl;

    return 0;
}
