#include <iostream>

using namespace std;

int main()
{
    int v_kappa, j_kappa;
    int v_lambda, j_lambda;
    int v_h, d_h, j_h;

    cin >> v_kappa >> j_kappa;
    cin >> v_lambda >> j_lambda;
    cin >> v_h >> d_h >> j_h;

    long long kappa_combinations = static_cast<long long>(v_kappa) * j_kappa;
    long long lambda_combinations = static_cast<long long>(v_lambda) * j_lambda;
    long long heavy_combinations = static_cast<long long>(v_h) * d_h * j_h;

    long long total_combinations = (kappa_combinations + lambda_combinations) * heavy_combinations;

    cout << total_combinations << endl;

    return 0;
}