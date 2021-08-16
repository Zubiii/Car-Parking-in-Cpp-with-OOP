#include<iostream>
#include<stdlib.h>
#include<time.h>  
#include<windows.h>
#include<mmsystem.h>
#include<algorithm>
#include<string.h>
#include<fstream>
int tot_income=0;      // globle variable 
using namespace std;
fstream hout("abc.txt");
// fstream hout();

class front{
	private:
		string veh_no;
		string veh_type, floor;
		int charges;
	public:
		void setVehNo(string vn){
			veh_no = vn;
		}
		string getVehNo(){
			return veh_no;
		}

		void setVehType(string vt){
			veh_type = vt;
		}
		string getVehType(){
			return veh_type;
		}

		void setFloor(string f){
			floor = f;
		}
		string getFloor(){
			return floor;
		}

		void setCharges(int c){
			charges = c;
		}
		int getCharges(){
			return charges;
		}

		void groupName(){
			cout<<endl<<endl;
			cout<<" ****************************************************************************"<<endl	;
			cout<<" ****************************************************************************"<<endl	;
			cout<<" **                                                                        **"<<endl ;
			cout<<" **      *****    ******     ******  *      *  *****          /****        **"<<endl ;
			cout<<" **     *     *   *     *   *      * *      *  *    *         *            **"<<endl ;
			cout<<" **    *          *     *   *      * *      *  *    *         *            **"<<endl ;
			cout<<" **    *          ******    *      * *      *  *****          * ****       **"<<endl ;
			cout<<" **    *    ****  *    *    *      * *      *  *       *****  **    *      **"<<endl ;
			cout<<" **     *    * *  *     *   *      * *      *  *              *     *      **"<<endl ;
			cout<<" **      ****  *  *      *   ******   ******   *               *****       **"<<endl ;
			cout<<" **                                                                        **"<<endl ;
			cout<<" ****************************************************************************"<<endl	;
			cout<<" ****************************************************************************"<<endl	;
		}
		int member(){
			Sleep(1000);   	
			system("CLS");
			cout<<endl<<endl;
			cout<<"--------------------------------------------------------------------------------"<<endl;
			cout<<"--------------------------------------------------------------------------------"<<endl;
			cout<<"-----------                  MEMBERS OF GROUP - 2                      ---------"<<endl<<endl;
			Beep(1000,500);
			Sleep(800);
			cout<<"----------- 1: Saad Ashraf             (MCSM-F20-061)                  ---------"<<endl<<endl;
			cout<<"----------- 2: Muhammad Zubair         (MCSM-F20-032)                  ---------"<<endl<<endl;
			Beep(1000,500);
			Sleep(800);

			cout<<"------------------- This program is also uploaded on GITHUB -------------------"<<endl;
			Beep(1000,500);
			Sleep(800);
			cout<<"--------------------------------------------------------------------------------"<<endl;
			cout<<"press any key to next";
			cin.get();
			return 0;
		}
		void car(){
			Sleep(1000);   	
			system("CLS");
			Beep(1000,500);
			cout<<endl<<endl;
			cout<<" ****************************************************************************"<<endl	;
			cout<<" ****************************************************************************"<<endl	;
			cout<<" **                                                                        **"<<endl ;
			cout<<" **                      ****    *******   ******                          **"<<endl ;
			cout<<" **                     *    *   *     *   *     *                         **"<<endl ;
			cout<<" **                    *         *     *   *     *                         **"<<endl ;
			cout<<" **                    *         *******   ******                          **"<<endl ;
			cout<<" **                    *         *     *   *    *                          **"<<endl ;
			cout<<" **                     *    *   *     *   *     *                         **"<<endl ;
			cout<<" **                      ****    *     *   *      *                        **"<<endl ;
			cout<<" **                                                                        **"<<endl ;
			cout<<" ****************************************************************************"<<endl	;
			cout<<" ****************************************************************************"<<endl	;
		}
		void welcome(){
			Sleep(1000);   	
			system("CLS");
			Beep(1000,500);
			cout<<endl<<endl;
			cout<<" ****************************************************************************"<<endl	;
			cout<<" ****************************************************************************"<<endl	;
			cout<<" **                                                                        **"<<endl ;
			cout<<" **     *       * ******* *       ****     ****   **     **  ********      **"<<endl ;
			cout<<" **     *       * *       *      *    *   *    *  * *   * *  *             **"<<endl ;
			cout<<" **     *       * *       *     *        *      * *  * *  *  *             **"<<endl ;
			cout<<" **     *   *   * ******* *     *        *      * *   *   *  *******       **"<<endl ;
			cout<<" **     *  * *  * *       *     *        *      * *       *  *             **"<<endl ;
			cout<<" **     * *   * * *       *      *    *   *    *  *       *  *             **"<<endl ;
			cout<<" **     **     ** ******* *****   ****     ****   *       *  ********      **"<<endl ;
			cout<<" **                                                                        **"<<endl ;
			cout<<" ****************************************************************************"<<endl	;
			cout<<" ****************************************************************************"<<endl	;
			
		}
		void parking(){
			Sleep(1000);   	
			system("CLS");
			Beep(1000,500);
			cout<<endl<<endl;		
			cout<<" ****************************************************************************"<<endl	;
			cout<<" ****************************************************************************"<<endl	;
			cout<<" **                                                                        **"<<endl ;
			cout<<" **       *****    *******   ******    *   *   *  **     *    *****        **"<<endl ;
			cout<<" **       *    *   *     *   *     *   *  *    *  * *    *   *     *       **"<<endl ;
			cout<<" **       *    *   *     *   *     *   * *     *  *  *   *  *              **"<<endl ;
			cout<<" **       *****    *******   ******    **      *  *   *  *  *              **"<<endl ;
			cout<<" **       *        *     *   *    *    * *     *  *    * *  *  *****       **"<<endl ;
			cout<<" **       *        *     *   *     *   *  *    *  *     **  *    * *       **"<<endl ;
			cout<<" **       *        *     *   *      *  *   *   *  *      *   ***** *       **"<<endl ;
			cout<<" **                                                                        **"<<endl ;
			cout<<" ****************************************************************************"<<endl	;
			cout<<" ****************************************************************************"<<endl<<endl<<endl	;		
		}
};
int list(){
	int type;
	string b= "bike ";
	string c= " car ";
	string r= "riksha";
	string w= "wagon ";
	cout<<endl<<endl;
	cout<<" ********************************"<<endl;	
	cout<<" *    select your car type      *"<<endl;
	cout<<" ********************************"<<endl;
	cout<<"   ________________________ "<<endl;
	cout<<"   |                       |"<<endl; 
	cout<<"   |     1:     bike       |"<<endl; 
	cout<<"   |     2:     car        |"<<endl;
	cout<<"   |     3:     riksha     |"<<endl; 
	cout<<"   |     4:     wagon      |"<<endl;
	cout<<"   |_______________________|"<<endl<<endl;
	cin>>type;
	cout<<"-------------------------------------------------------------"<<endl<<endl;
	class front obj;
	system("cls");
	obj.parking();

	 if(type== 1) 
		  return 1;		  
	 else if( type == 2)
	        return 2;
			
	 else if( type == 3)
	        return 3;
			
	 else if( type == 4)
	        return 4;     
  	
}

