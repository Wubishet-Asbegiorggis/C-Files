#include<iostream>
#include<conio.h>
#include<string.h>
#include<csignal>
#include<fstream>
#include<stdio.h>
#include<exception>
#include<sstream>
#include<algorithm>
#include<array>
#include<vector>
#include<ctime>
using namespace std;
void printMin(int []);
void printMax(int []);
int add(int,int);
int factorial(int);
float division(int,int);
int takeArr(int [],int);
int arrLCM(int,int);
/*
int sigval=0;
void sighandle(int val)
{
	sigval=val;
}

class A  
{  
   int x=5;  
    public:  
    void display()  
    {  
        std::cout << "\n\t x in base class  : " << x<<std::endl;  
    }  
};  

class B: public A  
{  
    int y = 10;  
    public:  
    void display()  
    {  
        std::cout << "\n\t y in derived  class : " <<y<< std::endl;  
    }  
}; 

	template<class X> void fun(X a)  // Function Overloading with templates.
	{  
    	std::cout << "\n\t Value of a is : " <<a<< std::endl;  
	}  
	template<class X,class Y> void fun(X b ,Y c)  
	{  
    	std::cout << "\n\t Value of b is : " <<b<< std::endl;  
    	std::cout << "\n\t Value of c is : " <<c<< std::endl;  
	}

     template<class T1, class T2>
	class A   
    {  
         T1 a;  
         T2 b;  
         public:  
        A(T1 x,T2 y)  
       {  
           a = x;  
           b = y;  
        }  
           void display()  
          {  
                 std::cout << "\n\t Values of a and b are : "<<"a = " << a<<" & "<<"b = "<<b<<std::endl;  
           }  
      }; 
 
    template<class T, int size>  
	class A   
	{  
    public:  
    T arr[size];  
    void insert()  
    {  
        int i =1;  
        for (int j=0;j<size;j++)  
        {  
            arr[j] = i;  
            i++;  
        }  
    }  
    void display()  
    {  
        for(int i=0;i<size;i++)  
        {  
            std::cout << arr[i] << " ";  
        }  
    }  
	};

    class Base  
	{  
    	public:  
    	Base() // Constructor member function.    
	{  
    	cout << "\n\t Constructor Base class";  // It prints first.  
	}  
 	virtual ~Base() // Define the virtual destructor function to call the Destructor Derived function.  
	{  
	    cout << "\n\t Destructor Base class"<<endl;  
	}  
	};  
// Inheritance concept  
	class Derived: public Base   
	{  
	    public:  
    	Derived() // Constructor function.  
	{  
	    cout << "\n\t Constructor Derived class" ; //After print the Constructor Base, now it will prints.   
	}  
 	virtual~Derived() // Destructor function   
	{  
    	cout << "\n\t Destructor Derived class"; // The virtual Base Class? Destructor calls it before calling the Base Class Destructor.
	}         
	}; 
*/ 
	
