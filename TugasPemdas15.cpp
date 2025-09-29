#include <iostream>
using namespace std;

int main() {
    int n = 5; 


	cout << "\n";
	for (int i = 0; i < n; i++) {
    	cout << "F ";
    	if (i == 0) { 
        	for (int j = 1; j < n; j++) cout << "F ";
  		} else if (i == n/2) 
							{ 
        for (int j = 1; j < n-1; j++) cout << "F ";
    }
    cout << endl;
	}



 
	cout << "\n";
	for (int i = 0; i < n; i++) {
    	for (int sp = 0; sp < n - i - 1; sp++) cout << " ";
    		for (int j = 0; j < 2*i+1; j++) {
        	if (i == n/2 || j == 0 || j == 2*i)
            cout << "A";
        	else
            cout << " ";
    }
    cout << endl;
}



cout << "\n";
	for (int i = 0; i < n; i++) {
    	if (i == 0) {
        	for (int j = 0; j < n; j++) cout << "T ";
    	} else {
        	for (int j = 0; j < n/2; j++) cout << "  ";  
        	cout << "T";
    	}
    cout << endl;
}


  
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << "H ";
        for (int j = 0; j < n-2; j++) {
            if (i == n/2) cout << "H ";
            else cout << "  ";
        }
        cout << "H " << endl;
    }

    
    cout << "\n";
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n-1) {
            for (int j = 0; j < n; j++) cout << "I ";
        } else {
            for (int j = 0; j < n/2; j++) cout << "  ";
            cout << "I ";
        }
        cout << endl;
    }

    
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << "N ";
        for (int j = 0; j < n-2; j++) {
            if (j == i) cout << "N ";
            else cout << "  ";
        }
        cout << "N " << endl;
    }

    return 0;
}

