#include<iostream>
#include<vector>
    using std::vector;
    using std::cout, std::cin, std::endl;
int main(){
    vector<int> x, y;
    int m = 0, ab = 0, ord = 0;
    double valor = 0.00;
        cin >> m;
            for(int a = 0; a < m; a++){
                cin >> ab >> ord;
                x.push_back(ab);
                y.push_back(ord);
            }
        cin >> valor;
        double resul = 0.00, cima = 1.00, baixo = 1.00;
            for(int i = 0; i < m; i++){
                for(int j = 0; j < m; j++){
                    if(j != i){
                        cima *= (valor - x[j]);
                        baixo *= (x[i] - x[j]);
                    }
                }
                resul = resul + y[i] * (cima/baixo);
                cima = 1;
                baixo = 1;
            }
        cout << resul << endl;


    return 0;
}