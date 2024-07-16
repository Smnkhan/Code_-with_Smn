  #include<iostream>
  #include<conio.h>

  using namespace std;

  string name,problem,address,date;
  int age;
  
  class hospital
  {
  	string name,problem,address,date;
  	int age;
  	long int number;
  public:
    void patient_appoint();
	void doctor_list();
	void payment();
	void hospital_details();	
  };
  class doctor : public hospital
  {
  public:
  	void one();
  	void two();
 	void three();
  	void four();
  	void five();
  	void six();
  	void seven();
  	void eight();
  };
  void doctor::one()
  {
  	patient_appoint();
  	cout<<endl;
 	cout<<"\t\t\tokay, thank you. we calling you for confirmed appoint after sometimes!"<<endl;
  }
  void doctor::two()
  {
    patient_appoint();
    cout<<endl;
    cout<<"\t\t\tokay, thank you. we calling you for confirmed appoint after sometimes!"<<endl;
  }
  void doctor::three()
  {
  	patient_appoint();
  	cout<<endl;
  	cout<<"\t\t\tokat, thank you. we calling you for confirmed appoint after sometimes!"<<endl;
  }
  void doctor::four()
  {
  	patient_appoint();
  	cout<<endl;
  	cout<<"\t\t\tokay, thank you. we calling you for confirmed appoint after sometimes!"<<endl;
	}
	void doctor::five()
  {
  	patient_appoint();
  	cout<<endl;
  	cout<<"\t\t\tokay, thank yor. we calling you for confirmed appoint after sometimes!"<<endl;
  }
  void doctor::six()
 {
  	patient_appoint();
 	cout<<endl;
 	cout<<"\t\t\tokay, thank you. we calling you for confirmed appoint after sometimes!"<<endl;
  }
  void doctor::seven()
  {
  	patient_appoint();
  	cout<<endl;
 	cout<<"\t\t\tokay, thank you. we calling you for confirmed appoint after sometimes!"<<endl;
  }
  void doctor::eight()
 {
  	patient_appoint();
  	cout<<endl;
  	cout<<"\t\t\tokay, thank you. we calling you for confirmed appoint after sometimes!"<<endl;
  }
  
  void hospital :: patient_appoint()
  {
  	cout<<"\t\t\t\t\t\tpatient Name: ";
  	cin.ignore();
  	getline( cin,name);
  	cout<<"\t\t\t\t\t\tpatient Age: ";
  	cin>>age;
  	cout<<"\t\t\t\t\t\tpatient Problem: ";
  	cin.ignore();
  	getline( cin,problem);
  	cout<<"\t\t\t\t\t\tAdress: ";
  	cin.ignore();
  	getline( cin,address);
  	cout<<"\t\t\t\t\t\tEnter your moblie number: ";
  	cin>>number;
  	cout<<"\t\t\t\t\t\tAppoint date: ";
  	cin.ignore();
  	getline( cin,date);
  	cout<<"\n\t\t\t\t\t\tpatient successfully booked!"<<endl<<endl;
  	}
  	
  	void hospital ::doctor_list()
  	{
  		cout<<"\t\t\t\t\t1. Dr. Abdullah Al siraj\t*Eye specialist"<<endl<<endl;
  		cout<<"\t\t\t\t\t2. Dr. Saman batool\t\t*Heart specialist"<<endl<<endl;
  		cout<<"\t\t\t\t\t3. Dr. Altaf Uddin Khan\t\t*Diabetic specialist"<<endl<<endl;
  		cout<<"\t\t\t\t\t4. Dr. Mostofa zai\t\t*Heart surgent"<<endl<<endl;
  		cout<<"\t\t\t\t\t5. Dr. sifat hossain\t\t*Medicine specialist"<<endl<<endl;
  		cout<<"\t\t\t\t\t6. Dr. Emdadulllah\t\t*Kidney spacialist"<<endl<<endl;
  		cout<<"\t\t\t\t\t7. Dr. Siddeatul islam\t\t*ear specialist"<<endl<<endl;
  		cout<<"\t\t\t\t\t8. Dr. afaq\t\t*Medicine specialist"<<endl<<endl;
	  }
	  void hospital::payment()
	  {
	  	int amount, number;
	  	
	  	cout<<"\t\t\t\t\t\tPatient name: "<<name<<endl<<endl;
	  	cout<<"\t\t\t\t\t\tpatient problem: "<<problem<<endl<<endl;
	  	cout<<"\t\t\t\t\t\tEnter ammont of treatment: ";
	  	cin>>amount;
	  	cout<<endl;
	  	cout<<"\t\t\t\t\t\tEnter your Mobile Number: ";
	  	cin>>number;
	  	
	  	cout<<"\n\t\t\t\t\tpayment successful, thank you!"<<endl<<endl;
	  	cout<<"\t\t\t\t\t\t"<<name<<endl;
	  	cout<<"\t\t\t\t\t\t------------------------------------"<<endl;
	  	cout<<"\t\t\t\t\t\t|       Patient Name: "<<name<<endl;
	  	cout<<"\t\t\t\t\t\t|       Patient Problem: "<<problem<<endl;
	  	cout<<"\t\t\t\t\t\t|       Payment Amoumt: "<<amount<<endl;
	  	cout<<"\t\t\t\t\t\t|       Mobile: "<<number<<endl;
	  	cout<<"\t\t\t\t\t\t|       Thank You!"<<endl;
	  }
	  void hospital::hospital_details()
	  {
	  	cout<<"\t\t\tHospital is the place where the sick and the injured are taken for treatment."<<endl;
	  	cout<<"\t\t\tThe doctor and nurses are readily available there admitting and attending."<<endl;
	  	cout<<"\t\t\ton their patients. the dedicated teams of doctor and nurses delivers the message."<<endl;
	  	cout<<"\t\t\tof hope to their patients in the hospitals. All over thw world,hospitals are build."<<endl;
	  	cout<<"\t\t\tto treat and cure thousants of sick peopl .and to give them medicine time by time. "<<endl;
	  	cout<<"\t\t\tand maintain the pleasant atmosphere of the hospital so that the patients feel."<<endl;
	  	cout<<"\t\t\tconfortable and better."<<endl;
	  }
	  
	  int main()
	  {
	  	int  num , doc,x;
	  	
	 	hospital obj;
	  	doctor pat;
	  	
	  	do{
	  		system("cls");
	  		cout<<"\n\n\t\t\t\t\t\t\tHospital Managament system"<<endl;
	  		cout<<"\t\t\t\t\t\t----------------------------------------"<<endl<<endl;
	  		cout<<"\t\t\t\t\t\t1. Emergency seat Booking"<<endl<<endl;
	  		cout<<"\t\t\t\t\t\t2. Treatment Payment"<<endl<<endl;
	  		cout<<"\t\t\t\t\t\t3. Doctor List & Appoint"<<endl<<endl;
	  		cout<<"\t\t\t\t\t\t4. Hospital Detials"<<endl<<endl;
	  		cout<<"\t\t\t\t\t\t5. Exit"<<endl<<endl;
	  		cout<<"\n\t\t\t\t\t\tSelect An Option from here 1/2/3/4/5: ";
	  		cin>>num;
	  	switch(num)
	  	{
			case 1:cout<<"\n\t\t\t\t\t\t1. Patient Appoint"<<endl;
	  		cout<<"\t\t\t\t\t\t-----------------------------------"<<endl<<endl;
	  		obj.patient_appoint();
	  		break;
	  		case 2:cout<<"\n\t\t\t\t\t\t2. treatment payment"<<endl;
	  		cout<<"\t\t\t\t\t\t------------------------------------"<<endl<<endl;
	  		obj.payment();
	  		break;
	  		case 3:cout<<"\n\t\t\t\t\t\t3. Doctor List"<<endl;
	  		cout<<"\n\t\t\t\t\t\t------------------------------"<<endl<<endl;
	  		obj.doctor_list();
	  		//cout<<"\n\t\t\t\t\t\tSelect a doctor for Appoint: ";
	 	//	cin>>num;
			  
	  		int num2; 
	  		cout<<"\n\\t\t\t\t\t\tseclect docter for appointment ";
	  		cin>>num2;
	  		switch(num2)
	  		{
	  			case 1:cout<<"\n\t\t\t\t\t\t1. Dr.Abduallah al siraj"<<endl;
 		    	cout<<"\t\t\t\t\t\t-------------------------------------"<<endl<<endl;
	  			pat.one();
	  			break;
	  			case 2:cout<<"\n\t\t\t\t\t\t\2.saman batool"<<endl;
	  			cout<<"\t\t\t\t\t\t--------------------------------------"<<endl<<endl;
	  			pat.two();
		     	break;
	  			case 3:cout<<"\n\t\t\t\t\t\t3. Dr. Altaf Uddian Khan"<<endl;
	  			cout<<"\t\t\t\t\t\t----------------------------------------"<<endl<<endl;
	  			pat.three();
	  			break;
	  			case 4:cout<<"\n\t\t\t\t\t\t4. Dr. Mostofa zia"<<endl;
	  	    	cout<<"\t\t\t\t\t\t---------------------------------------"<<endl<<endl;
	  			pat.four();
	  			break;
	  			case 5:cout<<"\n\t\t\t\t\t\t5. Dr. Sifat Hossain"<<endl;
	  			cout<<"\t\t\t\t\t\t-----------------------------------------"<<endl<<endl;
	  			pat.five();
		     	break;
	  			case 6:cout<<"\n\t\t\t\t\t\t6. Dr. Emdadaullah"<<endl;
	  			cout<<"\t\t\t\t\t\t----------------------------------------"<<endl<<endl;
	  			pat.six();
	  			break;
	  			case 7:cout<<"\n\t\t\t\t\t\t7. Dr. Siddeatal islam"<<endl;
	  	    	cout<<"\t\t\t\t\t\t-----------------------------------------"<<endl<<endl;
	  			pat.seven();
	  			break;
	  			case 8:cout<<"\n\t\t\t\t\t\t8. Dr Afaq"<<endl;
	  			cout<<"\t\t\t\t\t\t-------------------------------"<<endl<<endl;
	  			pat.eight();
	  			break;
	  			default:
	  			cout<<"unknown select! Try again. "<<endl<<endl;
	  	 }
	  		  

          break;
	 	case 4:cout<<"\n\t\t\t\t\t\t4. Hospital Detials"<<endl;
	  	cout<<"\t\t\t\t\t\t-------------------------------------"<<endl<<endl;
	  	obj.hospital_details();
	 	break;
	  	case 5:
	  	 	if (num == 5)
	  	 	{
	 	 		exit(1);
			   }
			 default:
		     cout<<"\t\t\t\t\t\tthis is not exit. try Again!"<<endl<<endl;
			 
		}
		cout<<"\n\t\t\t\t\t\tSelect An Option Again:yes or not => ";
	
	
	x = getch();
	if( x == 'n' || x == 'N')
	{ 
	         exit(0);
     	}
  }
    while ( x == 'y' || x == 'Y');
           getch();
	  }
  
  
   
