#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

enum petKind
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
    Pet(string name, int breed, int age, string greeting, int mass);
    
    bool isPolite (Pet pet);
    
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