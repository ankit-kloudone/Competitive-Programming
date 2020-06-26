#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    meal_cost+=(tip_percent*meal_cost)/100+(tax_percent*meal_cost)/100;
    long long int myInt = std::llround(meal_cost);
    cout<<"The total meal cost is "<<myInt<<"dollars.";

}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}