#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>


//a structure containing all the varibles for candidate input details
struct details {
	char name [20], surname [20], citizen_code [20], candi_code [20];
	int phone;
	struct resident{
		char district [20];
		char area [10];
		int age;
		struct venue_time_date{
			char venue [20];
			char date  [10];
			char time  [10];
		}vtd;
	}r;
}d;
///a replica for sizeof (); function
long int shacord;
//to be linked to the header file


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
void overwrite();
void details ();
void display();
void menu ();
void admin ();
void logi ();
void top_tier ();

//tha header files
#include "sign_login.h"
#include "top_tier.h"
//tha main function
int main ()

{
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
}
void details ()
{
	shacord = sizeof (d);
int i;
char next;
	FILE *cad;
		cad = fopen ("candidate/candidates.txt", "a");
			if (cad == NULL)
			{
				printf ("Error");
			}
			else
			{
		next = 'y';
			while (next == 'y')
			{
				system ("cls");
			home_page ();
				gotoxy(60, 6);
			fseek(cad,0,SEEK_END);
					printf ("Enter Candidate Name");
						gotoxy (64, 7);
							scanf ("%s", d.name);
								gotoxy(60, 9);
									printf ("Enter Candidate Surname");
										gotoxy(64, 10);
											scanf ("%s", d.surname);
										gotoxy (60, 12);
											printf ("Enter Candidate Phone Number");
								gotoxy (64, 13);
									scanf ("%d", &d.phone);
						gotoxy(60, 15);
							printf ("Enter Candidate Citizen Code");
					gotoxy(64, 16);
						scanf ("%s", d.citizen_code);
				gotoxy (60, 18);
					printf ("Enter Candidate Code");
						gotoxy(64, 19);
							scanf ("%s", d.candi_code);
								system ("cls");
										home_page ();
									gotoxy(60, 6);
										printf ("Enter District");
											gotoxy(64, 7);
												scanf ("%s", d.r.district);
											gotoxy(60, 9);
												printf ("Enter Area");
										gotoxy(64, 11);
									scanf ("%s",d.r.area);
								gotoxy(60, 13);
							printf ("Enter Your Age");
						gotoxy(64, 14);
					scanf ("%d", &d.r.age);
				system ("cls");
					home_page();
						gotoxy (60, 6);
							printf ("Enter Venue");
								gotoxy(64, 7);
									scanf ("%s", d.r.vtd.venue);
										gotoxy(60, 9);
											printf ("Enter Date 'DD:MM:YYY' ");
												gotoxy(64, 10);
													scanf ("%s", d.r.vtd.date);
												gotoxy(60, 12);
											printf ("Enter Time'HH:MM:SS'");
										gotoxy(64, 13);
									scanf ("%s", d.r.vtd.time);


			 fwrite(&d,shacord,1,cad);
			 		for (i=0; i<1;++i)
								{
							MessageBox(0, "Your Information Has Been Submitted Sucessfully", "Notification", 0);
								Sleep (1000);
								}

			 	gotoxy (60, 16);
			 		printf ("Add another candidate (y/n)?");
			 			gotoxy(64, 17);
			 				fflush(stdin);
			 					next = getche ();

			 					if (next != 'y')
			 					{
			 						system ("cls");
			 						landing ();
								 }
		}

			}
		fclose (cad);
}
void display(){
	shacord = sizeof (d);
		char underScore = 95;
			int uno;
	int temp=1;
	FILE *cad;
		cad = fopen ("candidate/candidates.txt", "r");
			if (cad == NULL)
			{
				printf ("Error");
			}
			home_page();
			while (fread(&d, shacord,1,cad)==1)
			{

			//	gotoxy(20, 6);
			//printf ("*Make Sure to Take a ScreenShot of your receipt*");
				printf ("\n");
				printf ("\nNO  CAN/CODE   AGE     VENUE          TIME      DATE\n");
				printf ("%d   %s      %d    %s   %s  %.10s\n\n",temp, d.candi_code, d.r.age, d.r.vtd.venue, d.r.vtd.time, d.r.vtd.date);

						for (uno = 0; uno<100; uno ++)
						{
							printf ("%c", underScore);
						}
				temp +=1;
				getch ();
			}

		fclose (cad);
}
void overwrite()
{
	shacord = sizeof (d);
	char next;
	FILE *cad;
		cad = fopen ("candidate/candidates.txt", "w");
			if (cad == NULL)
			{
				printf ("Error");
			}
			else
			{
		next = 'y';
			while (next == 'y')
			{
				system ("cls");
			home_page ();
				gotoxy(60, 6);
			fseek(cad,0,SEEK_END);
					printf ("Enter Candidate Name");
						gotoxy (64, 7);
							scanf ("%s", d.name);
								gotoxy(60, 9);
									printf ("Enter Candidate Surname");
										gotoxy(64, 10);
											scanf ("%s", d.surname);
										gotoxy (60, 12);
											printf ("Enter Candidate Phone Number");
								gotoxy (64, 13);
									scanf ("%d", &d.phone);
						gotoxy(60, 15);
							printf ("Enter Candidate Citizen Code");
					gotoxy(64, 16);
						scanf ("%s", d.citizen_code);
				gotoxy (60, 18);
					printf ("Enter Candidate Code");
						gotoxy(64, 19);
							scanf ("%s", d.candi_code);
								system ("cls");
										home_page ();
									gotoxy(60, 6);
										printf ("Enter District");
											gotoxy(64, 7);
												scanf ("%s", d.r.district);
											gotoxy(60, 9);
												printf ("Enter Area");
										gotoxy(64, 11);
									scanf ("%s",d.r.area);
								gotoxy(60, 13);
							printf ("Enter Your Age");
						gotoxy(64, 14);
					scanf ("%d", &d.r.age);
				system ("cls");
					home_page();
						gotoxy (60, 6);
							printf ("Enter Venue");
								gotoxy(64, 7);
									scanf ("%s", d.r.vtd.venue);
										gotoxy(60, 9);
											printf ("Enter Date 'DD:MM:YYY' ");
												gotoxy(64, 10);
													scanf ("%s", d.r.vtd.date);
												gotoxy(60, 12);
											printf ("Enter Time'HH:MM:SS'");
										gotoxy(64, 13);
									scanf ("%s", d.r.vtd.time);
			 fwrite(&d,shacord,1,cad);
			 	gotoxy (60, 16);
			 		printf ("Add another candidate (y/n)?");
			 			gotoxy(64, 17);
			 				fflush(stdin);
			 					next = getche ();

		}
			}
		fclose (cad);
}

void landing ()
{
//ima change the bg color
	system ("color 47");
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
	system ("color 47");
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
    char *men [3] = {"1. view registered canditates", "2. delete a registered candidate", "3. Modify candidate record"};
        int i;
            char select;
                    int ex = 60,wy = 15;
                  
                    
                    	system ("cls");
                         for (i=0;i<3;++i)
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
						default :{
								system ("cls");
						gotoxy(ex, wy);
							printf ("Invalid Entry");
								system ("cls");
									landing ();
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
