#include<iostream>
#include<conio.h>
using namespace std;

class Restaurant{
public:
	Restaurant(){
		cout<<"\t\tWELCOME TO NAINA'S RESTAURANT"<<endl<<endl;
		cout<<"1.our resturant serve as a social hub"<<endl;
		cout<<"2.our restaurant ensure food safety and hygiene"<<endl;
		cout<<"3.our resturant providing a clean and regulated environment"<<endl;
		cout<<"4.our resturant offers a wide range of cuisines abd dinning options"<<endl;
		cout<<"5.our resturant provide a convenient option for who dont have time to cook"<<endl<<endl;
	}

	
};
class Customer {
public:
    string name;
    double contactNumber;
    Customer(string i_name, double i_contactNumber) {
        name = i_name;
        contactNumber = i_contactNumber;
    }
        void setname(string i_name){
    	name=i_name;
	}
	    string getname(){
		return name;
	}
	    void setcontactnum(double i_contactnum){
    	contactNumber=i_contactnum;
	}
     	double getcontactnumber(){
		return contactNumber;
	}
    
        void display(){
    	cout<<"name :"<<name<<"\tcontactnum :"<<contactNumber<<endl;
	}
	
    
    
};
class MenuItem {
public:
    string ordername;
    double price;
    string description;
    MenuItem(string i_ordername, double i_price, string i_description) {
        ordername = i_ordername;
        price = i_price;
        description = i_description;
    
	}
	    void setname(string i_ordername){
    	ordername=i_ordername;
	}
	    string getname(){
		return ordername;
	}
	
	 void setprice(double i_price){
    	price=i_price;
	}
	    double getprice(){
		return price;
	}
	    void setdescription(string i_description){
    	description=i_description;
	}
	string getdescription(){
		return description;
	}
	
    void display(){
    	cout<<"name :"<<"\t"<<ordername<<"\tprice :"<<"\t"<<price<<"\tdestription :"<<"\t"<<description<<endl;
	}
};

// Order.h
class Order {
public:
	string name;
    int orderNumber;
    int tableNumber;
   
    Order( string i_name ,int i_orderNumber, int i_tableNumber) {
    	name=i_name;
        orderNumber = i_orderNumber;
        tableNumber = i_tableNumber;
    }
    
	    void setordernumber(int i_ordernumber){
		orderNumber=i_ordernumber;
	}
	    int getordernumber(){
		return orderNumber;
	}
	    void settableNumber(int i_tableNumber){
		tableNumber=i_tableNumber;
	}
	    int gettablenumber(){
		return tableNumber;
		
	}
     	void display(){
    	cout<<"order number :"<<orderNumber<<"\ttableNumber :"<<tableNumber<<endl;
   	}
	    void placeorder(){
		cout<<"order placed by "<<name<<endl;
	}
	
   
    
};

// Table.h
class Table:public Order {
public:
	bool isAvailable;
    
    Table(string i_name,int i_orderNumber,int i_tableNumber ):Order(i_name, i_orderNumber, i_tableNumber) {
       isAvailable=true;
    }
       void settablenum(int i_tablenum){
    	tableNumber=i_tablenum;
	}
    	int gettablenum(){
		return tableNumber;
	}
	void booktable(){
		if (isAvailable){
			isAvailable=0;
			cout<<"table booked"<<endl;
		}else{
			cout<<"table is not Available"<<endl;
		}
	}
        void display(){
    	if (tableNumber<=15){
    		
		  Order::display();
		  Order::placeorder();
    	  cout<<"Table"<<tableNumber<<" is booked for you"<<endl;
    	  cout<<"thank you"<<endl;
    	
		  }else{
			cout<<"sorry! All tables are booked"<<endl;
		}
	}
  
};
class payment{
	public:
		double amount;
		string paymentmethod;
		bool isAvailable;
		payment(double i_amount,string i_paymentmethod){
			amount = i_amount;
			paymentmethod = i_paymentmethod;
			isAvailable=true;
			
	}
		void setamount(double i_amount){
        amount=i_amount;
	}
     	double getamount(){
		return amount;
	}
    	void setpaymentmethod(string i_paymentmethod){
		paymentmethod=i_paymentmethod;
	}
	    string getpaymentmethod(){
		return paymentmethod;
	}
    	
