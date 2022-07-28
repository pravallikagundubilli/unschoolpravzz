#include<iostream>
#include<cmath>
using namespace std;
void area(int r){
		cout<<"Area of the circle is : "<<3.14*r*r<<endl;
	}
void area(int l,int br){
		cout<<"Area of the rectangle is : "<<l*br<<endl;
	}
void area(int a,int b,int c){
		int s=(a+b+c)/2;
		if(a+c>b){
		
		cout<<"Area of the triangle is : "<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;
	}
	else{
		cout<<"Please enter a valid details of the triangle";
	}
	}
int main()
{
	int r,l,br,a,b,c,n;
	cout<<"\t\t\t\t\t-----------Menu-----------"<<endl;
	cout<<"1.Circle"<<endl<<"2.Rectangle"<<endl<<"3.Triangle"<<endl;
	
	cout<<"Enter ur choice: "<<endl;
	cin>>n;
	switch(n){
		case 1:
			cout<<"Enter the radius of the circle: "<<endl;
			cin>>r;
			area(r);
			break;
		case 2:
			cout<<"Enter the sides of the rectangle :"<<endl;
			cin>>l>>br;
			area(l,br);
			break;
		case 3:
			cout<<"Enter the sides of the triangle: "<<endl;
			cin>>a>>b>>c;
			area(a,b,c);
			break;
		default:
			cout<<"Enter a valid option";
			break;
	}
}
	


