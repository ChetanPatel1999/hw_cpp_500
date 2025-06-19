#include <iostream>
using namespace std;
class account
{
    string name;
    string ac_no;
    int belence;
    static int total_bank_belance;
    static string bank_name;

public:
    static void create_account(account ac[], int index)
    {
        printf("\nplease fill account detail to open account :-\n");
        cout << "enter your name : ";
        cin >> ac[index].name;
        cout << "enter account number : ";
        cin >> ac[index].ac_no;
        cout << "enter your initial belence : ";
        cin >> ac[index].belence;

        cout << "\naccount create successfully\n\n";
        total_bank_belance = total_bank_belance + ac[index].belence;
    }
    static void display_accounts(account ac[], int index)
    {
        if (index == 0)
        {
            cout << "\n no one account is create in bank\nfrist create account then display\n\n";
        }
        else
        {
            int i;
            for (i = 0; i < index; i++)
            {
                cout << "\naccount " << i + 1 << " details : \n";
                cout << "bank name : " << bank_name << endl;
                cout << "account holder name : " << ac[i].name << endl;
                cout << "account number : " << ac[i].ac_no << endl;
                cout << "account belence: " << ac[i].belence << "\n\n";
            }
        }
    }
    static void display_account(account ac[], int index)
    {
        if (index == 0)
        {
            cout << "\n no one account is create in bank\nfrist create account then display\n\n";
        }
        else
        {
            int i, f = 0;
            string num;
            cout << "\nenter your account number :  ";
            cin >> num;
            for (i = 0; i < index; i++)
            {
                if (ac[i].ac_no == num)
                {
                    cout << "\naccount " << i + 1 << " details : \n";
                    cout << "bank name : " << bank_name << endl;
                    cout << "account holder name : " << ac[i].name << endl;
                    cout << "account number : " << ac[i].ac_no << endl;
                    cout << "account belence: " << ac[i].belence << "\n\n";
                    f = 1;
                }
            }
            if (f == 0)
            {
                cout << "\n wrong account number \n\n";
            }
        }
    }
    static void display_total_belence()
    {
        cout << "\nbank name :- " << bank_name << endl;
        cout << "Total bank belence :- " << total_bank_belance << "\n\n";
    }
    static void credit(account ac[], int index)
    {
        if (index == 0)
        {
            cout << "\n no one account is create in bank\nfrist create account then credit\n\n";
        }
        else
        {
            int i, f = 0;
            string num;
            cout << "\nOk you want to credit ammount ......\n ";
            cout << "enter your account number : ";
            cin >> num;
            for (i = 0; i < index; i++)
            {
                if (ac[i].ac_no == num)
                {
                    int b;
                    cout << "enter credit ammount : " << endl;
                    cin >> b;
                    ac[i].belence = ac[i].belence + b;
                    total_bank_belance = total_bank_belance + b;
                    f = 1;
                    cout << "\n " << b << "ammount credit successfully " << " in " << ac[i].name << " account\n\n";
                }
            }
            if (f == 0)
            {
                cout << "\n wrong account number \n\n";
            }
        }
    }
    static void debit(account ac[], int index)
    {
        if (index == 0)
        {
            cout << "\n no one account is create in bank\nfrist create account then debit\n\n";
        }
        else
        {
            int i, f = 0;
            string num;
            cout << "\nOk you want to debit ammount ......\n ";
            cout << "enter your account number : ";
            cin >> num;
            for (i = 0; i < index; i++)
            {
                if (ac[i].ac_no == num)
                {
                    f = 1;
                    int b;
                    cout << "enter debit ammount : " << endl;
                    cin >> b;
                    if (b < ac[i].belence)
                    {
                        ac[i].belence = ac[i].belence - b;
                        total_bank_belance = total_bank_belance - b;

                        cout << "\n " << b << "ammount debit successfully " << " in " << ac[i].name << " account\n\n";
                    }
                    else
                    {
                        cout << "\n insuffician belence \n";
                        cout << "you have only " << ac[i].belence << " rs\n\n";
                    }
                }
            }
            if (f == 0)
            {
                cout << "\n wrong account number \n\n";
            }
        }
    }
};
int account::total_bank_belance = 0;
string account::bank_name = "HDFC Bank";
int main()
{
    account ac[10];
    int num, index = 0;
    while (1)
    {
        printf("<--------bank app-------->\n");
        printf(" 1. create account \n");
        printf(" 2. display accounts \n");
        printf(" 3. display individual \n");
        printf(" 4. credit \n");
        printf(" 5. debit \n");
        printf(" 6. total bank belence \n");
        printf(" 7. for exit  \n");
        printf("choose any option : ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            account::create_account(ac, index);
            index++;
            break;
        case 2:
            account::display_accounts(ac, index);
            break;
        case 3:
            account::display_account(ac, index);
            break;
        case 4:
            account::credit(ac, index);
            break;
        case 5:
            account::debit(ac, index);
            break;
        case 6:
            account::display_total_belence();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("\nyou chhose wrong option\n\n");
            break;
        }
    }
    return 0;
}