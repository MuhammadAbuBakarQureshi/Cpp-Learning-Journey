#include <iostream>

using namespace std;

int sum(int n){

    int answer = 0;

    for (int i = 1; i <= n; i++){

        answer += i;
    }
    
    return answer;
}

int main(){

    int n;

    cout << "Input the number : ";

    cin >> n;

    cout << sum(n) << endl;

    return 0;
}