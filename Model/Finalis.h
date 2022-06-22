using namespace std;
class Finalis
{
    private:
        int i;
    public:
        Finalis(){}
        void input(string *nama, int long *nim);
        void output(string *nama, int long *nim);
};

void Finalis::input(string *nama, int long *nim){
    cout << "Menginput Data Finalis Mahasiswa" << endl;
    cout << "========================================" << endl;
    for(i=0;i<5;i++){
        cout << "Masukkan Nama Mahasiswa : ";
        cin >> nama[i];
        cout << "Masukkan NIM Mahasiswa : ";
        cin >> nim[i];
        cout << "----------------------------------------" << endl;
    }
}

void Finalis::output(string *nama, int long *nim){
    cout << "Output Data Mahasiswa Finalis" << endl;
    cout << "========================================" << endl;
    cout << "Daftar Finalis : " << endl;
    cout << "--------------------------" << endl;
    for(i=0;i<5;i++){
        cout << "Nama Mahasiswa ke-" << i+1 << " = " << nama[i] << endl;
        cout << "NIM Mahasiswa ke-" << i+1 << " = " << nim[i] << endl;
        cout << "--------------------------" << endl;
    }
}