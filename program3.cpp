
#include<iostream>
 using namespace std;
   

int main() {
    int n;
    cin >> n;

    int a[n], count[100001] = {0};

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        count[a[i]]++;
    }

    int x = 0, ans = 0;

    for (int i = 0; i < 100001; i++)
        if (count[i] > x)
            x = count[i];

    for (int i = 0; i < 100001; i++)
        if (count[i] == x)
            ans++;

    cout << ans;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int freq[100001] = {0};
    int x;

    // Frequency count
    for (int i = 0; i < n; i++) {
        cin >> x;
        freq[x]++;
    }

    int mx = 0, ans = 0;

    // Find maximum frequency
    for (int i = 0; i < 100001; i++)
        if (freq[i] > mx)
            mx = freq[i];

    // Count favourite singers
    for (int i = 0; i < 100001; i++)
        if (freq[i] == mx)
            ans++;

    cout << ans;
    return 0;
}


