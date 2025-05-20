#include <iostream>
#include <string>
using namespace std;
class IPAddress {
    private:
      string ip;
    public:
    IPAddress(string ipAddress)  {  ip = ipAddress;}
    void print() {
        cout << ip << endl;
    }
     string getIP()  { 
        return ip;
    }

};
class IPAddressChecked : public IPAddress {
public:
    bool isCorrect;

    IPAddressChecked(string ipAddress) : IPAddress(ipAddress) {
        isCorrect = isValidIPAddress(ipAddress);
    }
    void print() {
        cout << getIP() << " - " << (isCorrect ? "Correct" : "Not Correct") << endl;
    }

    bool isValidIPAddress(string ipAddress) {
        int count = 0;
        size_t start = 0;
        while (start < ipAddress.size()) {
            size_t end = ipAddress.find('.', start); 
            if (end == string::npos) end = ipAddress.size(); 

            string segment = ipAddress.substr(start, end - start); 
             int num = stoi(segment);
           if (num < 0 || num > 255) {
            return false;
        }

        count++; 
        start = end + 1; 

        }
        return count == 4;
    }
};
int main() {
    string ip1, ip2, ip3;
    cout << "Enter three IP addresses:\n";
    cin >> ip1 >> ip2 >> ip3;
    IPAddress ipObj1(ip1);
    IPAddressChecked ipObj2(ip2);
    IPAddressChecked ipObj3(ip3);
    ipObj1.print(); 
    ipObj2.print();  
    ipObj3.print();  
    return 0;
}
