/* Following program is a C++ implementation of Rabin Karp 
Algorithm given in the CLRS book */
#include <iostream>
#include <fstream>
#include <string>
#include <climits> // this library allows us to use INT_MAX properly
using namespace std;
  
// d is the number of characters in the input alphabet 
#define d 256 

/* pat -> pattern
    txt -> text 
    q -> A prime number 
*/
void search(string pat, string txt, int q)
{
    int M = pat.length();
    int N = txt.length();
    int i, j; 
    int p = 0; // hash value for pattern 
    int t = 0; // hash value for txt 
    int h = 1;
    int hits = 0, false_positives = 0;
  
    // The value of h would be "pow(d, M-1)%q" 
    for (i = 0; i < M - 1; i++) {
        h = (h * d)%q;
    }
  
    // Calculate the hash value of pattern and first 
    // window of text 
    for (i = 0; i < M; i++) 
    {
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }
 
    // Slide the pattern over text one by one
    for (i = 0; i <= N - M; i++) 
    { 
  
        // Check the hash values of current window of text 
        // and pattern. If the hash values match then only 
        // check for characters one by one 
        if ( p == t ) 
        {   
            /* Check for characters one by one */
            for (j = 0; j < M; j++) 
            { 
                if (txt[i+j] != pat[j])
                  break;
            }
            
            // if p == t and pat[0...M-1] = txt[i, i+1, ...i+M-1] 
            
            if (j == M) {
                // this will count the number the pattern was found
                cout<<"Pattern found at index "<< i << endl;
                hits++;
            }
            else{
                // this will count the false positives in the text
                //      based on the pattern
                false_positives++;
                cout<<"False positives at index "<<i<<": "
                    <<txt.substr(i, M)<<endl;
            }
        }
  
        // Calculate hash value for next window of text: Remove 
        // leading digit, add trailing digit 
        if ( i < N-M ) 
        {
            t = (d*(t - (txt[i]*h)%q) + txt[i+M])%q;
            // We might get negative value of t, converting it
            // to positive 
            if (t < 0) 
            t = (t + q); 
        } 
    }

    // output that we want at the end of the file
    // displays false positives, hits and the total
    cout<<"The pattern "<<pat<<" was found "<<hits<<" times."<<endl;
    cout<<"Total number of false positives is "<<false_positives<<endl;
    cout<<"Total number of characters in the file is "<<N<<endl;
    return;
}
  
/* Driver code */
int main() 
{
    string txt, pat;

    // read text from file
    ifstream romeojulietScript("RJ.txt");

    if(romeojulietScript){
        string line;
        while(getline(romeojulietScript, line)){
            txt += line + " ";
        }
        romeojulietScript.close();
    }
    else{
        cout<<"Unable to open the file"<<endl;
        return 1;
    }

    
    // get the pattern from the user
    cout<<"Enter the pattern to search: ";
    getline(cin, pat);

      //we mod to avoid overflowing of value but we should take as big q as possible to avoid the collison
    int q = INT_MAX /1000000;
      
      // Function Call
    search(pat, txt, q);
    
    return 0;
} 




//Big Theta(m) processing time
//The average and best running time is O(n+m)
//The worst time is O(nm). Example: pat[] = â€œAAAâ€ and txt[] = â€œAAAAAAAâ€