int login()
{
	int passward = 12345;
	char getusername[15];
	int getpassword;
	cout<<endl<<endl;
	cout<<" ********************************"<<endl;	
	cout<<" *  first time login by ADMIN   *"<<endl;
	cout<<" ********************************"<<endl;
	cout<<" * Enter User Name: ";
	cin>>getusername; cout<<endl;
	cout<<" * Enter Password: ";
	cin>>getpassword; cout<<endl;

	if(strcmp(getusername, "zubiii") == 0){
		cout<<endl<<endl<<" Password Correct, You are login Successfully!"<<endl;
		return 0;
	}else{
		cout<<endl<<endl<<" Your Password Incorrect!"<<endl;
		return 1;
	}

}	

int security(){
	int secu;
	cout<<endl<<endl;
	cout<<" *****************************************"<<endl;	
	cout<<" *        Select your security type      *"<<endl;
	cout<<" *****************************************"<<endl;
	cout<<"    _____________________________________ "<<endl;
	cout<<"   |                                     |"<<endl; 
	cout<<"   |     1:     normal                   |"<<endl; 
	cout<<"   |     2:     special (extra charges)  |"<<endl;
	cout<<"   |        				                |"<<endl;
	cout<<"   |_____________________________________|"<<endl<<endl;
	cin>>secu;
	cout<<"------------------------------------------"<<endl<<endl;
	return secu;
}


