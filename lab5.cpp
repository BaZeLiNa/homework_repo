#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include <algorithm>
using namespace std;

enum kind
{
    DOG, CAT, PARROT, TURTLE, HAMSTER
};

class Pet
{
private:
string name;
int breed;
int age;
string greeting;
int mass;

public:
    Pet(string name, int breed, int age, string greeting, int mass)
    {
        this -> name = name;
        this -> breed = breed;
        this -> age = age;
        this -> greeting = greeting;
        this -> mass = mass;
        //cout << "it work"<< endl;
    };
    
    bool isPolite ()
    {
        bool check = false;
        for (int n = 0; n <= greeting.length()-5; n++) {
        if (greeting.substr(n, 5)=="Hello"){
            check = true;
            break;
        }
        }
        if (check) cout << name << ": is polite" << endl;
        else cout << name << ": isn't polite" << endl; 
        cout << endl;  
    return check;
    }
    
    int getAge (){
        return age;
    }
    
    string getName(){
        return name;
    }
    
    ~Pet(){ 
        //cout << "done"<< endl;
        };
};

class Home
{
private:

vector<Pet> somePet;
public:
    Home(vector<Pet> somePet){
        this->somePet = somePet;
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

void ageSort (vector<Pet> *somePet){
   sort(somePet->begin(), somePet->end(), [](Pet &e1, Pet &e2){
        return e1.getAge() < e2.getAge();
    }); 
}

void print (vector<Pet> somePet) {
    for (int i = 0; i < somePet.size(); i++)
    {
        cout << somePet[i].getAge() << "\t"<< somePet[i].getName() << endl;
    }
    cout << endl;
}

int main(){
    Pet dog("Tyzik", DOG, 5, "woof", 16);
    Pet cat("Barsik", CAT, 3, "mur", 4);
    Pet parrot("Kesha", PARROT, 1, "Hello stupid human!", 1);
    Pet turtle("Anton", TURTLE, 112, " *none*", 3);
    Pet hamster("Stepa", HAMSTER, 2, "pipipi", 1);
    vector<Pet> somePet {dog, cat, parrot, turtle, hamster};
    vector<Pet> pets {parrot, hamster, dog, cat};
    ageSort(&somePet);
    print(somePet); 
    areFriends(pets);
    Home SweetHome(somePet);
    cout << parrot.isPolite() << endl;
    return 0;
}