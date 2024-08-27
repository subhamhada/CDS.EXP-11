# EXPERIMENT-11

## Aim :
To study and implement Classes and Objects

## Software :
vs code

## Theory :

## Codes :
### 1.
```
//subham
//23070123132
//entc-B2
//experiment-11
#include<iostream>
using namespace std;
class cube
{
   public:
   double height=2.0;
   double width=3.0;
   double length=4.0;
};

int main()
{
    cube c1;
    double vol=c1.height*c1.width*c1.length;
    cout<<"volume:"<<vol<<endl;
}
```
### 2.
```
//subham
//23070123132
//entc-B2
//experiment-11
#include<iostream>
using namespace std;
class cube
{
    public:
    double height=2.0;
    double width=3.0;
    double length=4.0;

    double volume()
    {
        double v;
        v=height*width*length;
        return v;
    }
};

int main()
{
    cube cube1;
    double v = cube1.volume();
    cout<<"volume:"<<v<<endl;
}
```

### 3.
```
//subham
//23070123132
//entc-B2
//experiment-11
#include<iostream>
using namespace std;
//concept of public and private variables in class
class cube
{
    private:
    double height=2.0;
    double width=3.0;
    double length=4.0;

    public:
    double volume()
    {
        double v;
        v=height*width*length;
        return v;
    }
};

int main()
{
    cube cube1;
    double v = cube1.volume();
    cout<<"volume:"<<v<<endl;
}
```

### 4.
```
//subham
//23070123132
//entc-B2
//experiment-11
#include<iostream>
using namespace std;
//display function inside function
class cube
{
    public:
    double height=2.0;
    double width=3.0;
    double length=4.0;

    double volume()
    {
        double v;
        v=height*width*length;
        return v;
    }
    void disp_vol(double vol)
    {
        cout<<"volume :"<<vol<<endl;
    }
};
int main()
{
    cube cube1;
    double v = cube1.volume();
    cout<<"volume:"<<v<<endl;
    cube1.disp_vol(v);
}
```
### 5.
```
//subham
//23070123132
//entc-B2
//experiment-11
#include<iostream>
using namespace std;
//display function inside class
class volume{
    public:
    float height;
    float width;
    float length;
    void input()
    {
        cout<<"enter the value of length: ";
        cin>>length;
        cout<<"enter the value of width: ";
        cin>>width;
        cout<<"enter the value of height: ";
        cin>>height;
    }
    float vol()
    {
        float v=length*width*height;
        return v;
    }
    void display()
    {
        double a=vol();
        cout<<"the volume is :"<<a;
    }
};
int main()
{
    volume volume1;
    volume1.input();
    float a=volume1.vol();
    cout<<a;
}
```

## Outputs :
### 1.
### 2.
### 3.
### 4.
### 5.


## Conclusion :
