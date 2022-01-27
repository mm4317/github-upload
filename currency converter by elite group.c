#include <stdio.h>
int main ()
{float amount,rupee,us,pound,euro,yen,canada,yuan, pakistan,singapore,riyal,dhiram;
  int choice;
 printf ("Following are the Choices:  \nEnter1: Indian_Rupee  \nEnter2: US_Dollar \nEnter3: Pound \nEnter4: Euro \nEnter 5: Japanese_Yen \nEnter 6: Canadian_Dollar\nEnter 7: Chinese_Yuan \nEnter 8: Pakistani_Rupee \nEnter 9: Singapore_Dollar \nEnter 10: Saudi_Riyal \nEnter 11: UAE_Dhiram");
  printf ("\nEnter your choice: ");
  scanf ("%d", &choice);
  printf("Enter the amount you want to convert?\n");
  scanf("%f", &amount);
  switch (choice)
    {
    case 1:		
     printf ("Following are the Choices:  \nEnter 1: Indian_Rupee  \nEnter 2: US_Dollar \nEnter 3: Pound \nEnter 4: Euro \nEnter 5: Japanese_Yen \nEnter 6: Canadian_Dollar\nEnter 7: Chinese_Yuan \nEnter 8: Pakistani_Rupee \nEnter 9: Singapore_Dollar \nEnter 10: Saudi_Riyal \nEnter 11: UAE_Dhiram");
  printf ("\nEnter your choice: ");
      scanf ("%d", &choice);
      switch (choice)
	{
	case 1:
	  rupee = amount * 1;
	  printf ("\n%.2f rupee = %.2f Indian_Rupee", amount, rupee);
	  break;
	case 2:
	  us= amount * 0.014;
	  printf ("\n%.2f rupee = %.2f US_Dollar", amount,us);
	  break;
	case 3:
	  pound = amount *0.010;
	  printf ("\n%.2f rupee = %.2f Pound", amount, pound);
	  break;
	case 4:
	  euro = amount *0.012;
	  printf ("\n%.2f rupee = %.2f Euro", amount, euro);
	  break;
	case 5:
	  yen = amount *1.500;
	  printf ("\n%.2f rupee = %.2f Japanese_Yen", amount, yen);
	  break;
	case 6:
	  canada= amount * 0.017;
	  printf ("\n%.2f rupee = %.2f Canadian_Dollar", amount,canada );
	  break;
	case 7:
	  yuan = amount *0.086;
	  printf ("\n%.2f rupee = %.2f Chinese_Yuan", amount, yuan);
	  break;
	case 8:
	  pakistan= amount *2.39;
	  printf ("\n%.2f rupee = %.2f Pakistani_Rupee", amount, pakistan);
	  break;
	case 9:
	  singapore= amount *0.018;
	  printf ("\n%.2f rupee = %.2f Singapore_Dollar", amount,singapore);
	  break;
	  case 10:
	  riyal = amount *0.051;
	  printf ("\n%.2f rupee = %.2f Saudi_Riyal", amount, riyal);
	  break;
	case 11:
	 dhiram= amount *0.049;
	  printf ("\n%.2f rupee = %.2f UAE_Dhiram", amount,
		 dhiram);
	  break;
	default:
	  printf ("\nInvalid Input");}
  break;
case 2:		
 printf ("Following are the Choices:  \nEnter 1: Indian_Rupee  \nEnter 2: US_Dollar \nEnter 3: Pound \nEnter 4: Euro \nEnter 5: Japanese_Yen \nEnter 6: Canadian_Dollar\nEnter 7: Chinese_Yuan \nEnter 8: Pakistani_Rupee \nEnter 9: Singapore_Dollar \nEnter 10: Saudi_Riyal \nEnter 11: UAE_Dhiram");
  printf ("\nEnter your choice: ");
scanf ("%d", &choice);
    switch (choice)
	{
	case 1:
	  rupee = amount * 74.04;
	  printf ("\n%.2f US_Dollar= %.2f Indian_Rupee", amount, rupee);
	  break;
	case 2:
	  us= amount * 1;
	  printf ("\n%.2f US_Dollar= %.2f US_Dollar", amount,us);
	  break;
	case 3:
	  pound = amount *0.74;
	  printf ("\n%.2f US_Dollar = %.2f Pound", amount, pound);
	  break;
	case 4:
	  euro = amount *0.88;
	  printf ("\n%.2f US_Dollar = %.2f Euro", amount, euro);
	  break;
	case 5:
	  yen = amount *115.10;
	  printf ("\n%.2f US_Dollar = %.2f Japanese_Yen", amount, yen);
	  break;
	case 6:
	  canada= amount * 1.27;
	  printf ("\n%.2f US_Dollar = %.2f Canadian_Dollar", amount,canada );
	  break;
	case 7:
	  yuan = amount *6.38;
	  printf ("\n%.2f US_Dollar = %.2f Chinese_Yuan", amount, yuan);
	  break;
	case 8:
	  pakistan= amount *176.5;
	  printf ("\n%.2f US_Dollar = %.2f Pakistani_Rupee", amount, pakistan);
	  break;
	case 9:
	  singapore= amount *1.36;
	  printf ("\n%.2f US_Dollar = %.2f Singapore_Dollar", amount,singapore);
	  break;
	  case 10:
	  riyal = amount *3.75;
	  printf ("\n%.2f US_Dollar = %.2f Saudi_Riyal", amount, riyal);
	  break;
	case 11:
	 dhiram= amount *3.67;
	  printf ("\n%.2f US_Dollar = %.2f UAE_Dhiram", amount,
		  dhiram);
	  break;
	default:
	  printf ("\nInvalid Input");}
  break;
case 3:		
 printf ("Following are the Choices:  \nEnter 1: Indian_Rupee  \nEnter 2: US_Dollar \nEnter 3: Pound \nEnter 4: Euro \nEnter 5: Japanese_Yen \nEnter 6: Canadian_Dollar\nEnter 7: Chinese_Yuan \nEnter 8: Pakistani_Rupee \nEnter 9: Singapore_Dollar \nEnter 10: Saudi_Riyal \nEnter 11: UAE_Dhiram");
  printf ("\nEnter your choice: ");
scanf ("%d", &choice);
   switch (choice)
	{
	case 1:
	  rupee = amount * 100.4;
	  printf ("\n%.2f Pound = %.2f Indian_Rupee", amount, rupee);
	  break;
	case 2:
	  us= amount * 1.36;
	  printf ("\n%.2f Pound = %.2f US_Dollar", amount,us);
	  break;
	case 3:
	  pound = amount *1;
	  printf ("\n%.2f Pound = %.2f Pound", amount, pound);
	  break;
	case 4:
	  euro = amount *1.20;
	  printf ("\n%.2f Pound = %.2f Euro", amount, euro);
	  break;
	case 5:
	  yen = amount *156.05;
	  printf ("\n%.2f Pound = %.2f Japanese_Yen", amount, yen);
	  break;
	case 6:
	  canada= amount * 1.72;
	  printf ("\n%.2f Pound = %.2f Canadian_Dollar", amount,canada );
	  break;
	case 7:
	  yuan = amount *8.65;
	  printf ("\n%.2f Pound = %.2f Chinese_Yuan", amount, yuan);
	  break;
	case 8:
	  pakistan= amount *239.74;
	  printf ("\n%.2f Pound = %.2f Pakistani_Rupee", amount, pakistan);
	  break;
	case 9:
	  singapore= amount *1.84;
	  printf ("\n%.2f Pound = %.2f Singapore_Dollar", amount,singapore);
	  break;
	  case 10:
	  riyal = amount *5.09;
	  printf ("\n%.2f Pound = %.2f Saudi_Riyal", amount, riyal);
	  break;
	case 11:
	 dhiram= amount *5.01;
	  printf ("\n%.2f Pound = %.2f UAE_Dhiram", amount,
		  dhiram);
	  break;
	default:
	  printf ("\nInvalid Input"); }
      
  break;
case 4:			// Euro Conversion
  { printf ("Following are the Choices:  \nEnter 1: Indian_Rupee  \nEnter 2: US_Dollar \nEnter 3: Pound \nEnter 4: Euro \nEnter 5: Japanese_Yen \nEnter 6: Canadian_Dollar\nEnter 7: Chinese_Yuan \nEnter 8: Pakistani_Rupee \nEnter 9: Singapore_Dollar \nEnter 10: Saudi_Riyal \nEnter 11: UAE_Dhiram");
  printf ("\nEnter your choice: ");
scanf ("%d", &choice);
      switch (choice)
	{
	case 1:
	  rupee = amount *83.91 ;
	  printf ("\n%.2f Euro= %.2f Indian_Rupee", amount, rupee);
	  break;
	case 2:
	  us= amount *1.13 ;
	  printf ("\n%.2f Euro = %.2f US_Dollar", amount,us);
	  break;
	case 3:
	  pound = amount *0.84;
	  printf ("\n%.2f Euro = %.2f Pound", amount, pound);
	  break;
	case 4:
	  euro = amount *1;
	  printf ("\n%.2f Euro = %.2f Euro", amount, euro);
	  break;
	case 5:
	  yen = amount *130.40;
	  printf ("\n%.2f Euro = %.2f Japanese_Yen", amount, yen);
	  break;
	case 6:
	  canada= amount * 1.44;
	  printf ("\n%.2f Euro = %.2f Canadian_Dollar", amount,canada );
	  break;
	case 7:
	  yuan = amount *7.22;
	  printf ("\n%.2f Euro = %.2f Chinese_Yuan", amount, yuan);
	  break;
	case 8:
	  pakistan= amount *200.21;
	  printf ("\n%.2f Euro = %.2f Pakistani_Rupee", amount, pakistan);
	  break;
	case 9:
	  singapore= amount *1.54;
	  printf ("\n%.2f Euro = %.2f Singapore_Dollar", amount,singapore);
	  break;
	  case 10:
	  riyal = amount *4.25;
	  printf ("\n%.2f Euro = %.2f Saudi_Riyal", amount, riyal);
	  break;
	case 11:
 dhiram= amount *4.19;
	  printf ("\n%.2f Euro = %.2f UAE_Dhiram", amount,
		  dhiram);
	  break;
	default:
	  printf ("\nInvalid Input");
	}
      return 0;
    }
  break;
 case 5:
 { printf ("Following are the Choices:  \nEnter 1: Indian_Rupee  \nEnter 2: US_Dollar \nEnter 3: Pound \nEnter 4: Euro \nEnter 5: Japanese_Yen \nEnter 6: Canadian_Dollar\nEnter 7: Chinese_Yuan \nEnter 8: Pakistani_Rupee \nEnter 9: Singapore_Dollar \nEnter 10: Saudi_Riyal \nEnter 11: UAE_Dhiram");
  printf ("\nEnter your choice: ");
scanf ("%d", &choice);
  switch (choice)
	{
	case 1:
	  rupee = amount * 0.64;
	  printf ("\n%.2f Japanese_Yen = %.2f Indian_Rupee", amount, rupee);
	  break;
	case 2:
	  us= amount * 0.0087;
	  printf ("\n%.2f Japanese_Yen = %.2f US_Dollar", amount,us);
	  break;
	case 3:
	  pound = amount *0.0064;
	  printf ("\n%.2f Japanese_Yen = %.2f Pound", amount, pound);
	  break;
	case 4:
	  euro = amount *0.0077;
	  printf ("\n%.2f Japanese_Yen = %.2f Euro", amount, euro);
	  break;
	case 5:
	  yen = amount *1;
	  printf ("\n%.2f Japanese_Yen = %.2f Japanese_Yen", amount, yen);
	  break;
	case 6:
	  canada= amount * 1.44;
	  printf ("\n%.2f Japanese_Yen = %.2f Canadian_Dollar", amount,canada );
	  break;
	case 7:
	  yuan = amount * 0.0055;
	  printf ("\n%.2f Japanese_Yen = %.2f Chinese_Yuan", amount, yuan);
	  break;
	case 8:
	  pakistan= amount *1.54;
	  printf ("\n%.2f Japanese_Yen = %.2f Pakistani_Rupee", amount, pakistan);
	  break;
	case 9:
	  singapore= amount *0.65;
	  printf ("\n%.2f Japanese_Yen = %.2f Singapore_Dollar", amount,singapore);
	  break;
	  case 10:
	  riyal = amount *0.012;
	  printf ("\n%.2f Japanese_Yen = %.2f Saudi_Riyal", amount, riyal);
	  break;
	case 11:
	  dhiram= amount *0.032;
	  printf ("\n%.2f Japanese_Yen = %.2f UAE_Dhiram", amount,
		dhiram);
	  break;
	default:
	  printf ("\nInvalid Input");
	}
      return 0;
    }
  break;
case 6:
  { printf ("Following are the Choices:  \nEnter 1: Indian_Rupee  \nEnter 2: US_Dollar \nEnter 3: Pound \nEnter 4: Euro \nEnter 5: Japanese_Yen \nEnter 6: Canadian_Dollar\nEnter 7: Chinese_Yuan \nEnter 8: Pakistani_Rupee \nEnter 9: Singapore_Dollar \nEnter 10: Saudi_Riyal \nEnter 11: UAE_Dhiram");
  printf ("\nEnter your choice: ");
scanf ("%d", &choice);
 switch (choice)
	{
	case 1:
	  rupee = amount * 58.36;
	  printf ("\n%.2f Canadian_Dollar= %.2f Indian_Rupee", amount, rupee);
	  break;
	case 2:
	  us= amount * 0.79;
	  printf ("\n%.2f Canadian_Dollar = %.2f US_Dollar", amount,us);
	  break;
	case 3:
	  pound = amount *0.58;
	  printf ("\n%.2f Canadian_Dollar = %.2f Pound", amount, pound);
	  break;
	case 4:
	  euro = amount *0.70;
	  printf ("\n%.2f Canadian_Dollar = %.2f Euro", amount, euro);
	  break;
	case 5:
	  yen = amount *90.12;
	  printf ("\n%.2f Canadian_Dollar = %.2f Japanese_Yen", amount, yen);
	  break;
	case 6:
	  canada= amount * 1;
	  printf ("\n%.2f Canadian_Dollar = %.2f Canadian_Dollar", amount,canada );
	  break;
	case 7:
	  yuan = amount *5.02;
	  printf ("\n%.2f Canadian_Dollar = %.2f Chinese_Yuan", amount, yuan);
	  break;
	case 8:
	  pakistan= amount *139.62;
	  printf ("\n%.2f Canadian_Dollar = %.2f Pakistani_Rupee", amount, pakistan);
	  break;
	case 9:
	  singapore= amount *1.07;
	  printf ("\n%.2f Canadian_Dollar = %.2f Singapore_Dollar", amount,singapore);
	  break;
	  case 10:
	  riyal = amount *2.96;
	  printf ("\n%.2f Canadian_Dollar = %.2f Saudi_Riyal", amount, riyal);
	  break;
	case 11:
	dhiram= amount *1.10;
	  printf ("\n%.2f Canadian_Dollar = %.2f UAE_Dhiram", amount,
		  dhiram);
	  break;
	default:
	  printf ("\nInvalid Input");
	}
      return 0;
    }
  break;
case 7:
  { printf ("Following are the Choices:  \nEnter 1: Indian_Rupee  \nEnter 2: US_Dollar \nEnter 3: Pound \nEnter 4: Euro \nEnter 5: Japanese_Yen \nEnter 6: Canadian_Dollar\nEnter 7: Chinese_Yuan \nEnter 8: Pakistani_Rupee \nEnter 9: Singapore_Dollar \nEnter 10: Saudi_Riyal \nEnter 11: UAE_Dhiram");
  printf ("\nEnter your choice: ");
scanf ("%d", &choice);
      switch (choice)
	{
	case 1:
	  rupee= amount * 11.62;
	  printf ("\n%.2f Chinese_Yuan = %.2f Indian_Rupee", amount, rupee);
	  break;
	case 2:
	  us= amount * 0.16;
	  printf ("\n%.2f Chinese_Yuan = %.2f US_Dollar", amount,us);
	  break;
	case 3:
	  pound = amount *0.12;
	  printf ("\n%.2f Chinese_Yuan = %.2f Pound", amount, pound);
	  break;
	case 4:
	  euro = amount *2.14;
	  printf ("\n%.2f Chinese_Yuan = %.2f Euro", amount, euro);
	  break;
	case 5:
	  yen = amount *18.60;
	  printf ("\n%.2f Chinese_Yuan = %.2f Japanese_Yen", amount, yen);
	  break;
	case 6:
	  canada= amount * 0.20;
	  printf ("\n%.2f Chinese_Yuan = %.2f Canadian_Dollar", amount,canada );
	  break;
	case 7:
	  yuan = amount *1;
	  printf ("\n%.2f Chinese_Yuan = %.2f Chinese_Yuan", amount, yuan);
	  break;
	case 8:
	  pakistan= amount *27.72;
	  printf ("\n%.2f Chinese_Yuan = %.2f Pakistani_Rupee", amount, pakistan);
	  break;
	case 9:
	  singapore= amount *0.21;
	  printf ("\n%.2f Chinese_Yuan = %.2f Singapore_Dollar", amount,singapore);
	  break;
	  case 10:
	  riyal = amount *0.59;
	  printf ("\n%.2f Chinese_Yuan = %.2f Saudi_Riyal", amount, riyal);
	  break;
	case 11:
	  dhiram= amount *0.58;
	  printf ("\n%.2f Chinese_Yuan = %.2f UAE_Dhiram", amount,
		  dhiram);
	  break;
	default:
	  printf ("\nInvalid Input");
	}
      return 0;
    }
  break;
case 8:
  { printf ("Following are the Choices:  \nEnter 1: Indian_Rupee  \nEnter 2: US_Dollar \nEnter 3: Pound \nEnter 4: Euro \nEnter 5: Japanese_Yen \nEnter 6: Canadian_Dollar\nEnter 7: Chinese_Yuan \nEnter 8: Pakistani_Rupee \nEnter 9: Singapore_Dollar \nEnter 10: Saudi_Riyal \nEnter 11: UAE_Dhiram");
  printf ("\nEnter your choice: ");
scanf ("%d", &choice);
switch (choice)
	{
	case 1:
	  rupee = amount * 0.42;
	  printf ("\n%.2f Pakistani_Rupee = %.2f Indian_Rupee", amount,rupee);
	  break;
	case 2:
	  us= amount * 0.0057;
	  printf ("\n%.2f Pakistani_Rupee = %.2f US_Dollar", amount,us);
	  break;
	case 3:
	  pound = amount *0.0042;
	  printf ("\n%.2f Pakistani_Rupee = %.2f Pound", amount, pound);
	  break;
	case 4:
	  euro = amount *0.0050;
	  printf ("\n%.2f Pakistani_Rupee = %.2f Euro", amount, euro);
	  break;
	case 5:
	  yen = amount *0.63;
	 printf ("\n%.2f Pakistani_Rupee = %.2f Japanese_Yen", amount, yen);
	  break;
	case 6:
	  canada= amount * 0.0072;
	  printf ("\n%.2f Pakistani_Rupee = %.2f Canadian_Dollar", amount,canada );
	  break;
	case 7:
	  yuan = amount *0.036;
	  printf ("\n%.2f Pakistani_Rupee = %.2f Chinese_Yuan", amount, yuan);
	  break;
	case 8:
	  pakistan= amount *1;
	  printf ("\n%.2f Pakistani_Rupee = %.2f Pakistani_Rupee", amount, pakistan);
	  break;
	case 9:
	  singapore= amount *0.077;
	  printf ("\n%.2f Pakistani_Rupee = %.2f Singapore_Dollar", amount,singapore);
	  break;
	  case 10:
	  riyal = amount *0.021;
	  printf ("\n%.2f Pakistani_Rupee = %.2f Saudi_Riyal", amount, riyal);
	  break;
	case 11:
	dhiram= amount * 0.021;
	  printf ("\n%.2f Pakistani_Rupee = %.2f UAE_Dhiram", amount,dhiram);
	  break;
	default:
	  printf ("\nInvalid Input");
	}
      return 0;
    }
  break;
case 9:
  { printf ("Following are the Choices:  \nEnter 1: Indian_Rupee  \nEnter 2: US_Dollar \nEnter 3: Pound \nEnter 4: Euro \nEnter 5: Japanese_Yen \nEnter 6: Canadian_Dollar\nEnter 7: Chinese_Yuan \nEnter 8: Pakistani_Rupee \nEnter 9: Singapore_Dollar \nEnter 10: Saudi_Riyal \nEnter 11: UAE_Dhiram");
  printf ("\nEnter your choice: ");
scanf ("%d", &choice);
      switch (choice)
	{
	case 1:
	 rupee = amount * 54.59;
	  printf ("\n%.2f Singapore_Dollar = %.2f Indian_Rupee", amount, rupee);
	  break;
	case 2:
	  us= amount * 0.74;
	  printf ("\n%.2f Singapore_Dollar = %.2f US_Dollar", amount,us);
	  break;
	case 3:
	  pound = amount *0.54;
	  printf ("\n%.2f Singapore_Dollar = %.2f Pound", amount, pound);
	  break;
	case 4:
	  euro = amount *0.65;
	  printf ("\n%.2f Singapore_Dollar = %.2f Euro", amount, euro);
	  break;
	case 5:
	  yen = amount *84.90;
	  printf ("\n%.2f Singapore_Dollar = %.2f Japanese_Yen", amount, yen);
	  break;
	case 6:
	  canada= amount * 0.94;
	  printf ("\n%.2f Singapore_Dollar = %.2f Canadian_Dollar", amount,canada );
	  break;
	case 7:
	  yuan = amount *4.70;
	  printf ("\n%.2f Singapore_Dollar = %.2f Chinese_Yuan", amount, yuan);
	  break;
	case 8:
	  pakistan= amount *130.31;
	  printf ("\n%.2f Singapore_Dollar = %.2f Pakistani_Rupee", amount, pakistan);
	  break;
	case 9:
	  singapore= amount *1;
	  printf ("\n%.2f Singapore_Dollar = %.2f Singapore_Dollar", amount,singapore);
	  break;
	  case 10:
	  riyal = amount *2.77;
	  printf ("\n%.2f Singapore_Dollar = %.2f Saudi_Riyal", amount, riyal);
	  break;
	case 11:
	  dhiram= amount * 2.72;
	  printf ("\n%.2f Singapore_Dollar = %.2f UAE_Dhiram", amount,
		 dhiram);
	  break;
	default:
	  printf ("\nInvalid Input");
	}
      return 0;
    }
  break;
case 10:
  { printf ("Following are the Choices:  \nEnter 1: Indian_Rupee  \nEnter 2: US_Dollar \nEnter 3: Pound \nEnter 4: Euro \nEnter 5: Japanese_Yen \nEnter 6: Canadian_Dollar\nEnter 7: Chinese_Yuan \nEnter 8: Pakistani_Rupee \nEnter 9: Singapore_Dollar \nEnter 10: Saudi_Riyal \nEnter 11: UAE_Dhiram");
  printf ("\nEnter your choice: ");
scanf ("%d", &choice);
     switch (choice)
	{
	case 1:
	 rupee = amount * 19.83;
	  printf ("\n%.2f Saudi_Riyal = %.2f Indian_Rupee", amount, rupee);
	  break;
	case 2:
	  us= amount *0.27;
	  printf ("\n%.2f Saudi_Riyal = %.2f US_Dollar", amount,us);
	  break;
	case 3:
	  pound = amount * 0.20;
	  printf ("\n%.2f Saudi_Riyal = %.2f Pound", amount, pound);
	  break;
	case 4:
	  euro = amount *0.23;
	  printf ("\n%.2f Saudi_Riyal = %.2f Euro", amount, euro);
	  break;
	case 5:
	  yen = amount *30.63;
	  printf ("\n%.2f Saudi_Riyal = %.2f Japanese_Yen", amount, yen);
	  break;
	case 6:
	  canada= amount *0.33 ;
	  printf ("\n%.2f Saudi_Riyal = %.2f Canadian_Dollar", amount,canada );
	  break;
	case 7:
	  yuan = amount *1.69;
	  printf ("\n%.2f Saudi_Riyal = %.2f Chinese_Yuan", amount, yuan);
	  break;
	case 8:
	  pakistan= amount *46.89;
	  printf ("\n%.2f Saudi_Riyal = %.2f Pakistani_Rupee", amount, pakistan);
	  break;
	case 9:
	  singapore= amount * 0.36;
	  printf ("\n%.2f Saudi_Riyal = %.2f Singapore_Dollar", amount,singapore);
	  break;
	  case 10:
	  riyal = amount *1;
	  printf ("\n%.2f Saudi_Riyal = %.2f Saudi_Riyal", amount, riyal);
	  break;
	case 11:
 dhiram= amount * 0.98;
	  printf ("\n%.2f Saudi_Riyal = %.2f UAE_Dhiram", amount,
		  dhiram);
	  break;
	default:
	  printf ("\nInvalid Input");
	}
      return 0;
    }
  break;
case 11:
{ printf ("Following are the Choices:  \nEnter 1: Indian_Rupee  \nEnter 2: US_Dollar \nEnter 3: Pound \nEnter 4: Euro \nEnter 5: Japanese_Yen \nEnter 6: Canadian_Dollar\nEnter 7: Chinese_Yuan \nEnter 8: Pakistani_Rupee \nEnter 9: Singapore_Dollar \nEnter 10: Saudi_Riyal \nEnter 11: UAE_Dhiram");
  printf ("\nEnter your choice: ");
scanf ("%d", &choice);
 switch (choice)
	{
	case 1:
	 rupee = amount * 20.26;
	  printf ("\n%.2f UAE_Dhiram = %.2f Indian_Rupee",amount,rupee);
	case 2:
	  us= amount * 0.27;
	  printf ("\n%.2f UAE_Dhiram = %.2f US_Dollar", amount,us);
	  break;
	case 3:
	  pound = amount *0.20;
	  printf ("\n%.2f UAE_Dhiram = %.2f Pound", amount, pound);
	  break;
	case 4:
	  euro = amount * 0.24;
	  printf ("\n%.2f UAE_Dhiram = %.2f Euro", amount, euro);
	  break;
	case 5:
	  yen = amount *31.27 ;
	  printf ("\n%.2f UAE_Dhiram = %.2f Japanese_Yen", amount, yen);
	  break;
	case 6:
	  canada= amount * 0.34  ;
	  printf ("\n%.2f Australian_Dollar = %.2f Canadian_Dollar", amount,canada );
	  break;
	case 7:
	  yuan = amount *1.73 ;
	  printf ("\n%.2f UAE_Dhiram = %.2f Chinese_Yuan", amount, yuan);
	  break;
	case 8:
	  pakistan= amount * 47.90 ;
	  printf ("\n%.2f UAE_Dhiram = %.2f Pakistani_Rupee", amount, pakistan);
	  break;
	case 9:
	  singapore= amount * 0.37 ;
	  printf ("\n%.2f UAE_Dhiram = %.2f Singapore_Dollar", amount,singapore);
	  break;
	  case 10:
	  riyal = amount * 1.02 ;
	  printf ("\n%.2f UAE_Dhiram = %.2f Saudi_Riyal", amount, riyal);
	  break;
	case 11:
	  dhiram= amount * 1;
	  printf ("\n%.2f UAE_Dhiram = %.2f UAE_Dhiram", amount,
		  dhiram);
	  break;
	default:
	  printf ("\nInvalid Input"); }
      return 0;
    }
  break;
default:
  printf ("\nInvalid Input");
}
printf("\n===============================THANKYOU===================================");
return 0;
}
