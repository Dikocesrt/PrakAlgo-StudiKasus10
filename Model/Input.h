using namespace std;
class Input
{
    private:
        int i;
    public:
        Input(){}
        void input(string *nama, int long *nim, int *skor);
};

void Input::input(string *nama, int long *nim, int *skor){
    cout << "Menginput Data Finalis Mahasiswa" << endl;
    cout << "========================================" << endl;
    for(i=0;i<5;i++){
        cout << "Masukkan Nama Mahasiswa : ";
        cin >> nama[i];
        cout << "Masukkan NIM Mahasiswa : ";
        cin >> nim[i];
        cout << "Masukkan Score Mahasiswa : ";
        cin >> skor[i];
        cout << "----------------------------------------" << endl;
    }
}