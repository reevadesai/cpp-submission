#include <iostream>
using namespace std;

int superDigit(long long n) {
    if (n < 10)
        return n;

    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return superDigit(sum);
}

int main() {
    string n;
    int k;

    cout << "Enter number (as string): ";
    cin >> n;

    cout << "Enter repetition factor (k): ";
    cin >> k;

    long long initialSum = 0;

    for (int i = 0; i < n.length(); i++)
    {
        initialSum += n[i] - '0';
    }
    long long total = initialSum * k;
    int result = superDigit(total);

    cout << "Super Digit: " << result << endl;

    cout<<"\n\n24CE026_Reeva Desai\n";

    return 0;
}