int main()
{
	/*
    A a;
    A *ptr;  
    B b;  
    ptr = &b; // or ptr=&b prints similar output to the console.
    ptr->display();
    
    cout<<"\n\t C++ Programming with Dev C++ !"<<endl;
    std::cout<<"\n\n\t\t\t PERSONAL INFORMATION !\n";
    char arr[10];
    std::cout<<"\n\n\t\t Enter your password : ";
    for(int i=0;i<10;i++)
    {
	    arr[i]=getch();
		std::cout<<("*");
	}
	std::cout<<"\n\n\t\t Your password is : ";
		for(int i=0;i<10;i++)
	{
	    std::cout<<arr[i];
	}
	std::cout<<"\n\n";

	     int i = 1;    
         do{    
              int j = 1;          
              do{    
                cout<<i<<" "<<j<<"\n";        
                  j++;    
              } while (j <= 3) ;    
              i++;    
          } while (i <= 3) ; 
  
    for(int i=0;i<7;i++)
    {
    	for(int j=0;j<5;j++)
    	{
    		if(i==3&&j==3)
			{
				goto Goto_label;
			    cout<<"\n\t Statement after goto label...."<<endl;
			}
			cout<<"\t * "<<"& # ";
		}
		cout<<"\n";
	}
    Goto_label:
	cout<<"\t Go-to label encounterred !\n";  

	int factorial(int);
	int arg;  
	cout<<"\n\t Enter a number to find its factorial : ";  
	cin>>arg;   
	cout<<"\n\t Factorial of "<<arg<<" is: "<<factorial(arg)<<endl;
	 
	int arr[5]={10,100, 20, 1, 30}; //creating and initializing array    
        //Traversing array with foreach loop
		cout<<"\n\t  Array Elements\n"; 
		cout<<"\n\t "; 
       for (int i: arr)     
        {
            cout<<i<<"  ";    
        } 
 
    int arr1[5] = { 25, 10, 54, 15, 40 };    
        int arr2[5] = { 12, 23, 44, 67, 54 };    
        printMin(arr1); //Passing array to function  
        printMax(arr2);
        
    int *ptr1=new int(10); 
    std::cout << "\n\t Size of ptr1 is : " <<sizeof(ptr1)<< std::endl;                                                                                                                                                                                                                                  
    std::cout << "\n\t Size of *ptr1 is : " <<sizeof(*ptr1)<< std::endl;  
    std::cout << "\n\t Value pointed by ptr1 is : " <<*ptr1<< std::endl; 
    char *ptr2=new char('a');  
    std::cout <<"\n\t Size of ptr2 is : " <<sizeof(ptr2)<< std::endl;  
    std::cout <<"\n\t Size of *ptr2 is : "<<sizeof(*ptr2)<< std::endl;
	std::cout << "\n\t Value pointed by ptr2 is : " <<*ptr2<< std::endl;  
    double *ptr3=new double(12.78);  
    std::cout <<"\n\t Size of ptr3 is : " <<sizeof(ptr3)<< std::endl;  
    std::cout <<"\n\t Size of *ptr3 is : "<<sizeof(*ptr3)<< std::endl; 
    std::cout << "\n\t Value pointed by ptr3 is : " <<*ptr3<< std::endl;

    int (*funcptr1)(int,int);  // function pointer declaration  
 	funcptr1=add; // funcptr is pointing to the add function 
    std::cout <<"\n\t The sum is: " <<funcptr1(5,5)<< std::endl;  
    cout<<"\n\t The address of add is: "<<funcptr1<<endl;
    int (*funcptr2)(int); 
    funcptr2=&factorial;
    cout<<"\n\t The address of factorial is: "<<funcptr2<<endl;

    int i = 25;  
    int j = 0;  
    float k = 0;  
    try {  
      k = division(i, j);  
      cout << k << endl;  
    }catch(const char* e)
	 {  
      cout<<e<<endl;
     }
  
    fun(10);  
    fun(20,30.5); 

    A<int,float> d(5,6.5);  
    d.display();  

    A<int,10> t1;  
    t1.insert();  
    t1.display(); 

    signal(SIGFPE,sighandle);
    cout<<"\n\t Before signal handling -->";
    cout<<" Signal value = "<<sigval<<endl;
    cout<<"\n\t After signal handling -->";
    raise(SIGFPE);
    cout<<" Signal Value = "<<sigval<<endl;

    string wrfl;
    ofstream Wrob;
    Wrob.open("T0.txt");
    cout<<"\n\t Writing to a file \n";
    cout<<"\n\t Please, Write your file statements."<<endl;
    if(Wrob.is_open())
    {
    	getline(cin,wrfl);
    	cout<<wrfl<<endl;
    	Wrob.close();
	}
	else
	cout<<"\n\t Writing to file operation failed !";
	//
    cout<<"\n\t Reading from a file."<<endl;
	string rdfl;
	ifstream Rdob("T0.txt");
	if(Rdob.is_open())
	{
		while(getline(Rdob,rdfl))
		{
			cout<<rdfl<<endl;
		}
		Rdob.close();
	}
	else
	cout<<"\n\t File reading operation failed !";

    stringstream sst;
    int k;
    string s;
    cout<<"\n\t Enter a number to be converted into a string : ";
    cin>>k;
    s=to_string(k);
    cout<<"\n\t Enterred integer : "<<k<<endl;
    cout<<"\n\t Its string value : "<<s<<endl;
    cout<<"\n\t Enter a string to be convertd to a number : ";
    cin>>s;
    cout<<"\n\t Enterred string: "<<s<<endl;
    sst<<s;
    sst>>k;
    cout<<"\n\t Its integer value : "<<k<<endl;

    Base *bptr = new Derived; // A pointer object reference the Base class.  
    delete bptr; 

    string str,splt;
    cout<<"\n\t Enter a string to be splitted in words : ";
    getline(cin,str);
    stringstream ssob(str);
    while(getline(ssob, splt, ' '))
    {
    	cout<<"\n\t "<<splt;
	}cout<<endl;

    int Arrz [5] = { 10, 20, 30, 40, 50};        // C++ Range-based for loop.
	double Arrq [5] = { 2.4, 4.5, 1.5, 3.5, 4.0 };   
    cout<<"\n\t Arrz Elements : ";
	for ( auto i : Arrz )  
	{  
	cout << i << " " ;  
	}   
     cout<<"\n\t Arrq Elements : "; 
	for (auto j : Arrq )  
	{  
	cout << j<< " " ;  
	}cout<<endl; 

     array<int, 7> arr0 = {1, 3, -2, 4, 6, 7, 9};  
 	cout << "\n\t Before update operation, Elements : " ;  
 	for (auto x : arr0)               // Either auto keyword or any primitive data type in C++ is applicable.
	{  
 	cout << x << " ";  
 	}  
 // pass the references  
 	for (auto &y : arr0)
	 {  
 	    y+= 3;  
 	} cout << endl;
	cout<<"\n\t After modification, Elements: ";  
 	for (auto i : arr0)
	{  
 	    cout << i << " ";  
 	}  
 	cout << endl; 

    int arr1[4]  = { 0, 1, 2, 3 };  
	int arr2[5] = { 1, 2, 3, 4, 5 };  
 
	for ( int x : arr1 )  
	{   
	for ( int y : arr2 )  
	{  
	    cout<<"\n\t ";
	    cout << " x = " << x << " and y = " << y;;  
	}cout<<endl; 
	}cout<<endl;

    int n1,n2,lcm;
    cout<<"\n\t Determining the LCM of two numbers \n";
    cout<<"\n\t Enter the first number : ";
    cin>>n1;
    cout<<"\n\t Enter the second number : ";
    cin>>n2;
    lcm=(n1>n2)? n1:n2;
    while(1)
    {
    	if (lcm%n1==0 && lcm%n2==0)
    	{
    		cout<<"\n\t The LCM of "<<n1<<" and "<<n2<<" is : "<<lcm<<endl;
    	    break;
		}
    	else
    	lcm++;
	}

    int arr[]={3,35,26,18,29,16,25,28,36,93};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"\n\t The LCM of the given array is : "<<takeArr(arr,size)<<endl;

    int Arr[]={12,14,17,17,19};  
    int n=sizeof(Arr)/sizeof(Arr[0]);  
    int* adj=adjacent_find(Arr,Arr+n);  
    cout<<"\n\t A matching adjacent element is : "<<*adj<<endl;

    time_t tm=time(0);
    char * ct=ctime(&tm);
    cout<<"\n\t Current time is : "<<ct;

	ifstream ifsObj;
	ifsObj.open("File0.txt, ios::noreplace");
	char data[100];
	cout<<endl;
	if(ifsObj.is_open())
	{
		ifsObj>>data;
		cout<<data;
	}
	else
	cout<<"\n\t File has not been opened yet !";
	ifsObj.close();
*/
    return 0;
}
   
