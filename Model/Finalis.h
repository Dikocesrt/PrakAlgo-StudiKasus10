using namespace std;
class Finalis
{
    private:
        int i, j, temp;
        string temp2;
    public:
        Finalis(){}
        void input(string *nama, int long *nim);
        void proses(string *nama, int long *nim);
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

void Finalis::proses(string *nama, int long *nim){
    for(i=0;i<5;i++){
        for(j=0;j<(5-i-1);j++){
            if(nim[j] > nim[j+1]){
                temp = nim[j];
                nim[j] = nim[j+1];
                nim[j+1] = temp;

                temp2 = nama[j];
                nama[j] = nama[j+1];
                nama[j+1] = temp2;
            }
        }
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