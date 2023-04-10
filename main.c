#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <time.h>


//Shadowy
//024 OP comrade of all times
#define bar 219
//a structure containing all the variables for candidate input details
//qwerty mans
struct details
{
	char name [20], surname [20];
	char code [7-1];
	int phone;
	struct resident
	{
		char district [20];
		char area [10];
		int age;
		struct venue_time_date
		{
			char venue [20];

			struct doctor_lab_details
				{
					char FullName [30];
					char vstatus  [10];
					char vresult  [15];
					char psex	  [10];
					char sign	  [10];
					char date	  [10];
					char time	  [10];
					char lab	  [20];
					char district [20];
				}l;

		}vtd;
	}r;

}d;
///a replica for sizeof (); function
long int store;
//to be linked to the header file

///////////////////////////////

////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////


//surfing through the console plane
COORD coord = {0,0};
void gotoxy (int x, int y)
{
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//all my function are here
void home_page ();
void landing();
void details ();
void display();
void menu ();
void admin ();
void logi ();
void top_tier ();
void user_modify();

//tha header files
#include "sign_login.h"
#include "top_tier.h"
#include "start.h"
#include "form.h"
#include "curtain.h"

//tha main function
int main ()

{
	call_em ();
	//display ();
	//form_gen ();
		//sign ();
	//	topView ();
	//	details ();
	//	start_all ();
    //top_tier ();
	//calling em functions here
	landing();
//	home_page ();
//	details ();
			system ("cls");
			//	display();
			//menu();
		//	sign_up ();
	return 0;
}
void home_page ()
{
	gotoxy (55, 2);
		printf ("Cybernesia 22  Vaccination Registration");
	gotoxy (40, 3);
		printf ("You have taken a right step in coming here for vaccine registration");
	gotoxy (49, 4);
		printf ("*Please Fill In Your details in the Spaces Below*");
	gotoxy (55, 5);
		printf ("*Take a Photo of Your Code Please*");
}
void details ()
{
		char code_check [6];
	system ("cls");
	home_page ();
	FILE *opi;
		opi = fopen ("candidate/candidates.txt", "ab+");
			if (opi == NULL)
			{
				system ("cls");
					MessageBox(0,"FILE NOT FOUND","ERROR!",0);
			}
			else
			{
				fflush (stdin);
					gotoxy (60, 7);
						printf ("Enter First Name");
					gotoxy (62,8);
						gets(d.name);
							gotoxy (60, 10);
								printf ("Enter Surname");
							gotoxy (62, 11);
								gets (d.surname);
									gotoxy (60, 13);
										printf ("Enter District");
									gotoxy (62, 14);
										gets (d.r.district);
											gotoxy (60, 16);
												printf ("Enter Venue");
											gotoxy (62, 17);
												gets (d.r.vtd.venue);
													system ("cls");
														home_page ();
											gotoxy (60, 7);
												printf ("Enter Area");
											gotoxy (62, 8);
												gets (d.r.area);
									gotoxy (60, 10);
										printf ("Enter Phone Number");
									gotoxy (62, 11);
										scanf ("%d", &d.phone);
							gotoxy (60, 13);
								printf ("Enter Age");
							gotoxy (62, 14);
								scanf ("%d", &d.r.age);
								if (d.r.age <12)
								{
									system ("cls");
										MessageBox (0,"Sorry Only 12 and Above can\nregister", "\tFailed to register", 0);
											exit (0);
								}
	///////////////////GENERATION OF A SPECIAL CODE FOR ALL CANDIDATES/////////////////////////////////////
		srand (time(NULL));
			char alphaCollection [] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890";
				int e;
					int ex = 65, ey= 7;


						system ("cls");
							home_page ();
					gotoxy (45, 7);
							printf ("Your Reg Code is >> ");

					for (e=0; e < 6; ++ e)
					{
						d.code[e] = alphaCollection [rand () % strlen (alphaCollection)];
								gotoxy (ex, ey);
							printf ("%c", d.code[e]);
								Sleep (100);
									ex+=1;
					}
						getche ();
							system ("cls");
								gotoxy (60, 7);
									printf ("Enter Your Code Here");
								gotoxy (62, 8);
										fflush (stdin);
									gets (code_check);

									if (strcmp (code_check, d.code)==0)
									{
											fwrite (&d, sizeof (d), 1, opi);
											MessageBox(0,"SUBMITTED SUCCESSFULLY", "\tNOTIFICATION",0);
												landing ();
									}

									if (strcmp (code_check, d.code)!=0)
									{
										MessageBox(0, "Code doesn't Match\nEnter Your Details Correctly", "ERROR",0);
											landing ();
									}

			}
	fclose (opi);
}
void display(){

		char underScore = 95, GenCode [6], another [6];
		int temp=1, check_var=0, uno, j;

		char s = 205;
			char down = 186;
				char rtc = 187;
				char rbc = 188;
			char ltc = 201;
		char lbc = 200;
					gotoxy (30, 9);
			printf ("*Enter Your Regestration Code Below To View Your CyberNesia Vaccine Form*");

							int fex = 53, fey=15;
						for (j=0; j<25;++j)
						{
								gotoxy (fex, fey);
							printf ("%c", s);
								fex+=1;
						}
							fex = 53, fey = 18;
						for (j=0; j<25;++j)
						{
								gotoxy (fex, fey);
							printf ("%c", s);
								fex+=1;
						}
							gotoxy (52, 15);
								printf ("%c", ltc);
							gotoxy (52, 18);
								printf ("%c", lbc);
							gotoxy (78, 15);
								printf ("%c", rtc);
							gotoxy (78, 18);
								printf ("%c", rbc);

					gotoxy (58, 16);
						fflush (stdin);
						gets (GenCode);

	FILE *cad;
		cad = fopen ("candidate/candidates.txt", "rb");
			while (fread(&d, sizeof(d),1,cad)==1)
			{
					if (strcmp (GenCode, d.code)==0)
					{
						check_var=1;
							break;
					}
			//	gotoxy(20, 6);
			//printf ("*Make Sure to Take a ScreenShot of your receipt*");
			}
			if (check_var==1)
			{
					system ("cls");
					form_gen ();
						gotoxy (32, 8);
				printf ("NAME      : %s", d.name);
						gotoxy (70, 8);
				printf ("SURNAME      : %s", d.surname);
						gotoxy (32, 11);
				printf ("AGE       : %d", d.r.age);
						gotoxy (70, 11);
				printf ("PHONE NUMBER : %d", d.phone);
						gotoxy (32, 13);
				printf ("DISTRICT  : %s", d.r.district);
						gotoxy (70, 13);
				printf ("AREA         : %s", d.r.area);
						gotoxy (32, 15);
				printf ("VENUE     : %s", d.r.vtd.venue);
						gotoxy (70, 15);
				printf ("REGCODE      : %s", d.code);
						//doctors part
						gotoxy (32, 20);
				printf ("TESTED BY : %s", d.r.vtd.l.FullName);
						gotoxy (70, 20);
				printf ("C/SEX	   : %s", d.r.vtd.l.psex);
						gotoxy (32, 22);
				printf ("SIGNATURE : %s", d.r.vtd.l.sign);
						gotoxy (70, 22);
				printf ("DATE 	   : %s", d.r.vtd.l.date);
						gotoxy (32, 24);
				printf ("TIME 	  : %s", d.r.vtd.l.time);
						gotoxy (70, 24);
				printf ("LAB          : %s", d.r.vtd.l.lab);
						gotoxy (32, 26);
				printf ("District  : %s", d.r.vtd.l.district);
						gotoxy (70, 26);
				printf ("V/STATUS     : %.3s", d.r.vtd.l.vstatus);
						gotoxy (45, 30);
				printf ("V/RESULT  : %s", d.r.vtd.l.vresult);
						gotoxy (56, 31);
				printf ("________________");
				
			}
			else
			{
				MessageBox (0, "Match not Found Try Again", "Error", 0);
					system ("cls");
						menu ();
			}

		fclose (cad);
				
				gotoxy (45, 38);
					printf ("[  yes ]");
				gotoxy (75, 38);
					printf ("[  no  ]");
					gotoxy (65, 40);
						gets (another);
							
							if (strcmp ("yes", another)==0 || strcmp ("YES", another)==0)
							{
									int count, ex = 60, ey = 42;
							
									for (count =0; count <1; count ++)
											{	
													gotoxy (ex, ey);
												printf ("P");
													ex+=1;
														Sleep (100);
													gotoxy (ex, ey);
												printf ("l");
													ex+=1;
														Sleep (100);
													gotoxy (ex, ey);
												printf ("e");
													ex+=1;
														Sleep (100);
													gotoxy (ex, ey);
												printf ("a");
													ex+=1;
														Sleep (100);
													gotoxy (ex, ey);
												printf ("s");
													ex+=1;
														Sleep (100);
													gotoxy (ex, ey);
												printf ("e");
													ex+=2;
														Sleep (100);
														gotoxy (ex, ey);
												printf ("W");
													ex+=1;
														Sleep (100);
													gotoxy (ex, ey);
												printf ("a");
													ex+=1;
														Sleep (100);
													gotoxy (ex, ey);
												printf ("i");
													ex+=1;
														Sleep (100);
													gotoxy (ex, ey);
												printf ("t");
													ex+=1;
														Sleep (100);
													gotoxy (ex, ey);
												
											}
										getche ();
									Sleep (500);
										system ("cls");
											user_modify ();
											
							}
								
					
							if (strcmp ("no", another)==0 || strcmp ("NO", another)==0)
							{
									int count, ex = 60, ey = 42;
							
									for (count =0; count <1; count ++)
											{	
													gotoxy (ex, ey);
												printf ("P");
													ex+=1;
														Sleep (100);
													gotoxy (ex, ey);
												printf ("l");
													ex+=1;
														Sleep (100);
													gotoxy (ex, ey);
												printf ("e");
													ex+=1;
														Sleep (100);
													gotoxy (ex, ey);
												printf ("a");
													ex+=1;
														Sleep (100);
													gotoxy (ex, ey);
												printf ("s");
													ex+=1;
														Sleep (100);
													gotoxy (ex, ey);
												printf ("e");
													ex+=2;
														Sleep (100);
														gotoxy (ex, ey);
												printf ("W");
													ex+=1;
														Sleep (100);
													gotoxy (ex, ey);
												printf ("a");
													ex+=1;
														Sleep (100);
													gotoxy (ex, ey);
												printf ("i");
													ex+=1;
														Sleep (100);
													gotoxy (ex, ey);
												printf ("t");
													ex+=1;
														Sleep (100);
													gotoxy (ex, ey);
												
											}
										getche ();
									Sleep (500);
										system ("cls");
											menu ();
							}
}

void landing ()
{
//ima change the bg color
	system ("color 5f");
	int val,val1,val2,val3;
	char accept [10]	= "register";
	char men  [10] 		= "menu";
	char adm  [10]		= "admiN";
	char ex	  [10] 		= "exit";
	char input  [10];
	//deco materials mwahaha
	char s = 205;
	char d = 186;
		char rtc = 187;
		char rbc = 188;

			char ltc = 201;
			char lbc = 200;
				int i, j=3, k=3;
													///Objectives
															gotoxy(5,4);
																printf ("OUR MISSION");
															gotoxy(6,6);
																printf (". To make sure");
															gotoxy(5,7);
																printf ("we live in a world");
															gotoxy(5,8);
																printf ("without Cybernesia");
															gotoxy(5,9);
																printf ("22 ");
															gotoxy(6,11);
																printf (". To reach out to ");
															gotoxy(5,12);
																printf ("all corners of  ");
															gotoxy(5,13);
																printf ("planet earth ");
															gotoxy(5,18);
																printf ("/////////////////");
															gotoxy(6,19);
																printf ("VACCINE  PORTAL/");

													/////	//    //  ||						 ///    //					o
												  //		//    //  ||						 ////   //
												  //		 //////	  ||///////	 //////  || ___  //  /  //    //////  //// ||   |////
												  //			//	  ||	//	//___/	 |||/    //   / //   //___/  |___  || ||    ||
												   //////	/////	  ///////  ////////  ||      //    ///  //////// __//  || ||/||//////

		gotoxy(3,2);
		printf ("%c", ltc);
				for (i=0; i<20; ++i)
				{
					gotoxy(j, k);
					printf ("%c", d);
					k+=1;
				}

				k=2;
						j=4;
				for (i=0;i<19;++i)
					{

						gotoxy(j, k);
						printf ("%c", s);
						j+=1;
					}

		gotoxy(23, 2);
		printf ("%c", rtc);

					j=23;
					k=3;
				for (i=0; i<20; ++i)
				{
					gotoxy(j, k);
					printf ("%c", 186);
					k+=1;
				}

				k=23;
						j=22;
				for (i=0;i<19;++i)
					{

						gotoxy(j, k);
						printf ("%c", s);

						j-=1;
					}
		gotoxy (23, 23);
		printf ("%c", rbc);
			gotoxy(3, 23);
			printf("%c", lbc);

				gotoxy(26,5);
				printf("%c", ltc);

															j=27;k=5;
															for (i=0;i<=69;++i)
															{
																gotoxy(j, k);
																printf ("%c", s);
																j+=1;
															}
															j=97;k=6;
															for(i=0;i<18;++i)
															{
																gotoxy(j,k);
																printf("%c",d);
																k+=1;
															}
																							gotoxy(97,23);
																							printf ("%c", rbc);
																								gotoxy(97, 5);
																								printf ("%c", rtc);
															k=23;j=96;
															for (i=0;i<=69;++i)
															{
																gotoxy (j,k);
																printf ("%c", s);
																j-=1;
															}
																							gotoxy(26,23);
																							printf ("%c", lbc);
															k=22;j=26;
															for (i=0;i<17;++i)
															{
																gotoxy(j,k);
																printf("%c", d);
																k-=1;
															}
																													j=100;k=3;
																													for(i=0;i<20;++i)
																													{
																														gotoxy(j,k);
																														printf ("%c", d);
																														k+=1;
																													}
																													k=23;j=101;
																																					gotoxy(100,2);
																																					printf("%c", ltc);
																													for (i=0;i<17;++i)
																													{
																														gotoxy(j,k);
																														printf ("%c",s);
																														j+=1;
																													}
																																					gotoxy(100,23);
																																					printf("%c", lbc);

															k=22;j=118;
															for (i=0;i<20;++i)
															{
																gotoxy(j,k);
																printf ("%c",d);
																k-=1;
															}
																							gotoxy(118,23);
																							printf ("%c", rbc);

															k=2;j=117;
															for(i=0;i<17;++i)
															{
																gotoxy(j,k);
																printf("%c",s);
																j-=1;
															}
																							gotoxy(118,2);
																							printf("%c", rtc);
									k=17;j=40;
									for (i=0;i<46;++i)
									{
										gotoxy (j,k);
										printf ("%c",s);
										j+=1;
									}
		gotoxy(39,17);
		printf("%c",ltc);
			gotoxy(86,17);
			printf("%c", rtc);

									k=18;j=86;
									for (i=0;i<2;++i)
									{
										gotoxy(j,k);
										printf ("%c",d);
										k+=1;
									}
																											gotoxy(86,20);
																											printf("%c",rbc);

																	k=20;j=85;
																	for (i=0;i<46;++i)
																	{
																		gotoxy(j,k);
																		printf("%c",s);
																		j-=1;
																	}

																												gotoxy(39,20);
																												printf("%c",lbc);

																	k=19;j=39;
																	for (i=0;i<2;++i)
																	{
																		gotoxy(j,k);
																		printf("%c",d);
																		k-=1;
																	}
			gotoxy(34,1);
				printf("CYBERNESIA 22 VACCINE PORTAL FROM THE GOVT OF MALAWI");
					gotoxy (50,2);
						printf ("The Warm Heart Of Africa");
							gotoxy(33,4);
								printf("*Please Kindly fill in your details in the space below*");
									gotoxy(50,8);
										printf("Enter 'register' to start");
									gotoxy (49,10);
										printf("Enter 'menu' to get reciept");
											gotoxy(35, 13);
												printf ("NOTE: Only Those that are of 12 yrs and above, are allowed to");
													gotoxy(41,14);
														printf("register");

									gotoxy(55,16);
										printf("R E G I S T E R");
																								gotoxy(102,3);
																							printf("Type 'exit' to");
																						gotoxy(104,4);
																					printf ("close the");
																				gotoxy(106,5);
																			printf ("Program");
										gotoxy(46,19);
				scanf ("%s", input);
				val  = strcmp (accept, input);
				val1 = strcmp (men,    input);
				val2 = strcmp (adm,    input);
				val3 = strcmp (ex,     input);


				while (val==0)
				{

						details ();
				}
							while (val1==0)
							{
								system ("cls");
								menu ();
							}
										while (val2==0)
										{
											system ("cls");
											admin ();
										}
												while (val3==0)
												{
													system("cls");
													exit (0);
												}
				while (val!=0)
				{


						gotoxy(40,19);
						printf ("Invalid Entry please try again");
							Sleep(1000);


									system("cls");
									landing ();
				}

					 							while (val1!=0)
													{


															gotoxy(40,19);
															printf ("Invalid Entry please try again");
																Sleep(1000);


																		system("cls");
																		landing ();
													}

				while (val2!=0)
				{


						gotoxy(40,19);
						printf ("Invalid Entry please try again");
							Sleep(1000);


									system("cls");
									landing ();
				}


													while (val3!=0)
													{


															gotoxy(40,19);
															printf ("Invalid Entry please try again");
																Sleep(1000);


																		system("cls");
																		landing ();
													}

}
void menu ()
{
	system ("color 5f");
		char s = 205;
	char d = 186;
		char rtc = 187;
		char rbc = 188;

			char ltc = 201;
			char lbc = 200;
				int i, j=3, k=3;
													///Objectives
															gotoxy(5,4);
																printf ("OUR MISSION");
															gotoxy(6,6);
																printf (". To make sure");
															gotoxy(5,7);
																printf ("we live in a world");
															gotoxy(5,8);
																printf ("without Cybernesia");
															gotoxy(5,9);
																printf ("22 ");
															gotoxy(6,11);
																printf (". To reach out to ");
															gotoxy(5,12);
																printf ("all corners of  ");
															gotoxy(5,13);
																printf ("planet earth ");
															gotoxy(5,18);
																printf ("/////////////////");
															gotoxy(6,19);
																printf ("VACCINE  PORTAL/");

													/////	//    //  ||						 ///    //					o
												  //		//    //  ||						 ////   //
												  //		 //////	  ||///////	 //////  || ___  //  /  //    //////  //// ||   |////
												  //			//	  ||	//	//___/	 |||/    //   / //   //___/  |___  || ||    ||
												   //////	/////	  ///////  ////////  ||      //    ///  //////// __//  || ||/||//////

		gotoxy(3,2);
		printf ("%c", ltc);


				for (i=0; i<20; ++i)
				{
					gotoxy(j, k);
					printf ("%c", d);
					k+=1;
				}

				k=2;
						j=4;
				for (i=0;i<19;++i)
					{

						gotoxy(j, k);
						printf ("%c", s);
						j+=1;
					}

		gotoxy(23, 2);
		printf ("%c", rtc);

					j=23;
					k=3;
				for (i=0; i<20; ++i)
				{
					gotoxy(j, k);
					printf ("%c", 186);
					k+=1;
				}

				k=23;
						j=22;
				for (i=0;i<19;++i)
					{

						gotoxy(j, k);
						printf ("%c", s);

						j-=1;
					}
		gotoxy (23, 23);
		printf ("%c", rbc);
			gotoxy(3, 23);
			printf("%c", lbc);

				gotoxy(26,5);
				printf("%c", ltc);

															j=27;k=5;
															for (i=0;i<=69;++i)
															{
																gotoxy(j, k);
																printf ("%c", s);
																j+=1;
															}
															j=97;k=6;
															for(i=0;i<18;++i)
															{
																gotoxy(j,k);
																printf("%c",d);
																k+=1;
															}
																							gotoxy(97,23);
																							printf ("%c", rbc);
																								gotoxy(97, 5);
																								printf ("%c", rtc);
															k=23;j=96;
															for (i=0;i<=69;++i)
															{
																gotoxy (j,k);
																printf ("%c", s);
																j-=1;
															}
																							gotoxy(26,23);
																							printf ("%c", lbc);
															k=22;j=26;
															for (i=0;i<17;++i)
															{
																gotoxy(j,k);
																printf("%c", d);
																k-=1;
															}
																													j=100;k=3;
																													for(i=0;i<20;++i)
																													{
																														gotoxy(j,k);
																														printf ("%c", d);
																														k+=1;
																													}
																													k=23;j=101;
																																					gotoxy(100,2);
																																					printf("%c", ltc);
																													for (i=0;i<17;++i)
																													{
																														gotoxy(j,k);
																														printf ("%c",s);
																														j+=1;
																													}
																																					gotoxy(100,23);
																																					printf("%c", lbc);

															k=22;j=118;
															for (i=0;i<20;++i)
															{
																gotoxy(j,k);
																printf ("%c",d);
																k-=1;
															}
																							gotoxy(118,23);
																							printf ("%c", rbc);

															k=2;j=117;
															for(i=0;i<17;++i)
															{
																gotoxy(j,k);
																printf("%c",s);
																j-=1;
															}
																							gotoxy(118,2);
																							printf("%c", rtc);
									k=17;j=40;
									for (i=0;i<46;++i)
									{
										gotoxy (j,k);
										printf ("%c",s);
										j+=1;
									}
		gotoxy(39,17);
		printf("%c",ltc);
			gotoxy(86,17);
			printf("%c", rtc);

									k=18;j=86;
									for (i=0;i<2;++i)
									{
										gotoxy(j,k);
										printf ("%c",d);
										k+=1;
									}
																											gotoxy(86,20);
																											printf("%c",rbc);

																	k=20;j=85;
																	for (i=0;i<46;++i)
																	{
																		gotoxy(j,k);
																		printf("%c",s);
																		j-=1;
																	}

																												gotoxy(39,20);
																												printf("%c",lbc);

																	k=19;j=39;
																	for (i=0;i<2;++i)
																	{
																		gotoxy(j,k);
																		printf("%c",d);
																		k-=1;
																	}

								///Here we go again//
								char choice;
								char esc = 27;
								/////////
										gotoxy(50, 8);
									printf ("1. View receipt");
								gotoxy(50,12);
							printf ("2. Log in as an admin");
																		gotoxy(102,3);
																			printf("Press 'Esc' to");
																				gotoxy(102,4);
																					printf ("go back");

			gotoxy (60, 19);
			choice = getche ();
				//trying to use input from keyboard;
			if (choice == esc)
			{
				system("cls");
				landing ();
			}
				switch (choice)
				{
					case '1': {
						system ("cls");
						display ();
						break;
					}
					case '2':{
						system ("cls");
						login ();
						break;
					}
				}
}
///////////////////////////////////////////////////////
void top_tier ()

{

	system ("color 47");
    char *men [4] = {"1. view registered canditates", "2. delete a registered candidate", "3. Modify candidate record", "4. Send Test Results"};
        int i;
            char select, ESC = 27;
                    int ex = 60,wy = 15;
                    	system ("cls");
                         for (i=0;i<4;++i)
                            {
                                gotoxy(ex, wy);
                                printf ("%s", men[i]);
                                wy+=2;
                            }
                        gotoxy(ex, wy);
                            printf ("> > >");
                            ex+=6;
                    gotoxy (ex, wy);
                        select = getche ();

						if (select == ESC)
				{
					system ("cls");
						menu ();
				}
					switch (select)
					{
						case '1':{
								system ("cls");
							topView ();
							break;
						}
						case '2':{
								system ("cls");
							topDelete ();
							break;
						}
						case '3':{
								system ("cls");
							topModify ();
							break;
						}
						case '4':{
								system ("cls");
							topLabMod ();
							break;
						}
						default :{
								system ("cls");
						gotoxy(ex, wy);
							printf ("Invalid Entry");
								system ("cls");
									top_tier ();
							break;
						}
					}

}
//////////*******************************////////
void admin ()
{
	sign ();
		system ("cls");
			landing ();
}

//////////////////////////////////////////////////

void logi ()
{
	login ();
		top_tier ();
}
void user_modify ()
{
	int check_var=0, me;
		char GenCode [6];
		char s = 205;
			char down = 186;
				char rtc = 187;
				char rbc = 188;
			char ltc = 201;
		char lbc = 200;
	
	store = sizeof (d);
			
					gotoxy (45, 9);
			printf ("*Enter Candidate Registration Code Below*");
					
							int fex = 53, fey=15;
						for (me=0; me<25;++me)
						{
								gotoxy (fex, fey);
							printf ("%c", s);
								fex+=1;
						}
							fex = 53, fey = 18;
						for (me=0; me<25;++me)
						{
								gotoxy (fex, fey);
							printf ("%c", s);
								fex+=1;
						}
							gotoxy (52, 15);
								printf ("%c", ltc);
							gotoxy (52, 18);
								printf ("%c", lbc);
							gotoxy (78, 15);	
								printf ("%c", rtc);
							gotoxy (78, 18);
								printf ("%c", rbc);
							gotoxy (58, 16);
							
						fflush (stdin);
						gets (GenCode);
				
				FILE *cad;
					cad = fopen ("candidate/candidates.txt", "rb+");
						
						while (fread (&d, sizeof (d), 1, cad)==1)
						{
							if (strcmp (GenCode, d.code)==0)
							{
								system ("cls");
								home_page ();
								fflush (stdin);
					gotoxy (60, 7);
						printf ("Enter First Name");
					gotoxy (62,8);
						gets(d.name);
							gotoxy (60, 10);
								printf ("Enter Surname");
							gotoxy (62, 11);
								gets (d.surname);
									gotoxy (60, 13);
										printf ("Enter District");
									gotoxy (62, 14);
										gets (d.r.district);
											gotoxy (60, 16);
												printf ("Enter Venue");
											gotoxy (62, 17);
												gets (d.r.vtd.venue);
													system ("cls");
														home_page ();
											gotoxy (60, 7);
												printf ("Enter Area");
											gotoxy (62, 8);
												gets (d.r.area);
									gotoxy (60, 10);
										printf ("Enter Phone Number");
									gotoxy (62, 11);
										scanf ("%d", &d.phone);
							gotoxy (60, 13);
								printf ("Enter Age");
							gotoxy (62, 14);
								scanf ("%d", &d.r.age);
								if (d.r.age <12)
								{
									system ("cls");
										MessageBox (0,"Sorry Only 12 and Above can\nregister", "\tFailed to register", 0);
											exit (0);
								}
	///////////////////GENERATION OF A SPECIAL CODE FOR ALL CANDIDATES/////////////////////////////////////
		srand (time(NULL));
			char alphaCollection [] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890";
				int e;
					int ex = 65, ey= 7;
						
						
						system ("cls");
							home_page ();
					gotoxy (45, 7);
							printf ("Your Reg Code is >> ");
							
					for (e=0; e < 6; ++ e)
					{
						d.code[e] = alphaCollection [rand () % strlen (alphaCollection)];
								gotoxy (ex, ey);
							printf ("%c", d.code[e]);
								Sleep (100);
									ex+=1;
					}
						getche ();
							system ("cls");
								gotoxy (60, 7);
									printf ("Enter Your Code Here");
								gotoxy (62, 8);
										fflush (stdin);
									gets (GenCode);
									
									if (strcmp (GenCode, d.code)==0)
									{
											fseek(cad, -store, SEEK_CUR);
											fwrite (&d, sizeof (d), 1, cad);
											MessageBox(0,"SUBMITTED SUCCESSFULLY", "\tNOTIFICATION",0);
													system ("cls");
												menu ();
									}	
									
									if (strcmp (GenCode, d.code)!=0)
									{
										MessageBox(0, "Code doesn't Match\nEnter Your Details Correctly", "ERROR",0);
											system ("cls");
												menu ();
									}
							
									check_var = 1;
									break;				
						}
						}
									if (!check_var)
									{
										MessageBox (0, "Candidate not found\nTry Again", "ERROR",0);
											system ("cls");
												menu ();
									}
		fclose (cad);
						}
		
