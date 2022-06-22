using namespace std;
class Proses
{
    private:
        int i, j, temp;
        string temp2;
    public:
        Proses(){}
        void proses(string *nama, int long *nim, int *skor);
};

void Proses::proses(string *nama, int long *nim, int *skor){
    for(i=0;i<5;i++){
        for(j=0;j<(5-i-1);j++){
            if(skor[j] > skor[j+1]){
                temp = skor[j];
                skor[j] = skor[j+1];
                skor[j+1] = temp;

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