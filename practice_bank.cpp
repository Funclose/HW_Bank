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

    // ������� ������ �����, ����������� ������
    
     user.Withdraw(1500);
    
    

    // ������� ������ ������������� �����
    
        user.Withdraw(-100);
    
    

    // ������ �������� �� ����
    user.Deposit(500);

    // ����� ������� ������� ������
    std::cout << "Current balance: " << user.GetBalance() << std::endl;

    return 0;
}