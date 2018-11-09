#include<iostream>
using namespace std;
class Volume
{
	private:
		double l,b,h,a;// unit is in meters
		int r;
		
    public:
    	//void Volume();
    	void  volume(double l,double b,double h);
    	void volume(int r);
    	//int volume(double a);
    	
};
void Volume :: volume(int r)
{
	double v;
	    v=(4/3)*(22/7)*r*r*r;
	    cout<<"volume of sphere="<<v;
     //     return 0;
}
void Volume :: volume(double l,double b,double h)
{
	double v;
	v=l*b*h;
	cout<<"volume of cuboid ="<<v;
}
/*Volume :: volume(double a)
{
	double v;
	v=a*a*a;
	cout<<"volume of cube="<<v;
}*/
//void Volume:: Volume()
//{
//	cout<<"for null the volume is=NULL";//return 0;
//}
main()
{
	Volume v1;
	cout<<"\n";
	v1.volume(23);
         //v1.volume(3,3,3);
	cout<<"meter cube";
	cout<<endl;
	v1.volume(23,34,45);
	cout<<"meter cube";
//	cout<<endl;
//	v3.volume(66.00);
//	cout<<"meter cube";
}
