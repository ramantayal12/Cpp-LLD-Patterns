#include<bits/stdc++.h>
using namespace std;

class Vehicle{

    public:
    virtual int getNumberOfTyres() = 0;
    virtual string getType() = 0;
};

class TwoWheeler : public Vehicle{

    public:
    int getNumberOfTyres(){
        return 2;
    }
    string getType(){
        return "Two Wheeler";
    }
};

class FourWheeler : public Vehicle{

    public:
    int getNumberOfTyres(){
        return 4;
    }
    string getType(){
        return "Four Wheeler";
    }
};


// Factory Method 

class Factory{
    private:
    int numberOfTyres;

    public:
    Vehicle* getVehicle(int numberOfTyres){
        try{
            if( numberOfTyres == 2 ) return new TwoWheeler();
            else if( numberOfTyres == 4 ) return new FourWheeler();
            else{
                throw "Invalid Vehicle";
            }
        }
        catch(const char *msg){
            cout<<msg<<endl;
        }
    }

};

int main(){

    int tyres;
    cout<<"Enter Number of Tyres : ";
    cin>>tyres;

    Factory *factory = new Factory();
    Vehicle *vehicle = factory->getVehicle(tyres);
    cout<<"Type of Vehicle Based on Tyres is : "<<vehicle->getType()<<endl;
    return 0;
}