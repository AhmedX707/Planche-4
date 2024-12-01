#include <bits/stdc++.h>
using namespace std;

struct produit {
    string type;
    int prixh;
    bool sold;
};

double calcpr(const produit& p, double tax = 0.19, double discount = 0.0) {
    if (p.type == "luxe")
        tax = 0.25;

    double pttc = (1 + tax) * p.prixh;

    if (p.sold) {
        discount = 0.20;
        pttc *= (1 - discount);
    }

    return pttc;
}

int main() {
    vector<produit> produits = {
        {"luxe", 1000, false},
        {"standard", 200, true},
        {"luxe", 500, true},
        {"standard", 150, false}
    };
    for (const auto& p : produits) {
        cout << "Produit de type " << p.type
             << " (Prix HT: " << p.prixh
             << ", Solde: " << (p.sold ? "Oui" : "Non") << "): ";
        cout << "Prix net TTC: " << calcpr(p) << " Dinar" << endl;
    }

    return 0;
}