 # include <iostream>
# include <math.h>
# include <iomanip> // for manipulating the output format--> provide manipulators like- setprecision(2), 
using namespace std;

int main()

{  
    string destination,name,traveldate;  
	int a, i=0, age[100], passport, phonenumber;
	double Price[10000], sum, discount, time;
	char mad;
	
	
	cout<< setprecision (2) << fixed ;
	cout<< "                    FLY HIGH AIRLINE                    " << endl;
	cout<< "********************************************************" << endl;
	cout<< "                                                        " << endl;
    cout<< "        -------------------------------------           " << endl;
	cout<< "        |                                   |           " << endl;
	cout<< "        |        Ticket booking system      |           " << endl;
	cout<< "        |         Hari Raya Promotion       |           " << endl;
	cout<< "        |                                   |           " << endl;
	cout<< "        -------------------------------------           " << endl;
	cout<< "                                                        " << endl;
	cout<< "********************************************************" << endl;
	cout<< "                  Destinations                          " << endl;
	cout<< "                                                        " << endl;
	cout<< "                   K: Korea                             " << endl;
	cout<< "                   S: Singapore                         " << endl;
	cout<< "                   T: Thailand                          " << endl;
	cout<< "                   U: United Kingdom                    " << endl;
	cout<< "                                                        " << endl;
	cout<< "                                                        " << endl;
	//personal information
	cout<< "Enter your full name: " << endl;
	cin>> name;
	cout<< "Passport Number: " << endl;
	cin>> passport;
	cout<< "Phone number (Exp:0102233493): " << endl;
	cin>> phonenumber;
	cout<< "Travel date, d/m/y (Exp:8/5/2023) :" << endl;
	cin>> traveldate;
	cout<< "Travel time, GMT+ (Exp: 1730 or 0530):" << endl;
	cin>> time;
	
	cout<< "                                                        "<< endl;
	cout<< "\nHow many members in your family?\n" ;
	cin>> a; // numbers in your family
	cout<<"                                                         "<< endl;
	
	cout<< "Enter the age of your "<<a<<" family member:\n" ;
	for (i=0; i<a; i++) // i=0 initializes loop variable, starting value is 0, i<a where the loop will check before each iteration (as long as the value of "i" less than a, it will continue execute)
	{
	  cin>> age[i];z
}
	 cout<< "                                                       "<< endl;
	 cout<< "Enter your destination (K/S/T/U): ";
	 cin>> destination;
	 
	  
	  switch (destination[0]) // refer to the first character of a string named " destinantion'
	                          // if the value of destination matches a "case" value, the corresponding code plock is disassosiated with that "case" executed.
{
		case 'K':
			for (i=0; i<a; i++) 
	        {   
	            if (age[i] <= 2)
	            {
		          Price[i] = 0;
		          cout<< "Toddlers don't need seat" << endl;
                }
		
		        else if (age[i] > 6 && age[i] <= 12)
		        {
			       Price[i]= 1000;
	            }
		
			
		        else if (age[i] > 13 && age[i] <= 59)
		        {
			        Price[i]= 3500;
                }
			
		        else if (age[i] > 60)
		        {
		        	Price[i]= 2300;
	            }
            
		sum += Price[i];
		discount = sum-(sum*0.05);
		    }
		 cout<< "                                                      "<< endl;
		 cout<< "          Total amount of your tickets is: RM "<< sum <<endl;
	     cout<< "             Price after discount: RM "<< discount << endl;
	     cout<< "                                                      "<< endl;
	     cout<< "       Your tickets have been booked successfully.    "<< endl;
	     cout<< "       The receipt have been sent to your Whatsapp.   " << endl;
	     cout<< "                                                      "<< endl;
	     cout<< "                                                          "<< endl;
	     cout<< "__________________________________________________________" << endl;
	     cout<< "    WE ARE READY WHEN YOU ARE,HAVE A SAFE RIDE WITH US    " << endl;
	  
             
 
break;

case 'S':
	for (i=0; i<a; i++) 
	{      
	    if (age[i] <= 2)
	    {
		   Price[i] = 0;
	       cout<< "Toddlers dont need seats" << endl;
        }
		
		else if (age[i] > 6 && age[i] <= 12)
		{
			Price[i]= 100;
    	}
		
			
		else if (age[i] > 13 && age[i] <= 59)
		{
			Price[i]= 400;
        }
			
		else if (age[i] >= 60)
		{
			Price[i]= 200;
	    }
			
		sum += Price[i];
		discount = sum-(sum*0.05);  
   }
   
      cout<< "                                                      "<< endl;
      cout<< "         Total amount for your tickets is: RM "<< sum << endl;
	  cout<< "            Price after discount: RM "<< discount << endl;
	  cout<< "                                                      "<< endl;
	  cout<< "       Your tickets have been booked successfully.    "<< endl;
	  cout<< "       The receipt have been sent to your Whatsapp.   " << endl;
	  cout<< "                                                      "<< endl;
	  cout<< "                                                          "<< endl;
	  cout<< "__________________________________________________________" << endl;
	  cout<< "    WE ARE READY WHEN YOU ARE,HAVE A SAFE RIDE WITH US    " << endl;
	  
 break;
 
 case 'T':
 
 	for (i=0; i<a; i++) 
	{      
	    if (age[i] <= 2)
	    {
		   Price[i] = 0;
	       cout<< "Toddlers dont need seats" << endl;
        }
		
		else if (age[i] > 6 && age[i] <= 12)
		{
			Price[i]= 250;
    	}
		
			
		else if (age[i] > 13 && age[i] <= 59)
		{
			Price[i]= 500;
        }
			
		else if (age[i] >= 60)
		{
			Price[i]= 200;
	    }
			
		sum += Price[i];
		discount = sum-(sum*0.05);  
   }
      cout<< "                                                      "<< endl;
      cout<< "          Total amount of your tickets is: RM"<< sum <<endl;
	  cout<< "              Price after discount: RM "<< discount << endl;
	  cout<< "                                                      "<< endl;
	  cout<< "       Your tickets have been booked successfully.    "<< endl;
	  cout<< "       The receipt have been sent to your Whatsapp.   " << endl;
	  cout<< "                                                      "<< endl;
	  cout<< "                                                          "<< endl;
	  cout<< "__________________________________________________________" << endl;
	  cout<< "    WE ARE READY WHEN YOU ARE,HAVE A SAFE RIDE WITH US    " << endl;
	  
	  
 break;
 
 case 'U':
 	
 	for (i=0; i<a; i++) 
	{      
	    if (age[i] <= 2)
	    {
		   Price[i] = 0;
	       cout<< "Todlers dont need seats" << endl;
        }
		
		else if (age[i] > 6 && age[i] <= 12)
		{
			Price[i]= 1150;
    	}
		
			
		else if (age[i] > 13 && age[i] <= 59)
		{
			Price[i]= 4500;
        }
			
		else if (age[i] >= 60)
		{
			Price[i]= 3200;
	    }
			
		sum += Price[i];
		discount = sum-(sum*0.05);  
   }
      cout<< "                                                      "<< endl;
      cout<< "         Total amount of your tickets is: RM "<< sum <<endl;
	  cout<< "           Price after discount: RM "<< discount << endl;
 	  cout<< "                                                      "<< endl;
	  cout<< "       Your tickets have been booked successfully.    "<< endl;
	  cout<< "       The receipt have been sent to your Whatsapp.   " << endl;
	  cout<< "                                                      "<< endl;
	  cout<< "                                                          "<< endl;
	  cout<< "__________________________________________________________" << endl;
	  cout<< "    WE ARE READY WHEN YOU ARE,HAVE A SAFE RIDE WITH US    " << endl;
	  
    }
    return mad;
}