/*
    float division(int x, int y)
	{
	if(y==0)
	throw "\n\t Invalid devision by Zero !";   
    return (x/y);  
    } 

	int factorial(int n)  
	{  	
	if(n<0)  
	return(-1); //Wrong value    
	if(n==0)  
	return(1);  //Terminating condition 
	else  
	{  
	return(n*factorial(n-1));      
	}   
	return 0;
	}

	void  printMax(int arr[5])  
	{  
    int max = arr[0];    
        for (int i = 0; i < 5; i++)    
        {    
            if (max < arr[i])    
            {    
                max = arr[i];    
            }    
        }    
        cout<< "Maximum element is: "<< max <<"\n";    
	} 
  
	void  printMin(int arr[5])  
	{  
    int min = arr[0];    
        for (int i = 0; i < 5; i++)    
        {    
            if (min > arr[i])    
            {    
                min = arr[i];    
            }    
        }    
        cout<< "\n\t Minimum element is: "<< min <<"\n";    
	}

	void  printMax(int arr[5])  
	{  
    int max = arr[0];    
        for (int i = 0; i < 5; i++)    
        {    
            if (max < arr[i])    
            {    
                max = arr[i];    
            }    
        }    
        cout<< "\n\t Maximum element is: "<< max <<"\n";    
	}   
 
	int add(int a , int b)  
	{  
    	return a+b;  	
	}  
	
	int takeArr(int arr[10],int s)
	{
		int LCM=arrLCM(arr[0],arr[1]);
		for(int i=0; i<s; i++)
		{
			LCM=arrLCM(LCM,arr[i]);
		}
		return LCM;
	}
	int arrLCM(int n,int m)
	{
		int lcm=(n>m)? n:m;
		while(true)
		{
			if(lcm%n==0 && lcm%m==0)
			{
			return lcm;
			}
			else
			lcm++;
		}
*/