		void display(){
			cout<<"payment of "<<amount<<" submite by "<<paymentmethod<<"\tplease"<<endl;
			
	}
	void checkpayment(){
		if(isAvailable){
			isAvailable=0;
			cout<<"your payment is recieved thank you!"<<endl;
		}else{
			cout<<" oops your payment is not recieved plz check your detials"<<endl;
		}
		
	}
	
		
		
};
class onlineorder{
	string name;
	string address;
	double contact_num;
	string ordername;
	double price;
	double amount;
	public:
		void insert(){
			cout<<"\t\tonline order"<<endl;
			cout<<"\tPlease enter your name :";
			cin>>name;
			cout<<"\tPlease enter your address :";
			cin>>address;
			cout<<"\tplease enter your contact number :";
			cin>>contact_num;
			cout<<"\tplease enter order name :";
			cin>>ordername;
			cout<<"\tplease enter orderprice :";
			cin>>price;
			cout<<"your order will arrive soon thank you!"<<endl<<endl;
			
			
		}
		void display(){
			cout<<"name :"<<name<<"\taddress :"<<address<<"\tcontact num :"<<contact_num<<"\torder name :"<<ordername<<"\tprice :"<<price<<endl;
		}
		void payment(){
			
			cout<<"\tPlease enter your name"<<endl;
			cin>>name;
			cout<<"\tplease enter your contact number"<<endl;
			cin>>contact_num;
			cout<<"\tplease enter amount of payment"<<endl;
			cin>>amount;
			cout<<"payment succesfull thank you!"<<endl;
			
			
			
			
			
		}
};

	
int main() {
	Restaurant rest;
	Customer customer_1("sman",998765);
	customer_1.display();
	MenuItem menu_1("pizaa",200,"cheese pizza");
	menu_1.display();
//	Order order_1("sman",1,1);
//	order_1.display();
//	order_1.placeorder();
	Table table_1("saman",1,1);
	table_1.display();
	table_1.booktable();
	payment payment_1(200,"cash");
	payment_1.display();
	payment_1.checkpayment();
	
	
	cout<<endl;
	
	Customer customer_2("maryam",998765);
	customer_2.display();
	MenuItem menu_2("pizaa",200,"cheese pizza");
	menu_2.display();
//	Order order_1("sman",1,1);
//	order_1.display();
//	order_1.placeorder();
	Table table_2("saman",1,1);
	table_2.display();
	payment payment_2(200,"cash");
	payment_2.display();
	payment_2.checkpayment();
//	
	cout<<endl;
	onlineorder order;
	int choice ;
	
	int x;
	do{
	//	system("cls");
	
	cout<<"\t\tenter your choice "<<endl;
	cout<<"\t1 order."<<endl;
	cout<<"\t2 payment."<<endl;
	cout<<"\t3 menu."<<endl;
	cout<<"\t4 for exit ."<<endl;
	cin>>choice;
	
		switch(choice){
			case 1:
				order.insert();
				order.display();
			break;
			
         	case 2:
			   order.payment();
			break;
			
			case 3:
		     	int num2; 
	  		cout<<"\n\\t\t\t\t\t\tseclect order"<<endl;
	  		cout<<"\t1.chinese food"<<endl;
	  		cout<<"\t2.italian food"<<endl;
	  		cout<<"\t3.English food"<<endl;
	  		cin>>num2;
	  		switch(num2){
	  			case 1:
				cout<<"\t\t menu 1"<<endl;
				cout<<"this section available chinese food"<<endl;
				cout<<"1.Kung pao chicken"<<endl;
				cout<<"2.Beef and Broccoli"<<endl;
				cout<<"3.Wonton soup"<<endl;
				order.insert();
				order.display();
			break;
		
	     	case 2:
			    cout<<"\t\t menu 2"<<endl;
			    cout<<"This section available italian food"<<endl;
		     	cout<<"1.Pizza margherita"<<endl;
			    cout<<"2.Spaghetti Bolognese"<<endl;
			    cout<<"3.Lasagna alla Romana"<<endl;
			    order.insert();
				order.display();
			break;
		
		     case 3:
		     	cout<<"\t\t menu 3"<<endl;
		     	cout<<"\t\t This section english food"<<endl;
		     	cout<<"\t1.Fish and chips"<<endl;
		     	cout<<"\t2.Full english breakfast"<<endl;
		     	cout<<"\t3.Shepherd pie"<<endl;
		     	order.insert();
				order.display();
	  			
			  
			  break;
			  default:
			  	cout<<"you enter invalid number plz try again!"<<endl;
		     	
		     	
				 }
				 break;
		     	
		     case 4:
		    	if (choice==4){
		    		exit(1);
				}
		     	
		   	default:
		     	cout<<"unknown choice\nplz select  1 to 4 menu";
	     
		 }
		 
	cout<<"\t\t Do you continue or exit [yes/no]??"<<endl;

	
	
	
	x = getch();
	if( x == 'n' || x == 'N')
	{ 
	         exit(0);
     	}
  }
    while ( x == 'y' || x == 'Y');
           getch();
	  }
	
	
	

    
	
