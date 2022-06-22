#include<iostream>
#include "Model/Finalis.h"
using namespace std;

int main(){
    Finalis objectFinalis = Finalis();
    string nama[100];
    int long nim[100];
    objectFinalis.input(nama, nim);
    objectFinalis.output(nama,nim);
    return 0;
}