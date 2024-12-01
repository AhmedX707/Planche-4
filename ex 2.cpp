#include <iostream>
#include <vector>
void afficherPositif(int& x, int seuil = 0) {
    if (x >= 0)
        std::cout<<x<<"\t";
}

void afficherNegatif(int& x, int seuil = 0) {
    if (x<0)
        std::cout<<x<<"\t";}
void afficherSuperieur(int&x,int seuil) {
    if (x>=seuil)
        std::cout<<x<<"\t"; }
void appliquerFiltre(std::vector<int>& vec,void(*filtre)(int&, int)) {
    int seuil=0;
    if (filtre==afficherSuperieur) {
        std::cout<<"Donner un seuil : ";
        std::cin>>seuil;}
    for (int&e:vec) {
        filtre(e, seuil);}
    std::cout << std::endl;}
int main() {
    std::vector<int>tab{-2,3,-33,7,99,6,2,-39 };
    std::cout<<"************************\n";
    std::cout<<"* 1. Afficher positif *\n";
    std::cout<<"* 2. Afficher négatif *\n";
    std::cout<<"* 3. Supérieur à      *\n";
    std::cout<<"************************\n";
    std::cout<<"Entrez votre choix : ";
    int choix;
    std::cin >>choix;
    switch(choix) {
    case 1:
        appliquerFiltre(tab,afficherPositif);
        break;
    case 2:
        appliquerFiltre(tab,afficherNegatif);
        break;
    case 3:
        appliquerFiltre(tab,afficherSuperieur);
        break;
    default:
        std::cout<<"Choix invalide.\n";
        break;
    }

    return 0;
}
