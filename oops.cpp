#include<bits/stdc++.h>
using namespace std;
class Animal{ 
    // state or properties
    private:
    int weight;
    public:
    int age;
    string name;
//    default constructor
    Animal(){
        this->weight=0;
        this->age=0;
        this->name="";
        cout<<"Constructor called "<<endl;
    }
    Animal(int weight){
        this->weight=weight;
        cout<<"Parameter Constructor 1 is called "<<endl;
    }
    Animal(int weight , int age){
        this->weight=weight;
        this->age=age;
        cout<<"Parameter Constructor 2 is called "<<endl;
    }
    Animal(Animal& obj){
         this->age=obj.age;
         this->name=obj.name;
         this->weight=obj.weight;
         cout<<"I am inside copy Constructor "<<endl;
    }
    // bheavious function or method
    void eat(){
        cout<<"Khana ho gaya "<<endl;
    }

    void sleep(){
        cout<<"Soo leye bhai sb"<<endl;
    }

    // getter 
    int getWeight(){
        return weight;
    }
    // setter
    void setWeight(int w){
        weight=w;
    }

};
int main(){
    Animal rahul;

    // Animal * sur=new Animal;
    // rahul.age=7;
    // rahul.name="Lion";
    // cout<<rahul.age<<endl;
    // cout<<rahul.name<<endl;
    rahul.setWeight(50);
    cout<<"Weight of Rahul : "<<rahul.getWeight()<<endl;
    // rahul.eat();
    // rahul.sleep();
    Animal Raa(3);
    Animal kutta(2,3);
    Animal pq=rahul;
    cout<<"Weight of pq : "<<pq.getWeight()<<endl;
    Animal animal1(pq);
    return 0;
}