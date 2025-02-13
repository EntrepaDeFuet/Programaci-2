#include <iostream>

using namespace std;

double harmonic (int n){
    double harm = 0;
    for (int i = 1; i < n+1; i++){
        harm += (1.0/i);
    }
    return harm;
}

int main(){

    int n;

    cout << "Quin nombre harmònic vols calcular?" << endl;

    cin >> n;

    double harm = harmonic(n);

    cout << "El nombre harmònic " << n << " és: " << harm << endl;

    return 0;
}