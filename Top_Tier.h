void topView ()
{
int sn=1, uno, SORT;
char st = 205, underScore = 95;
char *header [8]= {"No", "REG/CODE", "NAME", "S/NAME", "P/NO", "DISTRICT", "AREA", ""};
	FILE *cad;
		cad = fopen ("candidate/candidates.txt", "rb");
				int axi = 0, why = 0, axe = 75;
				//table-header first lol, shadoiwy hands
					// displaying the *header string array.......
					gotoxy (65, 0);
						printf ("VENUE");
					gotoxy (95, 0);
						printf ("AGE");
				for (SORT=0; SORT < 8; ++SORT)
				{
					if (SORT == 6 || SORT == 8)
					{	
							axe +=5;
						gotoxy (axe, why);
						printf ("%s", header [SORT]);
					
					}
					else
					{
						gotoxy (axi, why);
						printf ("%s", header [SORT]);
						axi +=10;
					}
				}
				printf ("\n");
			printf ("\n");
						for (uno = 0; uno<109; uno ++)
						{
							printf ("%c", st);
						}

				///// moving accross the plain mwahaha
					int posX = 10, posY = 4;
			while (fread(&d, sizeof (d), 1, cad)==1)
			{
				printf ("\n\n");
					printf ("%d", sn);

						gotoxy (posX, posY);
						printf ("%s", d.code);
										posX+=10;
												gotoxy(posX, posY);
												printf ("%s", d.name);
													posX+=10;
														gotoxy(posX, posY);
														printf ("%s", d.surname);
													posX+=10;
														gotoxy(posX, posY);
														printf ("%d", d.phone);
										posX+=10;
												gotoxy(posX, posY);
												printf ("%s", d.r.district);
								posX+=15;
									gotoxy(posX, posY);
								    printf ("%s", d.r.vtd.venue);
						posX+=15;
							gotoxy(posX, posY);
							printf ("%s", d.r.area);
				posX+=15;
					gotoxy (posX, posY);
					printf ("%d",d.r.age);
						
				printf ("\n\n");
				for (uno = 0; uno<109; uno ++)
					{
							printf ("%c", underScore);
					}
				sn +=1;
				posY+=4;
				posX=10;
			
			}	
			getch ();
	fclose (cad);
	system ("cls");
		top_tier ();
}
void topDelete ()
{
	store = sizeof (d);
	char GenCode [6];
		char s = 205;
			char down = 186;
				char rtc = 187;
				char rbc = 188;
			char ltc = 201;
		char lbc = 200;
	int me;		
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
		FILE *cad, *calete;
			cad 	= fopen ("candidate/candidates.txt", "rb+");
			calete  = fopen ("candidate/temp.txt", "wb");
					rewind (cad);
				while (fread (&d, sizeof (d), 1, cad)==1)
				{
					if (strcmp (GenCode, d.code)!=0)
					{
						fwrite (&d, store, 1, calete);
							MessageBox(0, "Record Successfully Deleted", "Notification",0);
					}
				}
			fclose (cad);
			fclose (calete);
				remove ("candidate/candidates.txt");
				rename ("candidate/temp.txt", "candidate/candidates.txt");
					system ("cls");
						top_tier ();
}
void topModify ()
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
												top_tier ();
									}	
									
									if (strcmp (GenCode, d.code)!=0)
									{
										MessageBox(0, "Code doesn't Match\nEnter Your Details Correctly", "ERROR",0);
											system ("cls");
												top_tier ();
									}
							
									check_var = 1;
									break;				
						}
						}
									if (!check_var)
									{
										MessageBox (0, "Candidate not found\nTry Again", "ERROR",0);
											system ("cls");
												top_tier ();
									}
		fclose (cad);
						}
		
void topLabMod ()
{
	int check_var=0, me;
		char GenCode [6];
			char option;
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
						printf ("Enter Your Full Name");
					gotoxy (62,8);
						gets(d.r.vtd.l.FullName);
					gotoxy (60, 10);
						printf ("Enter Candidates Sex");
					gotoxy (62, 11);
						gets (d.r.vtd.l.psex);
					gotoxy (60, 13);
						printf ("Enter Date");
					gotoxy (62, 14);
						gets (d.r.vtd.l.date);
					gotoxy (60, 16);
						printf ("Enter Time");
					gotoxy (62, 17);
						gets (d.r.vtd.l.time);
							system ("cls");
								home_page ();
					gotoxy (60, 7);
						printf ("Enter Your Initials");
					gotoxy (62, 8);
						gets (d.r.vtd.l.sign);
					gotoxy (60, 10);
						printf ("Enter Lab Name");
					gotoxy (62, 11);
						gets (d.r.vtd.l.lab);
					gotoxy (60, 13);
						printf ("Enter District");
					gotoxy (62, 14);
						gets (d.r.vtd.l.district);
							system ("cls");
								home_page ();
					gotoxy (60, 7);
						printf ("Enter Candidate Vaccination Status");
					gotoxy (62, 8);
						gets (d.r.vtd.l.vstatus);
					gotoxy (60, 10);
						printf ("Enter test Candidate's Result");
					gotoxy (62, 11);
						gets (d.r.vtd.l.vresult);
						
					gotoxy (60, 13);
						printf ("Do you want to send this Information right now?(Y/N)");
					gotoxy (62, 14);
						option = getche ();
						
						switch (option)
						{
							case 'y':{
								fseek(cad, -store, SEEK_CUR);
								fwrite (&d, sizeof (d), 1, cad);
								MessageBox(0,"SUBMITTED SUCCESSFULLY", "\tNOTIFICATION",0);
								system ("cls");
								top_tier ();
								break;
							}
							case 'Y':{
								fseek(cad, -store, SEEK_CUR);
								fwrite (&d, sizeof (d), 1, cad);
								MessageBox(0,"SUBMITTED SUCCESSFULLY", "\tNOTIFICATION",0);
								system ("cls");
								top_tier ();
								break;
							}
							case 'n':{
								system ("cls");
								top_tier ();
								break;
							}
							case 'N':{
								system ("cls");
								top_tier ();
								break;
							}
							default :{
								system ("cls");
								top_tier ();
								break;
							}
						}
					
					}
				}
					
		fclose (cad);
						}

