struct sign{
	
	char username_main [30];
	char password_main [20];
	
		struct log {
			char username [30];
			char password [20];
		}lo;	
}si;

long int rec;


void sign()
{

	while (1){
		system ("color 02");

gotoxy (55, 4);
printf ("_______________________________________________________");

gotoxy (55, 25);
printf ("_______________________________________________________");

	gotoxy (70, 4);
	printf ("SIGN UP");
			//log in deoc
		//left margin
		gotoxy (54, 5);
		printf ("|");
		gotoxy (54, 6);
		printf ("|");
		gotoxy (54, 7);
		printf ("|");

		gotoxy (54, 8);
		printf ("|");
		gotoxy (54, 9);
		printf ("|");
		gotoxy (54, 10);
		printf ("|");

		gotoxy (54, 11);
		printf ("|");
		gotoxy (54, 12);
		printf ("|");
		gotoxy (54, 13);
		printf ("|");

		gotoxy (54, 14);
		printf ("|");
		gotoxy (54, 15);
		printf ("|");
		gotoxy (54, 16);
		printf ("|");

		gotoxy (54, 17);
		printf ("|");
		gotoxy (54, 18);
		printf ("|");
		gotoxy (54, 19);
		printf ("|");

		gotoxy (54, 20);
		printf ("|");
		gotoxy (54, 21);
		printf ("|");
		gotoxy (54, 22);
		printf ("|");

		gotoxy (54, 23);
		printf ("|");
		gotoxy (54, 24);
		printf ("|");
		gotoxy (54, 25);
		printf ("|");


													//right margin
													gotoxy (110, 5);
													printf ("|");
													gotoxy (110, 6);
													printf ("|");
													gotoxy (110, 7);
													printf ("|");

													gotoxy (110, 8);
													printf ("|");
													gotoxy (110, 9);
													printf ("|");
													gotoxy (110, 10);
													printf ("|");

													gotoxy (110, 11);
													printf ("|");
													gotoxy (110, 12);
													printf ("|");
													gotoxy (110, 13);
													printf ("|");

													gotoxy (110, 14);
													printf ("|");
													gotoxy (110, 15);
													printf ("|");
													gotoxy (110, 16);
													printf ("|");

													gotoxy (110, 17);
													printf ("|");
													gotoxy (110, 18);
													printf ("|");
													gotoxy (110, 19);
													printf ("|");

													gotoxy (110, 20);
													printf ("|");
													gotoxy (110, 21);
													printf ("|");
													gotoxy (110, 22);
													printf ("|");

													gotoxy (110, 23);
													printf ("|");
													gotoxy (110, 24);
													printf ("|");
													gotoxy (110, 25);

//////////////////////////////////////////////////////////////////////////////////////////////////

FILE *fp;	

rec=sizeof (si);
	fp = fopen ("admin/admins.txt", "w");
	if (fp == NULL)
	{
		printf ("error");
	}
	
	else {
			gotoxy (70, 10);
			printf ("ENTER USER NAME");

					//pointer
					gotoxy (73, 12);
					printf (">....");
					//second pointer
					gotoxy (73, 17);
					printf (">....");

				gotoxy (70, 15);
				printf ("ENTER PASSWORD");

			gotoxy (73, 12);
			scanf( "%s", si.username_main);
														
				gotoxy (73, 17);
				scanf ("%s", si.password_main);

				gotoxy (70, 20);
				printf ("Saving :");

//variables
int i;
char b=219;
//just printing some ascii characters

					gotoxy (78, 20);
					for (i = 0; i < 20; i++)

						{
					printf("%c", b);
			
					Sleep(250);
						}
		fwrite (&si,rec,1,fp);	
	MessageBox(0,"Saved Successfully", "Saving",0);
	}
	fclose (fp);
				gotoxy (65, 22);
				printf ("Press any key to go back");
					gotoxy(70, 24);

					getche ();
														
					if (getche)
					{
						break;
					}






gotoxy (55, 25);
printf ("_______________________________________________________");

}
system ("cls");
}


