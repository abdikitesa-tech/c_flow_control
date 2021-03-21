//A program that accepts user's choice of table shape, measurement and finishing material , as an input, calculate accordingly and display total cost as an output
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;;
int main()
{ cout << fixed << setprecision(2);// money
    char tableShape;
    float tableLength = 0,tableArea = 0,tableWidth = 0,tableDiameter = 0,tableRadius = 0,tableCost = 0,tableCostSum = 0, tableBase = 0, tableHeight = 0;
    float arrTableArea[10] = {0}; string shape [10] = {" "}; string material [10] = {" "}; float arrTableCost[10] = {0};
    const float M_PI = 3.14;
    char materialType;
    int ageTotal = 0;
    int num_Of_tableEstm = 0;
    bool materialTypeSel = 0;
    int tableIndex = 0;

    cout << "Welcome to Tables – Yours One Stop Table Shop\n"
         << "Abdi Kitesa – Master Table Builder\n"
         << "What shape of table do you want to build?\n"
         << "1. Rectangular\n"
         << "2. Square\n"
         << "3. Circular\n"
         << "4. Triangular\n"
         << "5. End\n";


    cin >> tableShape;  //accept shape choice
while (tableShape >'5') // input validation
{
    cout <<"Error – Invalid Entry. Please reenter a valid value\n";
        system("cls");
        cout <<"What shape of table do you want to build?\n"
         << "1. Rectangular\n"
         << "2. Square\n"
         << "3. Circular\n"
         << "4. triangular"
         << "5. End\n";
}
if(tableShape >= '1' && tableShape <= '3')
{
    do{
        if(tableShape == '1')   // for table choice rectangle
        {   cout << "Enter the length of the table (in inches): ";
            cin >> tableLength;
                 while (tableLength <= 0) //validation of length input
                {
                    cout << "Error – Length must be greater than zero. Please reenter a valid value";
                    cin >> tableLength;
                }
                cout << "Enter the width of the table (in inches): ";
                cin >> tableWidth;
                 while (tableWidth <= 0) //validation of width input
                {
                cout << "Error – width must be greater than zero. Please reenter a valid value";
                cin >> tableWidth;
                }
                cout << "What type of material do you want to use?\n"
                     << "1.	Laminate ($0.125 per square inch)\n"
                     << "2.	Oak ($0.25 per square inch)\n";
                cin >> materialType;

                while (materialType <= '0' && materialType > '2')
                {
                cout << "Error – type of material must be either Laminated or Oak. Please reenter a valid value";
                cin >> materialType;
                }

                if(materialType == '1') //for material choice - laminate
                {
                tableArea = tableLength * tableWidth;
                tableCost = tableArea * 0.125;
                num_Of_tableEstm++;
                tableCostSum = tableCost + tableCostSum;

               tableIndex = tableIndex + 1;
               arrTableArea[tableIndex] = tableArea;
               shape [tableIndex] = "Rectangle";
               material [tableIndex] = "Laminate";
               arrTableCost [tableIndex] = tableCost;

                }
                else        //for material choice - oak
                {
                tableArea = tableLength * tableWidth;
                tableCost = tableArea * 0.25;
                num_Of_tableEstm++;
                tableCostSum = tableCost + tableCostSum;


               tableIndex = tableIndex + 1;
               arrTableArea[tableIndex] = tableArea;
               shape [tableIndex] = "Rectangle";
               material [tableIndex] = "oak";
               arrTableCost [tableIndex] = tableCost;
                }
                    cout <<"What shape of table do you want to build?\n"
                             << "1. Rectangular\n"
                             << "2. Square\n"
                             << "3. Circular\n"
                             << "4. End\n";
                    cin >> tableShape;

        }
        else if(tableShape == '2')   // for table choice square
        {
                cout << "Enter the length of the table (in inches): ";
                cin >> tableLength;
                while (tableLength <= 0)    //validation of length input
                {
                cout << "Error – Length must be greater than zero. Please reenter a valid value";
                cin >> tableLength;
                }

                cout << "What type of material do you want to use?\n"
                     << "1.	Laminate ($0.125 per square inch)\n"
                     << "2.	Oak ($0.25 per square inch)\n";
                cin >> materialType;

                while (materialType <= '0' && materialType > '2')
                {
                cout << "Error – type of material must be either Laminated or Oak. Please reenter a valid value";
                cin >> materialType;
                }
                if(materialType == '1')
                {
                tableArea = tableLength * tableLength;
                tableCost = tableArea * 0.125;
                num_Of_tableEstm++;
                tableCostSum = tableCost + tableCostSum;


               tableIndex = tableIndex + 1;
               arrTableArea[tableIndex] = tableArea;
               shape [tableIndex] = "Rectangle";
               material [tableIndex] = "Laminate";
               arrTableCost [tableIndex] = tableCost;
                }
                else
                {
                tableArea = tableLength * tableWidth;
                tableCost = tableArea * 0.25;
                num_Of_tableEstm++;
                tableCostSum = tableCost + tableCostSum;


                tableIndex = tableIndex + 1;
               arrTableArea[tableIndex] = tableArea;
               shape [tableIndex] = "Rectangle";
               material [tableIndex] = "oak";
               arrTableCost [tableIndex] = tableCost;
                }
                    cout <<"What shape of table do you want to build?\n"
                             << "1. Rectangular\n"
                             << "2. Square\n"
                             << "3. Circular\n"
                             << "4. triangular\n"
                             << "5. End\n";
                    cin >> tableShape;

        }
        else if(tableShape == '3')       // for table choice circle
        {
                cout << "Enter the diameter of the table (in inches): ";
                cin >> tableDiameter;
                while (tableDiameter <= 0)
                {
                cout << "Error – Length must be greater than zero. Please reenter a valid value";
                cin >> tableDiameter;
                }

                cout << "What type of material do you want to use?\n"
                     << "1.	Laminate ($0.125 per square inch)\n"
                     << "2.	Oak ($0.25 per square inch)\n";
                cin >> materialType;

                while (materialType <= '0' && materialType > '2')
                {
                cout << "Error – type of material must be either Laminated or Oak. Please reenter a valid value";
                cin >> materialType;
                }
                if(materialType == '1')
                {
                tableRadius = tableDiameter/2;          //find radius from diameter
                tableArea = M_PI*tableRadius*tableRadius;
                tableCost = tableArea * 0.125;
                num_Of_tableEstm++;                     //counter for number of table estimated
                tableCostSum = tableCost + tableCostSum;


               tableIndex = tableIndex + 1;
               arrTableArea[tableIndex] = tableArea;
               shape [tableIndex] = "Rectangle";
               material [tableIndex] = "Laminate";
               arrTableCost [tableIndex] = tableCost;
                }
                else
                {
                tableArea = tableLength * tableWidth;
                tableCost = tableArea * 0.25;
                num_Of_tableEstm++;
                tableCostSum = tableCost + tableCostSum;


                tableIndex = tableIndex + 1;
               arrTableArea[tableIndex] = tableArea;
               shape [tableIndex] = "Rectangle";
               material [tableIndex] = "oak";
               arrTableCost [tableIndex] = tableCost;
                }
                    cout <<"What shape of table do you want to build?\n"    //request for additional input
                             << "1. Rectangular\n"
                             << "2. Square\n"
                             << "3. Circular\n"
                             << "4. triangular\n"
                             << "5. End\n";

                    cin >> tableShape;

        }
 if(tableShape == '4')   // for table choice rectangle
        {   cout << "Enter the base of the table (in inches): ";
            cin >> tableBase;
                 while (tableBase <= 0) //validation of length input
                {
                    cout << "Error – Length must be greater than zero. Please reenter a valid value";
                    cin >> tableBase;
                }
                cout << "Enter the height of the table (in inches): ";
                cin >> tableHeight;
                 while (tableHeight <= 0) //validation of width input
                {
                cout << "Error – width must be greater than zero. Please reenter a valid value";
                cin >> tableWidth;
                }
                cout << "What type of material do you want to use?\n"
                     << "1.	Laminate ($0.125 per square inch)\n"
                     << "2.	Oak ($0.25 per square inch)\n";
                cin >> materialType;

                while (materialType <= '0' && materialType > '2')
                {
                cout << "Error – type of material must be either Laminated or Oak. Please reenter a valid value";
                cin >> materialType;
                }

                if(materialType == '1') //for material choice - laminate
                {
                tableArea = 1/2 * tableBase * tableHeight;
                tableCost = tableArea * 0.125;
                num_Of_tableEstm++;
                tableCostSum = tableCost + tableCostSum;

                 tableIndex = tableIndex + 1;
               arrTableArea[tableIndex] = tableArea;
               shape [tableIndex] = "Rectangle";
               material [tableIndex] = "laminate";
               arrTableCost [tableIndex] = tableCost;
                }
                else        //for material choice - oak
                {
                tableArea = 1/2 * tableBase * tableHeight;
                tableCost = tableArea * 0.25;
                num_Of_tableEstm++;
                tableCostSum = tableCost + tableCostSum;


                 tableIndex = tableIndex + 1;
               arrTableArea[tableIndex] = tableArea;
               shape [tableIndex] = "Rectangle";
               material [tableIndex] = "oak";
               arrTableCost [tableIndex] = tableCost;
                }
                    cout <<"What shape of table do you want to build?\n"
                             << "1. Rectangular\n"
                             << "2. Square\n"
                             << "3. Circular\n"
                             << "4. triangular\n"
                             << "5. End\n";
                    cin >> tableShape;

        }
        }
    while (tableShape > '0' && tableShape <= '3' && tableShape != '4');

}
if (tableShape == '5')
    {  if(num_Of_tableEstm == 0)        //if user leave without estimation request
        cout<<"no estimation today!";
        else
            {
            for (int i = 1; i <= tableIndex; i++ )
                {   cout <<"Table" << i << endl<<endl
                         <<"\t"<<"The area of " << shape [i] << "table is " << arrTableArea[i] <<"square inch"<<endl
                         <<"\t"<<"The table will be made of" << material [i] << endl
                         <<"\t"<<"the cost of the table is " << arrTableCost [i] << "Birr"<<endl;
                }
            }
    }

return 0;
}
