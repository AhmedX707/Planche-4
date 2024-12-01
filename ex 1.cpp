#include <bits/stdc++.h>
using namespace std;

template <class T>
void echange(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <class T>
void tri(T tab[], int b) {
    for (int i = 0; i < b; i++) {
        int min = i;
        for (int j = i + 1; j < b; j++) {
            if (tab[j] < tab[min]) {
                min = j;
            }
        }
        if (min != i)
            echange(tab[i], tab[min]);
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
    	cout<<"donner element de tableau";
        cin >> a[i];
    }
    tri(a, n);
    cout<<"tableau apres le tri"<<endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
