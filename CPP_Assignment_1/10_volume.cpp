#include <iostream>
using namespace std;

//volume of cube
int volume(int a){
    return a*a*a;
}

//volume of cuboid
float volume(float l,float b,float h){
    return l*b*h;
}

//volume of cone
float volume(int r,int h){
    return (3.14*r*r*h)/3;
}

//volume of cylinder
float volume(float r1,float h1){
    return (3.14*r1*r1*h1);
}

//volume of sphere
float volume(float r){
    return (4*3.14*r*r*r)/3;
}

int main(){
    float length,breadth,heightOfCuboid,radiusOfCylinder,heightOfCylinder,radiusOfSphere;
    int ch,a,radiusOfCone,heightOfCone;
    cout<<"Enter your choice:"<<endl;
    cout<<"1. Volume of Cube."<<endl;
    cout<<"2. Volume of Cuboid."<<endl;
    cout<<"3. Volume of Cone."<<endl;
    cout<<"4. Volume of Cylinder."<<endl;
    cout<<"5. Volume of Sphere."<<endl;
    cin>>ch;

    switch(ch)
    {
    case 1:
        cout<<"Enter side of cube: ";
        cin>>a;
        cout<<"The volume of Cube is: "<<volume(a)<<endl;
        break;
    case 2:
        cout<<"Enter length, breadth and height of cuboid: ";
        cin>>length>>breadth>>heightOfCuboid;
        cout<<"The volume of Cuboid is: "<<volume(length,breadth,heightOfCuboid)<<endl;
        break;
    case 3:
        cout<<"Enter radius and height of cone: ";
        cin>>radiusOfCone>>heightOfCone;
        cout<<"The volume of Cone is: "<<volume(radiusOfCone,heightOfCone)<<endl;
        break;
    case 4:
        cout<<"Enter radius and height of cylinder: ";
        cin>>radiusOfCylinder>>heightOfCylinder;
        cout<<"The volume of Cylinder is: "<<volume(radiusOfCylinder,heightOfCylinder)<<endl;
        break;
    case 5:
        cout<<"Enter radius of sphere: ";
        cin>>radiusOfSphere;
        cout<<"The volume of Sphere is: "<<volume(radiusOfSphere)<<endl;
        break;
    default:
        cout<<"Wrong choice!";
        break;
    }
    return 0;
}