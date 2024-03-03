#include <iostream>
#include <string>
using namespace std;
    
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//										सुखदुःखे समे कृत्वा लाभालाभौ जयाजयौ।										//
//										ततो युद्धाय युज्यस्व नैवं पापमवाप्स्यसि॥  								   		 //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
    int l = 1, r = 1e6;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        string s;
        cout << mid << "\n";
        fflush(stdout);
        cin >> s;
        if (s.size() == 1)
            r = mid - 1;
        else{
            if(l==mid)
                break;
            l = mid;
        }
    }
    cout << "! " << l << "\n";
    fflush(stdout);
}