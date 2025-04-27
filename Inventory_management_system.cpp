#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Product
{
    public:
    string name;
    string description;
    int product_count;
    Product ()
    {

    }
    Product(string name, string description, int product_count)
    {
        this->name = name;
        this->description = description;
        this->product_count = product_count;
    }

    void set_detials()
    {
        cin.ignore();
        cout<<"Enter Name of Product : ";
       getline(cin,name);
        cout<<"Describe the Product : ";
        getline(cin,description);
        cout<<"Availability of Stocks : ";
        cin>>product_count;
        cout<<endl;
    }

    void getname()
    {
        cout<<"Name of The Product is : "<<name<<endl;
    }

    void count()
    {
        cout<<"The Number of Products Available : "<<product_count<<endl;
    }
    void explain()
    {
        cout<<"Explaination : "<<endl;
        cout<<description<<endl;
    }

    void show()
    {
        cout<<endl;
        cout << "Product Name : "<<name<<endl;
        cout << "Description : "<<description<<endl;
        cout << "Stocks Available : "<< product_count<<endl;
        cout<<endl;

    }
};

int main()
{
    vector<Product>items;
    int total_item;
    cout<<"Enter Total Item : ";
    cin>>total_item;

    for(int i = 0; i<total_item; i++)
    {
        cout<<"Item "<<i+1<<" : "<<endl;
        Product p;
        p.set_detials();
        items.push_back(p);
    }

    cin.ignore();
    string command2;
    cout<<"Want to enter More Items : ";
    cin>>command2;

    int extra_items;
    if(command2=="yes")
    {
        cin.ignore();
        cout<<"How Many Items You want to Add : ";
        cin>>extra_items;
        for(int i = 0; i<extra_items; i++)
        {
            cout<<"item : "<<total_item+i+1<<" : "<<endl;
            Product p;
            p.set_detials();
            items.push_back(p);

        }

    }

cout<<endl;
    cin.ignore();
    string command;
    cout<<"Want to see details : ";
    getline(cin,command);

    cout<<endl;

    if(command == "yes")
    {
        for(int i = 0; i<items.size(); i++)
        {
            cout<<"Details of Item "<< i+1 << " : "<<endl;
            items[i].show();
        }
        command = "No";
    }

    return 0;
}