#include <iostream>
using namespace std;

int main()
{
    int n;
    
    // TODO: ask user for input
    cout << "Enter number" << endl;
    cin >> n;
    
    // TODO: outer loop for each row
    for (int i=0;i<n;i++){
        
        char letter = 'A';

        for (int j=0;j<=i;j++){
            cout << letter << " ";
            letter++;
        }

        cout << endl;
        
    }

    
        // TODO: inner loop to print letters for this row .. char 65-69 ascii
            

            // TODO: print the letter for this column

        // TODO: print newline after each row


    return 0;
}
