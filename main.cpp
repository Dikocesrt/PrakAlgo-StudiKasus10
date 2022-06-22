#include<iostream>
#include "Model/Input.h"
#include "Model/Proses.h"
#include "Model/Output.h"
using namespace std;

int main(){
    Input objectInput = Input();
    Proses objectProses = Proses();
    Output objectOutput = Output();
    string nama[100];
    int long nim[100];
    int skor[100];
    objectInput.input(nama, nim, skor);
    objectProses.proses(nama, nim, skor);
    objectOutput.output(nama,nim, skor);
    return 0;
}