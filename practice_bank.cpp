#include <iostream>
#include <exception>
#include <cstring>
#include "bankAccaunt.h"
#include "user.h"
#include "bank.h"
#include "exception.h"
using namespace std;

//������, ���, ���� ������� �����, ������, ������ �������(������), ���� ����� ������������� ������ ��� ���?, ����� ������ ��� ������,



int main() {
    // ������� ������������ � ���������� ������
    User user("John Doe", 10000, 20000);

    // ������� ������� ������
    std::cout << "Current balance: " << user.GetBalance() << std::endl;
    user.Deposit(15000);



    //��� ������� �������� ������ ��� ���� ���� ���� ��������� ���������� ��������
    /*try {
        user.Withdraw(15000);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }*/
    
    
     user.Withdraw(20000);
     cout << "after withdraw balance now: " << user.GetBalance() << endl;
    
    

    
    //������
        /*user.Withdraw(-100);*/
    
     user.Deposit(-100);
    

    // ������ �������� �� ����
     
    user.Deposit(500);
    cout << "balance after depositing: " << endl;
    // ����� ������� ������� ������
    cout << "Current balance: " << user.GetBalance() << std::endl;

    return 0;
}