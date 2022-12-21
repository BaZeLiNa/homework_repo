#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include <algorithm>
#include"lab5Header.h"
using namespace std;

Pet::Pet(string name, int breed, int age, string greeting, int mass){
        this -> name = name;
        this -> breed = breed;
        this -> age = age;
        this -> greeting = greeting;
        this -> mass = mass;
        //cout << "it work"<< endl;
    };
bool Pet::isPolite (Pet pet)
    {
        int helloLenght = 5;
        bool check = false;
        for (int n = 0; n <= greeting.length()-helloLenght; n++) {
        if (greeting.substr(n, helloLenght)=="Hello"){
            check = true;
            break;
        }
        }
        if (check) cout << pet.getName() << ": is polite" << endl;
        else cout << pet.getName() << ": isn't polite" << endl; 
        cout << endl;  
    return check;
    }

class Home
{
private:
vector<Pet> somePets;
public:
    Home(vector<Pet> somePets){
        this->somePets = somePets;
        cout << "AAAAAAAA"<<endl;
    }
    
    ~Home(){
        cout << "destructor" << endl;
    };
};

void areFriends (vector<Pet> pets){
    for(int j = 0; j < pets.size(); j++){
    for (int i = j+1; i < pets.size(); i++)
    {
        if (fabs(pets[j].getAge() - pets[i].getAge())<2) {
        cout << pets[j].getName()<< " and "<< pets[i].getName() << ": Friend" << endl;
        }
        else cout << pets[j].getName()<< " and "<< pets[i].getName() << ": Not friend" << endl;
    }
    }
    cout << endl;
}

void ageSort (vector<Pet> *somePets){
   sort(somePets->begin(), somePets->end(), [](Pet &first, Pet &second){
        return first.getAge() < second.getAge();
    }); 
}

void printPets (vector<Pet> somePets) {
    for (int i = 0; i < somePets.size(); i++)
    {
        cout << somePets[i].getAge() << "\t"<< somePets[i].getName() << endl;
    }
    cout << endl;
}

