
/*#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, v[1000000];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int tot = 0;
    for (int i = 0; i < n - 1; i++) {
        if (v[i] == 0) {
            cout << tot << endl;
            continue;
        }
        int t;
        for (t = 0; i + pow(2, t) < n; t++);
        t--;
        tot += v[i];
        v[i + (int)(pow(2, t))] += v[i];
        v[i] = 0;
        cout << tot <<endl;
    }

    return 0;
}*/


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
   int arr[n];
    arr[0] = 0;
    arr[1] = 1;
    for (size_t i = 2; i < n; i++)
    {
        arr[i] = arr[i-1] + arr[i -2];
    }

    cout<<arr[n];
    
}