void login()
{
	
	while (1){
		system ("color 02");

gotoxy (55, 4);
printf ("_______________________________________________________");

gotoxy (55, 25);
printf ("_______________________________________________________");

	gotoxy (70, 4);
	printf ("Welcome to Shadowy Hands");
			//log in deoc
		//left margin
		gotoxy (54, 5);
		printf ("|");
		gotoxy (54, 6);
		printf ("|");
		gotoxy (54, 7);
		printf ("|");

		gotoxy (54, 8);
		printf ("|");
		gotoxy (54, 9);
		printf ("|");
		gotoxy (54, 10);
		printf ("|");

		gotoxy (54, 11);
		printf ("|");
		gotoxy (54, 12);
		printf ("|");
		gotoxy (54, 13);
		printf ("|");

		gotoxy (54, 14);
		printf ("|");
		gotoxy (54, 15);
		printf ("|");
		gotoxy (54, 16);
		printf ("|");

		gotoxy (54, 17);
		printf ("|");
		gotoxy (54, 18);
		printf ("|");
		gotoxy (54, 19);
		printf ("|");

		gotoxy (54, 20);
		printf ("|");
		gotoxy (54, 21);
		printf ("|");
		gotoxy (54, 22);
		printf ("|");

		gotoxy (54, 23);
		printf ("|");
		gotoxy (54, 24);
		printf ("|");
		gotoxy (54, 25);
		printf ("|");


													//right margin
													gotoxy (110, 5);
													printf ("|");
													gotoxy (110, 6);
													printf ("|");
													gotoxy (110, 7);
													printf ("|");

													gotoxy (110, 8);
													printf ("|");
													gotoxy (110, 9);
													printf ("|");
													gotoxy (110, 10);
													printf ("|");

													gotoxy (110, 11);
													printf ("|");
													gotoxy (110, 12);
													printf ("|");
													gotoxy (110, 13);
													printf ("|");

													gotoxy (110, 14);
													printf ("|");
													gotoxy (110, 15);
													printf ("|");
													gotoxy (110, 16);
													printf ("|");

													gotoxy (110, 17);
													printf ("|");
													gotoxy (110, 18);
													printf ("|");
													gotoxy (110, 19);
													printf ("|");

													gotoxy (110, 20);
													printf ("|");
													gotoxy (110, 21);
													printf ("|");
													gotoxy (110, 22);
													printf ("|");

													gotoxy (110, 23);
													printf ("|");
													gotoxy (110, 24);
													printf ("|");
													gotoxy (110, 25);
													printf ("|");

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////INITIALISING FILES//////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

rec = sizeof (si);
FILE *fp;
	fp = fopen ("admin/admins.txt", "r");
		if (fp == NULL)
		{
				MessageBox (0, "Error 404", "Error", 0);		
		}		
		
		while (fread(&si, rec, 1, fp)==1)
		{
			gotoxy (70, 10);
			printf ("Enter User Name");

				gotoxy (70, 15);
				printf ("Enter Password");

			gotoxy (70, 12);
			scanf ("%s", si.lo.username);


				gotoxy (70, 17);
				scanf ("%s", si.lo.password);
				
																					//comparing credentials
																				//comparing credentials																			

																					if (strcmp (si.lo.password, si.password_main)==0 && strcmp (si.lo.username, si.username_main)==0)
																							{
															                                        gotoxy (70, 21);
															                                        printf ("Please Wait ");

                                     														   //Loop de loop varibales

    char z = 219;
	 int y;																					   //Loop de loop varibales
	 
																                                                gotoxy (81, 21);
																                                                for (y=0; y<10; y++)
																                                                {
																                                                    printf ("%c", z);
																
																                                                    Sleep (250);
																                                                }
																                                    gotoxy (70, 20);
																										printf ("Log in successful!!");
																									gotoxy (65, 21);
																									printf ("Press any key to continue");
																										system ("cls");
																							}

							else
							{
                                              gotoxy (70, 21);
                                        printf ("Please Wait ");

                                        //Loop de loop varibales

                                        char z = 46;
                                        int y;
                                                gotoxy (81, 21);
                                                for (y=0; y<10; y++)
                                                {
                                                    printf ("%c", z);

                                                    Sleep (250);
                                                }

								gotoxy(70, 21);
								printf ("Credentials don't match!!!!");
							} 
	}
	fclose (fp);
														
								gotoxy(70, 22);

								getche ();
								if (getche)
								{
									exit (0);
								}
							}






gotoxy (55, 25);
printf ("_______________________________________________________");

}


