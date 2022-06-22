using namespace std;
class Output
{
    private:
        int i;
    public:
        Output(){}
        void output(string *nama, int long *nim, int *skor);
};

void Output::output(string *nama, int long *nim, int *skor){
    cout << "Output Data Mahasiswa Finalis" << endl;
    cout << "========================================" << endl;
    cout << "Daftar Finalis : " << endl;
    cout << "--------------------------" << endl;
    for(i=0;i<5;i++){
        cout << "Nama Mahasiswa ke-" << i+1 << " = " << nama[i] << endl;
        cout << "NIM Mahasiswa ke-" << i+1 << " = " << nim[i] << endl;
        cout << "Score Mahasiswa ke-" << i+1 << " = " << skor[i] << endl;
        cout << "--------------------------" << endl;
    }
}