int token(string Veh_typ,string Veh_NO ,int charges,string location,int security){
	time_t tt;
	struct tm *ti;
	time(&tt);
	ti=localtime(&tt);
	
	if (security== 1)
	{  }
	else
	 charges+=20;
	
	int a= 20;
	tot_income = tot_income + charges;       ////   counting totat income 
	system("cls");
	cout<<" ********************************"<<endl;	
	cout<<" *           token              *"<<endl;
	cout<<" ********************************"<<endl;	
	cout<<" *  vehicle  :                  *"<<endl;
	cout<<" *         "<<Veh_typ <<"                 *"<<endl;
	cout<<" *                              *"<<endl;
	cout<<" *  vehicle No.                 *"<<endl;
	cout<<" *        "<< Veh_NO<<"                *"<<endl;
	cout<<" *                              *"<<endl;
	cout<<" *  day+time :                  *"<<endl;
	cout<<" *  "<<asctime(ti)<<"   *"<<endl;
	cout<<" *                              *"<<endl;
	cout<<" *  location :                  *"<<endl;
	cout<<" *       "<< location <<"           *"<<endl;
	cout<<" *                              *"<<endl;
	cout<<" *  charges  :                  *"<<endl;
	cout<<" *       "<< charges <<"                   *"<<endl;
	cout<<" *                              *"<<endl;
	cout<<" ********************************"<<endl;
	cout<<" *      thanks for coming       *"<<endl;
	cout<<" ********************************"<<endl;

	fstream hout("abc.txt");

	hout<<Veh_typ<<"\t\t\t\t"<< Veh_NO  <<"\t\t\t\t"<< location <<"\t\t\t\t"<< charges<<endl; ;
	hout.close();

	return 0;
}

int opt(){
	File *fle;
	int act;
	cout<<endl<<endl;
	cout<<" *****************************************"<<endl;	
	cout<<" *         select your action            *"<<endl;
	cout<<" *****************************************"<<endl;
	cout<<"   _________________________________ "<<endl;
	cout<<"   |                                |"<<endl; 
	cout<<"   |     1:     Add vehicle         |"<<endl; 
	cout<<"   |     2:     Total parked Veh    |"<<endl;
	cout<<"   |     3:     Total income        |"<<endl; 
	cout<<"   |     4:     Delete              |"<<endl;
	cout<<"   |     5:     See all record      |"<<endl;
	cout<<"   |________________________________|"<<endl<<endl;
	cin>>act;
	cout<<"-------------------------------------------------------------"<<endl<<endl;

	return act;
}	

  
      
int main(){
	
	while(login() == 0){
		front obj;
		obj.groupName();
		obj.member();
		obj.welcome();
		obj.car();
		obj.parking();
		hout<<"WEHICLE_TYPE \t\t\t VEHICLE_NO.\t\t\t LOCATION \t\t\t charges"<<endl;
		int a ,secu ;
		// char Veh_NO[8] ;
		// string Veh_typ;
	
		// vehicle type
		// int charges;
		// string floor;
		int totalParkVeh = 0;
		// int tot_income =0;
		char again;
		do{
			
			int ab= opt();
			//	cout<<ab;
			switch (ab){
				case  1:{
					int vt=list(); 
					if (vt==1){
						obj.setVehType("bike");	
						obj.setCharges(20);
						obj.setFloor("2nd_basement");
						totalParkVeh++;
					}
					else if(vt==2){
						obj.setVehType("car");	
						obj.setCharges(40);
						obj.setFloor("Ground Floor");
						totalParkVeh++;
					}
					else if(vt==3){
						obj.setVehType("riksha");
						obj.setCharges(30);
						obj.setFloor(" 1st_floor");
						totalParkVeh++;	
					}
					else if(vt==4){
						obj.setVehType("wagon");
						obj.setCharges(50);
						obj.setFloor(" basement");
						totalParkVeh++;
					}
				
				
					string vn;
					cout<<"------------------------------------------";                      
					cout<<"enter your vehicle number   :   ";     // vehicle    number
					cin>>vn;
					obj.setVehNo(vn);
			
				
					secu=security() ;                               //security type 
					token(obj.getVehType(),obj.getVehNo(),obj.getCharges(),obj.getFloor(),secu);
					break;
				}
				case  2:
				{
					cout<<" total  number of vehical are   :"<<totalParkVeh<<endl;
					break;
				}
				case  3:
				{
					cout<< "total income is   :"<<tot_income<<endl;
					break;
				}
				case  4:
				{
					hout.open("abc.txt");
					remove("abc.txt");
					break;
				}
				case  5:
				{
					char c;
					fstream hout("abc.txt");
					while(hout.eof()==0)
					{
						hout.get(c);
						cout<<c;
					}
					break;
				}	
			}
		
			cout<<" ========= Do You Want To Enter Again? Press 'Y | y' ======== "<<endl;
			cin>>again;
		}while( again=='y' || again=='Y');
	}

}
