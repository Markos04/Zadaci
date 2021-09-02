#include <iostream>
using namespace std;

int main(){
    int slog, deca, prvo_dete, posl_dete;

    cin >> slog >> deca >> prvo_dete;
    int i = prvo_dete;
    while (i <= slog){
        if (i == deca)
        {
            i = 0;
            continue;
        }

        if(i == slog)
        {
            posl_dete == i;
            break;
        }
        i++;
    }

    cout << posl_dete << endl;
    return 0;
}