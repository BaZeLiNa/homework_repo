#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include <algorithm>
#include "lab5.cpp"
using namespace std;
int main(){
    Pet dog("Tyzik", DOG, 5, "woof", 16);
    Pet cat("Barsik", CAT, 3, "mur", 4);
    Pet parrot("Kesha", PARROT, 1, "Hello stupid human!", 1);
    Pet turtle("Anton", TURTLE, 112, " *none*", 3);
    Pet hamster("Stepa", HAMSTER, 2, "pipipi", 1);
    vector<Pet> somePets {dog, cat, parrot, turtle, hamster};
    vector<Pet> pets {parrot, hamster, dog, cat};
    ageSort(&somePets);
    printPets(somePets); 
    areFriends(pets);
    Home SweetHome(somePets);
    cout << parrot.isPolite(parrot) << endl;
    return 0;
}